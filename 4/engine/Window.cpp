#include "window.h"

Window ::Window()
{
}

bool Window::init()
{
    WNDCLASSEX wc;
    wc.cbClsExtra = NULL;
    wc.cbSize = sizeof(WNDCLASSEX);
    wc.cbWndExtra = NULL;
    wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
    wc.hInstance = NULL;
    wc.lpszClassName = "MyWindowClass";
    wc.lpszMenuName = "";
    wx.style = NULL;

    if (!::RegisterClassEx(&wc))
        return false;

    ::CreateWindowEx(WS_EX_OVERLAPPEDWINDOW, "MyWindowClass", "DirectX Application", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 1024, 786, NULL, NULL, NULL, NULL);
    return true;
}

bool Window::release()
{
    return true;
}

Window::~Window()
{
}