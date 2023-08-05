#ifndef BYE_WINHTTP_MACROS_H
#define BYE_WINHTTP_MACROS_H

#if LOG_CALLS
#   define LOG_CALL printf("[ByeWinHttp] winhttp.dll!%s\n", __FUNCTION__)
#else
#   define LOG_CALL
#endif

#define EXPORT __declspec(dllexport)

#endif //BYE_WINHTTP_MACROS_H
