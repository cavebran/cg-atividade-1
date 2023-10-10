#include "../headers/Image.hpp"
#include <iostream>

Image::Image(int w, int h) : width(w), height(h) {
  canvas.resize(height, std::vector<Pixel>(width, NULL));
  
  for (unsigned int i = 0; i < height; i++) {
    for (unsigned int j = 0; j < width; j++) {
      canvas[i][j] = Pixel(i, j, Color());
    }
  }
}

void Image::setPixel(Pixel pixel) {
  canvas[pixel.x][pixel.y] = pixel;
}

void Image::saveToPPM() {
    std::cout << "P3\n" << width << ' ' << height << "\n255\n";

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; i++) {
            std::cout << canvas[i][j].print() << '\n';
        }
    }
}