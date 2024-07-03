#pragma once
#include <Window.h>

class Window
{
public:
    Window();
    bool init();
    bool release();
    ~Window();

protected:
    HWND m_hwnd;
};