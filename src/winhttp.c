#include <stdio.h>

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "macros.h"


#define WINHTTP_ERROR_BASE                     12000
#define ERROR_WINHTTP_INTERNAL_ERROR           (WINHTTP_ERROR_BASE + 4)
#define ERROR_WINHTTP_INVALID_URL              (WINHTTP_ERROR_BASE + 5)
#define ERROR_WINHTTP_INVALID_OPTION           (WINHTTP_ERROR_BASE + 9)
#define ERROR_WINHTTP_OPERATION_CANCELLED      (WINHTTP_ERROR_BASE + 17)
#define ERROR_WINHTTP_INCORRECT_HANDLE_STATE   (WINHTTP_ERROR_BASE + 19)
#define ERROR_WINHTTP_CANNOT_CONNECT           (WINHTTP_ERROR_BASE + 29)
#define ERROR_WINHTTP_CONNECTION_ERROR         (WINHTTP_ERROR_BASE + 30)
#define ERROR_WINHTTP_HEADER_NOT_FOUND         (WINHTTP_ERROR_BASE + 150)
#define ERROR_WINHTTP_AUTO_PROXY_SERVICE_ERROR (WINHTTP_ERROR_BASE + 178)
#define ERROR_WINHTTP_AUTODETECTION_FAILED     (WINHTTP_ERROR_BASE + 180)

#define WINHTTP_AUTH_SCHEME_BASIC      0x00000001
#define WINHTTP_AUTH_SCHEME_NTLM       0x00000002
#define WINHTTP_AUTH_SCHEME_PASSPORT   0x00000004
#define WINHTTP_AUTH_SCHEME_DIGEST     0x00000008
#define WINHTTP_AUTH_SCHEME_NEGOTIATE  0x00000010

#define WINHTTP_AUTH_TARGET_SERVER 0x00000000
#define WINHTTP_AUTH_TARGET_PROXY  0x00000001

#define WINHTTP_WEB_SOCKET_ENDPOINT_TERMINATED_CLOSE_STATUS 1001


typedef LPVOID HINTERNET, *LPHINTERNET;
typedef WORD INTERNET_PORT, *LPINTERNET_PORT;
typedef int INTERNET_SCHEME, *LPINTERNET_SCHEME;
typedef int WINHTTP_WEB_SOCKET_BUFFER_TYPE;
typedef int WINHTTP_PROXY_SETTINGS_TYPE;

typedef LPVOID LPURL_COMPONENTS;
typedef LPVOID PWINHTTP_PROXY_INFO;
typedef LPVOID PWINHTTP_EXTENDED_HEADER;
typedef LPVOID PWINHTTP_HEADER_NAME;
typedef LPVOID PWINHTTP_QUERY_CONNECTION_GROUP_RESULT;
typedef LPVOID PWINHTTP_AUTOPROXY_OPTIONS;
typedef LPVOID PWINHTTP_PROXY_INFO;
typedef LPVOID PWINHTTP_PROXY_RESULT;
typedef LPVOID PWINHTTP_PROXY_RESULT_EX;
typedef LPVOID PWINHTTP_CURRENT_USER_IE_PROXY_CONFIG;
typedef LPVOID PWINHTTP_PROXY_SETTINGS;
typedef LPVOID PWINHTTP_PROXY_SETTINGS_PARAM;

typedef LPVOID WINHTTP_STATUS_CALLBACK;
typedef LPVOID WINHTTP_PROXY_CHANGE_CALLBACK;
typedef PVOID WINHTTP_PROXY_CHANGE_REGISTRATION_HANDLE;


EXPORT WINHTTP_STATUS_CALLBACK WINAPI WinHttpSetStatusCallback(
        HINTERNET hInternet,
        WINHTTP_STATUS_CALLBACK lpfnInternetCallback,
        DWORD dwNotificationFlags,
        DWORD_PTR dwReserved
) {
    LOG_CALL;
    return NULL;
}

