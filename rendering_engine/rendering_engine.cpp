#include <pch.h>
#include <iostream>
#include <windows.h>
#include <wingdi.h>
#include "Pixel.h"

int main()
{
	std::cout << "start: Rendering Engine" << std::endl;

	Pixel pixel;

	int xOffset = 0;

	//Choose any color
	COLORREF RED_COLOR = RGB(255, 0, 255);
	COLORREF GREEN_COLOR = RGB(0, 255, 255);


	//Draw pixels
	for (double i = 0; i < 3.14* 4; i += 0.05)
	{
		pixel.setPixel(xOffset, (int)(150 + 50 * cos(i)), RED_COLOR);
		pixel.setPixel(xOffset, (int)(150 + 50 * sin(i)), GREEN_COLOR);
		xOffset += 1;
	}

	std::cin.ignore();
	return 0;
}

