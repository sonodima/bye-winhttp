#include <stdio.h>

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <windows.h>


VOID InitConsole(VOID) {
    AllocConsole();

    FILE *pFile = NULL;
    freopen_s(&pFile, "CONOUT$", "w", stdout);
    freopen_s(&pFile, "CONOUT$", "w", stderr);

    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);

    printf("[ByeWinHttp] Library Loaded\n");
}

VOID DeleteConsole(VOID) {
    setvbuf(stdout, NULL, _IOFBF, BUFSIZ);
    setvbuf(stderr, NULL, _IOFBF, BUFSIZ);

    FreeConsole();
}

BOOL APIENTRY DllMain(HMODULE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    switch (fdwReason) {
        case DLL_PROCESS_ATTACH:
            InitConsole();
            break;

        case DLL_PROCESS_DETACH:
            DeleteConsole();
            break;

        default: break;
    }

    return TRUE;
}
