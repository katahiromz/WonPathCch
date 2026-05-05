// tests.c --- Tests for WonPathCch
// Author: katahiromz
// License: LGPL 2.1 or later
#include <windows.h>
#include <stdio.h>
#include "WonPathCch.h"

int main(void)
{
    WCHAR szPath[MAX_PATH];
    GetModuleFileNameW(NULL, szPath, _countof(szPath));
    printf("%S\n", szPath);
    PathCchRemoveFileSpec(szPath, _countof(szPath));
    printf("%S\n", szPath);
    PathCchRemoveFileSpec(szPath, _countof(szPath));
    printf("%S\n", szPath);
    return 0;
}
