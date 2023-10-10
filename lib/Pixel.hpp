#ifndef PIXEL_HPP
#define PIXEL_HPP

#include "Color.hpp"

class Pixel {
public:
  unsigned int x; // position x
	unsigned int y; // position y
	Color color; // pixel color

  Pixel(unsigned int x, unsigned int y, Color color);
};

#endif // PIXEL_HPP