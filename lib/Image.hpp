#ifndef IMAGE_HPP
#define IMAGE_HPP

#include "Pixel.hpp"
#include <vector>

class Image {
public:
  int width;
  int height;
  std::vector<std::vector<Pixel> > canvas;

  Image(int w, int h);

  void setPixel(Pixel pixel);
  void saveToPPM();
};

#endif