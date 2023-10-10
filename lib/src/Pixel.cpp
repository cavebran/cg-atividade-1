#include "../headers/Pixel.hpp"

Pixel::Pixel(unsigned int posX, unsigned int posY, Color pixelColor) {
	x = posX;
	y = posY;
	color = pixelColor;
}

std::string Pixel::print() {
	std::string printString = color.r + " " + color.g + " ";
	return printString;
}