cmake_minimum_required(VERSION 3.10)
project(Study C)

set(CMAKE_C_STANDARD 11)

# 设置输出目录到 exeCache
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/exeCache)

# 添加你要编译的文件（根据需要选择或修改）
add_executable(Study StudyX1/Test.c
        StudyX1/Test6.c
        StudyX1/Test7.c
        StudyX1/Test8.c
        StudyX1/Test9.c
        StudyX1/Test10.c
        StudyX1/Test11.c
        StudyX2/X01.c
        StudyX2/X02.c
        StudyX2/X03.c
        StudyX2/X04.c
        StudyX2/X05.c
        ClassBegin.c
        StudyX2/X06.c
        StudyX2/X07.c
        StudyX2/X08.c
        StudyX2/X09.c
        StudyX2/X10.c
        StudyX3/X01.c
        StudyX3/X02.c
        StudyX3/X03.c
        StudyX3/X04.c
        StudyX3/Test.c
        StudyX3/X05.c
        StudyX3/X06.c
        StudyX3/X07.c
        StudyX4_struct/struct01.c
        StudyX4_struct/Exp.c
        StudyX4_struct/struct02.c
        StudyX4_struct/struct03.c
        StudyX4_struct/struct04.c
        StudyX4_struct/struct05.c
        StudyX4_struct/Exp2.c)
