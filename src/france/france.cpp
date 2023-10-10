#include "../../lib/headers/Image.hpp"
#include "../../lib/headers/Pixel.hpp"
#include <cmath>

int main() {
	int imageWidth = 900;
	int imageHeight = 600;

	Image france(imageWidth, imageHeight);

	for (int i = 0; i < imageWidth; i++) {
		for (int j = 0; j < imageHeight; j++) {
			// int flagOneOfThree = imageWidth * (1/3);
			// int flagOTwoOfThree = imageWidth * (2/3);

			if(i >= 0 && i < 300) {
				france.setPixel(j, i, Pixel(0, 85, 164));
			} else if(i >= 300 && i < 600) {
				france.setPixel(j, i, Pixel(255, 255, 255));
			} else {
				france.setPixel(j, i, Pixel(239, 65, 53));
			}
		}
	}

	france.saveToPPM();
}
