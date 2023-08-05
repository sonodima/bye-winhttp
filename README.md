# ByeWinHttp

ByeWinHttp is a small library designed to completely disable networking functionality from a Windows application.
It serves as a drop-in replacement for the original `winhttp.dll`, exporting functions that simulate missing network connection.

Do you want to block a program from performing any network request with WinHTTP? Place the compiled `winhttp.dll` in the
program's directory and open it.
