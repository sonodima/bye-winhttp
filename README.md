# ByeWinHttp

ByeWinHttp is a small library designed to completely disable networking functionality from a Windows application.
It serves as a drop-in replacement for the original `winhttp.dll`, exporting functions that simulate missing network connection.

__Please note that ByeWinHttp does not reimplement all functions available in `winhttp.dll`__.
Instead, it focuses on the essential functions necessary for our specific use case.
However, extending this library to include additional functions is straightforward, making it adaptable for future requirements.
