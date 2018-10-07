#include "pch.h"
#include "Pixel.h"
#include <assert.h>


Pixel::Pixel()
	: m_consoleWindowHandle(NULL),
	  m_deviceContext(NULL)
{
	m_consoleWindowHandle = GetConsoleWindow();
	assert(m_consoleWindowHandle);

	m_deviceContext = GetDC(m_consoleWindowHandle);
	assert(m_deviceContext);
}

Pixel::~Pixel()
{
	ReleaseDC(m_consoleWindowHandle, m_deviceContext);
}

void Pixel::setPixel(int x, int y, COLORREF color)
{
	assert(false != SetPixelV(m_deviceContext, x, y, color));
}

COLORREF Pixel::getPixel(int x, int y)
{
	return GetPixel(m_deviceContext, x, y);
}
