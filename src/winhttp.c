#include <stdio.h>

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "macros.h"


#define WINHTTP_ERROR_BASE                     12000
#define ERROR_WINHTTP_INTERNAL_ERROR           (WINHTTP_ERROR_BASE + 4)
#define ERROR_WINHTTP_INVALID_OPTION           (WINHTTP_ERROR_BASE + 9)
#define ERROR_WINHTTP_OPERATION_CANCELLED      (WINHTTP_ERROR_BASE + 17)
#define ERROR_WINHTTP_CANNOT_CONNECT           (WINHTTP_ERROR_BASE + 29)
#define ERROR_WINHTTP_CONNECTION_ERROR         (WINHTTP_ERROR_BASE + 30)
#define ERROR_WINHTTP_HEADER_NOT_FOUND         (WINHTTP_ERROR_BASE + 150)
#define ERROR_WINHTTP_AUTO_PROXY_SERVICE_ERROR (WINHTTP_ERROR_BASE + 178)


typedef LPVOID HINTERNET;
typedef HINTERNET *LPHINTERNET;
typedef WORD INTERNET_PORT;
typedef INTERNET_PORT *LPINTERNET_PORT;
typedef LPVOID WINHTTP_STATUS_CALLBACK;


EXPORT HINTERNET WINAPI WinHttpConnect(
        HINTERNET hSession,
        LPCWSTR pswzServerName,
        INTERNET_PORT nServerPort,
        DWORD dwReserved
) {
    SetLastError(ERROR_WINHTTP_OPERATION_CANCELLED);
    return NULL;
}

EXPORT BOOL WINAPI WinHttpSetOption(
        HINTERNET hInternet,
        DWORD dwOption,
        LPVOID lpBuffer,
        DWORD dwBufferLength
) {
    LOG_CALL;
    return TRUE;
}

EXPORT BOOL WINAPI WinHttpReadData(
        HINTERNET hRequest,
        LPVOID lpBuffer,
        DWORD dwNumberOfBytesToRead,
        LPDWORD lpdwNumberOfBytesRead
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_CONNECTION_ERROR);
    return FALSE;
}

EXPORT BOOL WINAPI WinHttpGetIEProxyConfigForCurrentUser(
        PVOID pProxyConfig
) {
    LOG_CALL;
    SetLastError(ERROR_FILE_NOT_FOUND);
    return FALSE;
}

EXPORT BOOL WINAPI WinHttpQueryHeaders(
        HINTERNET hRequest,
        DWORD dwInfoLevel,
        LPCWSTR pwszName,
        LPVOID lpBuffer,
        LPDWORD lpdwBufferLength,
        LPDWORD lpdwIndex
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_HEADER_NOT_FOUND);
    return FALSE;
}

EXPORT BOOL WINAPI WinHttpSetTimeouts(
        HINTERNET hInternet,
        int nResolveTimeout,
        int nConnectTimeout,
        int nSendTimeout,
        int nReceiveTimeout
) {
    LOG_CALL;
    return TRUE;
}

EXPORT WINHTTP_STATUS_CALLBACK WINAPI WinHttpSetStatusCallback(
        HINTERNET hInternet,
        WINHTTP_STATUS_CALLBACK lpfnInternetCallback,
        DWORD dwNotificationFlags,
        DWORD_PTR dwReserved
) {
    LOG_CALL;
    return NULL;
}

EXPORT HINTERNET WINAPI WinHttpOpenRequest(
        HINTERNET hConnect,
        LPCWSTR pwszVerb,
        LPCWSTR pwszObjectName,
        LPCWSTR pwszVersion,
        LPCWSTR pwszReferrer,
        LPCWSTR *ppwszAcceptTypes,
        DWORD dwFlags
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_OPERATION_CANCELLED);
    return NULL;
}

EXPORT BOOL WINAPI WinHttpQueryOption(
        HINTERNET hInternet,
        DWORD dwOption,
        LPVOID lpBuffer,
        LPDWORD lpdwBufferLength
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_INVALID_OPTION);
    return FALSE;
}

EXPORT HINTERNET WINAPI WinHttpOpen(
        LPCWSTR pszAgentW,
        DWORD dwAccessType,
        LPCWSTR pszProxyW,
        LPCWSTR pszProxyBypassW,
        DWORD dwFlags
) {
    LOG_CALL;
    return (HINTERNET) 0x1337;
}

EXPORT BOOL WINAPI WinHttpReceiveResponse(
        HINTERNET hRequest,
        LPVOID lpReserved
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_CANNOT_CONNECT);
    return FALSE;
}

EXPORT BOOL WINAPI WinHttpSendRequest(
        HINTERNET hRequest,
        LPCWSTR lpszHeaders,
        DWORD dwHeadersLength,
        LPVOID lpOptional,
        DWORD dwOptionalLength,
        DWORD dwTotalLength,
        DWORD_PTR dwContext
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_CANNOT_CONNECT);
    return FALSE;
}

EXPORT BOOL WINAPI WinHttpGetProxyForUrl(
        HINTERNET hSession,
        LPCWSTR lpcwszUrl,
        LPVOID pAutoProxyOptions,
        LPVOID pProxyInfo
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_AUTO_PROXY_SERVICE_ERROR);
    return FALSE;
}

EXPORT BOOL WINAPI WinHttpCloseHandle(
        HINTERNET hInternet
) {
    LOG_CALL;
    return TRUE;
}

EXPORT BOOL WINAPI WinHttpGetDefaultProxyConfiguration(
        LPVOID pProxyInfo
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_INTERNAL_ERROR);
    return FALSE;
}
