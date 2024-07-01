#include <iostream>
#include "tgaimage.h"
#include <cmath>
#include "collatz.h"


int main(int argc, char** argv) {
        TGAImage image(1000, 1000, TGAImage::RGB); 

        renderCollatz(1000);

        image.flip_vertically(); // i want to have the origin at the left bottom corner of the image
        image.write_tga_file("output.tga");
        return 0;
}



