#ifndef PIXEL_HPP
#define PIXEL_HPP

#include "Color.hpp"
#include <string>


class Pixel {
public:
  unsigned int x; // position x
	unsigned int y; // position y
	Color color; // pixel color

  Pixel(unsigned int posX, unsigned int posY, Color pixelColor);

	std::string print();
};

#endif