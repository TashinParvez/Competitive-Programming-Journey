#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{
    // Delete all .exe, .o, .bin, .prob files
    system("del /S *.exe && del /S *.o && del /S *.bin");
    system("del /S tempCodeRunnerFile.cpp");

    return 0;
}
