#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{
    // Delete all .exe, .o, .bin, .prob files
    system("del /S *.exe && del /S *.o && del /S *.bin && del /S *.prob");
    system("del /S tempCodeRunnerFile.cpp");

    // Delete all .cph folders and their contents recursively
    // system("for /d /r %i in (*cph*) do rmdir /S /Q %i");

    // Optionally add and push changes to Git
    // system("git add .");
    // system("git commit -m \"add some code\"");
    // system("git push");

    return 0;
}