EXPORT BOOL WINAPI WinHttpTimeFromSystemTime(
        CONST SYSTEMTIME *pst,
        LPWSTR pwszTime
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_INTERNAL_ERROR);
    return FALSE;
}

EXPORT BOOL WINAPI WinHttpTimeToSystemTime(
        LPCWSTR pwszTime,
        SYSTEMTIME *pst
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_INTERNAL_ERROR);
    return FALSE;
}

EXPORT BOOL WINAPI WinHttpCrackUrl(
        LPCWSTR pwszUrl,
        DWORD dwUrlLength,
        DWORD dwFlags,
        LPURL_COMPONENTS lpUrlComponents
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_INVALID_URL);
    return FALSE;
}

EXPORT BOOL WINAPI WinHttpCreateUrl(
        LPURL_COMPONENTS lpUrlComponents,
        DWORD dwFlags,
        LPWSTR pwszUrl,
        LPDWORD pdwUrlLength
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_INTERNAL_ERROR);
    return FALSE;
}

EXPORT BOOL WINAPI WinHttpCheckPlatform(VOID) {
    LOG_CALL;
    return TRUE;
}

EXPORT BOOL WINAPI WinHttpGetDefaultProxyConfiguration(
        PWINHTTP_PROXY_INFO pProxyInfo
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_INTERNAL_ERROR);
    return FALSE;
}

EXPORT BOOL WINAPI WinHttpSetDefaultProxyConfiguration(
        PWINHTTP_PROXY_INFO pProxyInfo
) {
    LOG_CALL;
    return TRUE;
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

EXPORT BOOL WINAPI WinHttpCloseHandle(
        HINTERNET hInternet
) {
    LOG_CALL;
    return TRUE;
}

EXPORT HINTERNET WINAPI WinHttpConnect(
        HINTERNET hSession,
        LPCWSTR pswzServerName,
        INTERNET_PORT nServerPort,
        DWORD dwReserved
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_OPERATION_CANCELLED);
    return NULL;
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

EXPORT DWORD WINAPI WinHttpReadDataEx(
        HINTERNET hRequest,
        LPVOID lpBuffer,
        DWORD dwNumberOfBytesToRead,
        LPDWORD lpdwNumberOfBytesRead,
        ULONGLONG ullFlags,
        DWORD cbProperty,
        PVOID pvProperty
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_CONNECTION_ERROR);
    return FALSE;
}

EXPORT BOOL WINAPI WinHttpWriteData(
        HINTERNET hRequest,
        LPCVOID lpBuffer,
        DWORD dwNumberOfBytesToWrite,
        LPDWORD lpdwNumberOfBytesWritten
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_CONNECTION_ERROR);
    return FALSE;
}

EXPORT BOOL WINAPI WinHttpQueryDataAvailable(
        HINTERNET hRequest,
        LPDWORD lpdwNumberOfBytesAvailable
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_CONNECTION_ERROR);
    return FALSE;
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

