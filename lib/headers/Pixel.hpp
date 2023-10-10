#ifndef PIXEL_HPP
#define PIXEL_HPP

#include <string>

class Pixel {
public:
  int r; // red
	int g; // green
	int b; // blue

  Pixel(int red = 0, int green = 0, int blue = 0);

	std::string print();
};

#endif