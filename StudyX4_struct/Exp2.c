//
// Created by SpaceXe on 2026/3/21.
//
#include <windows.h>
#include <stdlib.h>
#include <time.h>

// 游戏常量
#define WINDOW_WIDTH  800
#define WINDOW_HEIGHT 600
#define TARGET_RADIUS 30
#define TARGET_COUNT  5

// 目标结构体
typedef struct {
    int x, y;       // 坐标
    int active;     // 是否活跃（1=存在，0=被击中）
} Target;

Target targets[TARGET_COUNT];
int score = 0;
int shots = 0;
HWND hwnd;

// 初始化目标
void InitTargets() {
    for(int i = 0; i < TARGET_COUNT; i++) {
        targets[i].x = rand() % (WINDOW_WIDTH - 2 * TARGET_RADIUS) + TARGET_RADIUS;
        targets[i].y = rand() % (WINDOW_HEIGHT - 2 * TARGET_RADIUS) + TARGET_RADIUS;
        targets[i].active = 1;
    }
}
void DrawGame(HDC hdc) {
    char text[100];
    RECT rect;
    HBRUSH bgBrush = CreateSolidBrush(RGB(30, 30, 30));
    FillRect(hdc, &(RECT){0, 0, WINDOW_WIDTH, WINDOW_HEIGHT}, bgBrush);
    DeleteObject(bgBrush);
    for(int i = 0; i < TARGET_COUNT; i++) {
        if(targets[i].active) {
            HBRUSH targetBrush = CreateSolidBrush(RGB(255, 0, 0));
            SelectObject(hdc, targetBrush);
            Ellipse(hdc,
                    targets[i].x - TARGET_RADIUS,
                    targets[i].y - TARGET_RADIUS,
                    targets[i].x + TARGET_RADIUS,
                    targets[i].y + TARGET_RADIUS);
            DeleteObject(targetBrush);
        }
    }

    // 绘制分数和命中率
    sprintf(text, "得分: %d  射击次数: %d  命中率: %.1f%%",
            score, shots, shots ? (float)score / shots * 100 : 0);
    SetBkMode(hdc, TRANSPARENT);
    SetTextColor(hdc, RGB(255, 255, 255));
    TextOut(hdc, 10, 10, text, strlen(text));

    // 绘制准星（鼠标位置）
    POINT pt;
    GetCursorPos(&pt);
    ScreenToClient(hwnd, &pt);

    HPEN pen = CreatePen(PS_SOLID, 2, RGB(0, 255, 0));
    SelectObject(hdc, pen);
    MoveToEx(hdc, pt.x - 10, pt.y, NULL);
    LineTo(hdc, pt.x + 10, pt.y);
    MoveToEx(hdc, pt.x, pt.y - 10, NULL);
    LineTo(hdc, pt.x, pt.y + 10);
    DeleteObject(pen);
}

// 处理射击
void Shoot(int x, int y) {
    shots++;
    for(int i = 0; i < TARGET_COUNT; i++) {
        if(targets[i].active) {
            int dx = x - targets[i].x;
            int dy = y - targets[i].y;
            if(dx * dx + dy * dy <= TARGET_RADIUS * TARGET_RADIUS) {
                targets[i].active = 0;
                score++;

                // 如果所有目标都被击中，重新生成
                int allHit = 1;
                for(int j = 0; j < TARGET_COUNT; j++) {
                    if(targets[j].active) allHit = 0;
                }
                if(allHit) {
                    InitTargets();
                }
                break;
            }
        }
    }
    InvalidateRect(hwnd, NULL, TRUE);
}

// 窗口过程
LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch(msg) {
        case WM_LBUTTONDOWN: {
            int x = LOWORD(lParam);
            int y = HIWORD(lParam);
            Shoot(x, y);
            break;
        }
        case WM_PAINT: {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            DrawGame(hdc);
            EndPaint(hWnd, &ps);
            break;
        }
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hWnd, msg, wParam, lParam);
    }
    return 0;
}

// 主函数
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow) {
    srand(time(NULL));

    WNDCLASS wc = {0};
    wc.lpfnWndProc = WndProc;
    wc.hInstance = hInstance;
    wc.hbrBackground = CreateSolidBrush(RGB(0, 0, 0));
    wc.lpszClassName = "FPSGame";

    RegisterClass(&wc);

    hwnd = CreateWindow("FPSGame", "简单FPS射击游戏 - 点击目标射击",
                        WS_OVERLAPPEDWINDOW | WS_VISIBLE,
                        100, 100, WINDOW_WIDTH, WINDOW_HEIGHT,
                        NULL, NULL, hInstance, NULL);

    InitTargets();

    MSG msg;
    while(GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return msg.wParam;
}