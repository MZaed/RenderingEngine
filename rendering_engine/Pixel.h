#pragma once
#include <windows.h>

class Pixel
{
public:
	Pixel();
	virtual ~Pixel();

	void setPixel(int x, int y, COLORREF color);
	COLORREF getPixel(int x, int y);

private:
	HWND m_consoleWindowHandle;
	HDC m_deviceContext;
};