EXPORT BOOL WINAPI WinHttpSetOption(
        HINTERNET hInternet,
        DWORD dwOption,
        LPVOID lpBuffer,
        DWORD dwBufferLength
) {
    LOG_CALL;
    return TRUE;
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

EXPORT DWORD WINAPI WinHttpIsHostInProxyBypassList(
        PWINHTTP_PROXY_INFO pProxyInfo,
        PCWSTR pwszHost,
        INTERNET_SCHEME tScheme,
        INTERNET_PORT nPort,
        BOOL *pfIsInBypassList
) {
    LOG_CALL;
    if (pfIsInBypassList != NULL) *pfIsInBypassList = FALSE;
    return ERROR_SUCCESS;
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

EXPORT BOOL WINAPI WinHttpAddRequestHeaders(
        HINTERNET hRequest,
        LPCWSTR lpszHeaders,
        DWORD dwHeadersLength,
        DWORD dwModifiers
) {
    LOG_CALL;
    return TRUE;
}

EXPORT DWORD WINAPI WinHttpAddRequestHeadersEx(
        HINTERNET hRequest,
        DWORD dwModifiers,
        ULONGLONG ullFlags,
        ULONGLONG ullExtra,
        DWORD cHeaders,
        PWINHTTP_EXTENDED_HEADER pHeaders
) {
    LOG_CALL;
    return ERROR_SUCCESS;
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

EXPORT BOOL WINAPI WinHttpSetCredentials(
        HINTERNET hRequest,
        DWORD AuthTargets,
        DWORD AuthScheme,
        LPCWSTR pwszUserName,
        LPCWSTR pwszPassword,
        LPVOID pAuthParams
) {
    LOG_CALL;
    return TRUE;
}

EXPORT BOOL WINAPI WinHttpQueryAuthSchemes(
        HINTERNET hRequest,
        LPDWORD lpdwSupportedSchemes,
        LPDWORD lpdwFirstScheme,
        LPDWORD pdwAuthTarget
) {
    LOG_CALL;

    if (lpdwSupportedSchemes != NULL) {
        *lpdwSupportedSchemes = WINHTTP_AUTH_SCHEME_BASIC |
                                WINHTTP_AUTH_SCHEME_NTLM |
                                WINHTTP_AUTH_SCHEME_PASSPORT |
                                WINHTTP_AUTH_SCHEME_DIGEST |
                                WINHTTP_AUTH_SCHEME_NEGOTIATE;
    }

    if (lpdwFirstScheme != NULL) {
        *lpdwFirstScheme = WINHTTP_AUTH_SCHEME_BASIC;
    }

    if (pdwAuthTarget != NULL) {
        *pdwAuthTarget = WINHTTP_AUTH_TARGET_SERVER |
                         WINHTTP_AUTH_TARGET_PROXY;
    }

    return TRUE;
}

EXPORT BOOL WINAPI WinHttpQueryAuthParams(
        HINTERNET hRequest,
        DWORD AuthScheme,
        LPVOID *pAuthParams
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_INTERNAL_ERROR);
    return FALSE;
}

EXPORT BOOL WINAPI WinHttpReceiveResponse(
        HINTERNET hRequest,
        LPVOID lpReserved
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_CANNOT_CONNECT);
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

EXPORT DWORD WINAPI WinHttpQueryHeadersEx(
        HINTERNET hRequest,
        DWORD dwInfoLevel,
        ULONGLONG ullFlags,
        UINT uiCodePage,
        PDWORD pdwIndex,
        PWINHTTP_HEADER_NAME pHeaderName,
        PVOID pBuffer,
        PDWORD pdwBufferLength,
        PWINHTTP_EXTENDED_HEADER *ppHeaders,
        PDWORD pdwHeadersCount
) {
    LOG_CALL;
    return ERROR_WINHTTP_HEADER_NOT_FOUND;
}

EXPORT DWORD WINAPI WinHttpQueryConnectionGroup(
        HINTERNET hInternet,
        const GUID *pGuidConnection,
        ULONGLONG ullFlags,
        PWINHTTP_QUERY_CONNECTION_GROUP_RESULT *ppResult
) {
    LOG_CALL;
    return ERROR_WINHTTP_INTERNAL_ERROR;
}

EXPORT VOID WINAPI WinHttpFreeQueryConnectionGroupResult(
        PWINHTTP_QUERY_CONNECTION_GROUP_RESULT pResult
) {
    LOG_CALL;
}

EXPORT BOOL WINAPI WinHttpDetectAutoProxyConfigUrl(
        DWORD dwAutoDetectFlags,
        LPWSTR *ppwstrAutoConfigUrl
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_AUTODETECTION_FAILED);
    return FALSE;
}

EXPORT BOOL WINAPI WinHttpGetProxyForUrl(
        HINTERNET hSession,
        LPCWSTR lpcwszUrl,
        PWINHTTP_AUTOPROXY_OPTIONS pAutoProxyOptions,
        PWINHTTP_PROXY_INFO pProxyInfo
) {
    LOG_CALL;
    SetLastError(ERROR_WINHTTP_AUTO_PROXY_SERVICE_ERROR);
    return FALSE;
}

EXPORT DWORD WINAPI WinHttpCreateProxyResolver(
        HINTERNET hSession,
        HINTERNET *phResolver
) {
    LOG_CALL;
    return ERROR_SUCCESS;
}

EXPORT DWORD WINAPI WinHttpGetProxyForUrlEx(
        HINTERNET hResolver,
        PCWSTR pcwszUrl,
        PWINHTTP_AUTOPROXY_OPTIONS pAutoProxyOptions,
        DWORD_PTR pContext
) {
    LOG_CALL;
    return ERROR_WINHTTP_AUTO_PROXY_SERVICE_ERROR;
}

EXPORT DWORD WINAPI WinHttpGetProxyForUrlEx2(
        HINTERNET hResolver,
        PCWSTR pcwszUrl,
        PWINHTTP_AUTOPROXY_OPTIONS pAutoProxyOptions,
        DWORD cbInterfaceSelectionContext,
        BYTE *pInterfaceSelectionContext,
        DWORD_PTR pContext
) {
    LOG_CALL;
    return ERROR_WINHTTP_AUTO_PROXY_SERVICE_ERROR;
}

EXPORT DWORD WINAPI WinHttpGetProxyResult(
        HINTERNET hResolver,
        PWINHTTP_PROXY_RESULT pProxyResult
) {
    LOG_CALL;
    return ERROR_WINHTTP_INCORRECT_HANDLE_STATE;
}

EXPORT DWORD WINAPI WinHttpGetProxyResultEx(
        HINTERNET hResolver,
        PWINHTTP_PROXY_RESULT_EX pProxyResultEx
) {
    LOG_CALL;
    return ERROR_WINHTTP_INCORRECT_HANDLE_STATE;
}

EXPORT VOID WINAPI WinHttpFreeProxyResult(
        PWINHTTP_PROXY_RESULT pProxyResult
) {
    LOG_CALL;
}

EXPORT VOID WINAPI WinHttpFreeProxyResultEx(
        PWINHTTP_PROXY_RESULT_EX pProxyResultEx
) {
    LOG_CALL;
}

EXPORT DWORD WINAPI WinHttpResetAutoProxy(
        HINTERNET hSession,
        DWORD dwFlags
) {
    LOG_CALL;
    return ERROR_SUCCESS;
}

EXPORT BOOL WINAPI WinHttpGetIEProxyConfigForCurrentUser(
        PWINHTTP_CURRENT_USER_IE_PROXY_CONFIG pProxyConfig
) {
    LOG_CALL;
    SetLastError(ERROR_FILE_NOT_FOUND);
    return FALSE;
}

EXPORT DWORD WINAPI WinHttpWriteProxySettings(
        HINTERNET hSession,
        BOOL fForceUpdate,
        PWINHTTP_PROXY_SETTINGS pWinHttpProxySettings
) {
    LOG_CALL;
    return ERROR_SUCCESS;
}

EXPORT DWORD WINAPI WinHttpReadProxySettings(
        HINTERNET hSession,
        PCWSTR pcwszConnectionName,
        BOOL fFallBackToDefaultSettings,
        BOOL fSetAutoDiscoverForDefaultSettings,
        DWORD *pdwSettingsVersion,
        BOOL *pfDefaultSettingsAreReturned,
        PWINHTTP_PROXY_SETTINGS pWinHttpProxySettings
) {
    LOG_CALL;
    return ERROR_WINHTTP_INTERNAL_ERROR;
}

EXPORT VOID WINAPI WinHttpFreeProxySettings(
        PWINHTTP_PROXY_SETTINGS pWinHttpProxySettings
) {
    LOG_CALL;
}

EXPORT DWORD WINAPI WinHttpGetProxySettingsVersion(
        HINTERNET hSession,
        DWORD *pdwProxySettingsVersion
) {
    LOG_CALL;
    return ERROR_WINHTTP_INTERNAL_ERROR;
}

EXPORT DWORD WINAPI WinHttpSetProxySettingsPerUser(
        BOOL fProxySettingsPerUser
) {
    LOG_CALL;
    return ERROR_SUCCESS;
}

EXPORT HINTERNET WINAPI WinHttpWebSocketCompleteUpgrade(
        HINTERNET hRequest,
        DWORD_PTR pContext
) {
    LOG_CALL;
    return (HINTERNET) 0xBEEF;
}

EXPORT DWORD WINAPI WinHttpWebSocketSend(
        HINTERNET hWebSocket,
        WINHTTP_WEB_SOCKET_BUFFER_TYPE eBufferType,
        PVOID pvBuffer,
        DWORD dwBufferLength
) {
    LOG_CALL;
    return ERROR_INVALID_OPERATION;
}

EXPORT DWORD WINAPI WinHttpWebSocketReceive(
        HINTERNET hWebSocket,
        PVOID pvBuffer,
        DWORD dwBufferLength,
        DWORD *pdwBytesRead,
        WINHTTP_WEB_SOCKET_BUFFER_TYPE *peBufferType
) {
    LOG_CALL;
    return ERROR_INVALID_OPERATION;
}

EXPORT DWORD WINAPI WinHttpWebSocketShutdown(
        HINTERNET hWebSocket,
        USHORT usStatus,
        PVOID pvReason,
        DWORD dwReasonLength
) {
    LOG_CALL;
    return ERROR_SUCCESS;
}

EXPORT DWORD WINAPI WinHttpWebSocketClose(
        HINTERNET hWebSocket,
        USHORT usStatus,
        PVOID pvReason,
        DWORD dwReasonLength
) {
    LOG_CALL;
    return ERROR_SUCCESS;
}

EXPORT DWORD WINAPI WinHttpWebSocketQueryCloseStatus(
        HINTERNET hWebSocket,
        USHORT *pusStatus,
        PVOID pvReason,
        DWORD dwReasonLength,
        DWORD *pdwReasonLengthConsumed
) {
    LOG_CALL;

    if (pusStatus != NULL) {
        *pusStatus = WINHTTP_WEB_SOCKET_ENDPOINT_TERMINATED_CLOSE_STATUS;
    }

    if (pdwReasonLengthConsumed != NULL) {
        *pdwReasonLengthConsumed = 0;
    }

    return ERROR_SUCCESS;
}

EXPORT DWORD WINAPI WinHttpRegisterProxyChangeNotification(
        ULONGLONG ullFlags,
        WINHTTP_PROXY_CHANGE_CALLBACK pfnCallback,
        PVOID pvContext,
        WINHTTP_PROXY_CHANGE_REGISTRATION_HANDLE *hRegistration
) {
    LOG_CALL;

    if (hRegistration != NULL) {
        *hRegistration = (WINHTTP_PROXY_CHANGE_REGISTRATION_HANDLE) 0xCACA;
    }

    return ERROR_SUCCESS;
}

EXPORT DWORD WINAPI WinHttpUnregisterProxyChangeNotification(
        WINHTTP_PROXY_CHANGE_REGISTRATION_HANDLE hRegistration
) {
    LOG_CALL;
    return ERROR_SUCCESS;
}

EXPORT DWORD WINAPI WinHttpGetProxySettingsEx(
        HINTERNET hResolver,
        WINHTTP_PROXY_SETTINGS_TYPE ProxySettingsType,
        PWINHTTP_PROXY_SETTINGS_PARAM pProxySettingsParam,
        DWORD_PTR pContext
) {
    LOG_CALL;
    return ERROR_IO_PENDING;
}

EXPORT DWORD WINAPI WinHttpGetProxySettingsResultEx(
        HINTERNET hResolver,
        PVOID pProxySettingsEx
) {
    LOG_CALL;
    return ERROR_WINHTTP_INTERNAL_ERROR;
}

EXPORT DWORD WINAPI WinHttpFreeProxySettingsEx(
        WINHTTP_PROXY_SETTINGS_TYPE ProxySettingsType,
        PVOID pProxySettingsEx
) {
    LOG_CALL;
    return ERROR_SUCCESS;
}
