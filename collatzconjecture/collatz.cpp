#include <utility>
#include "tgaimage.h"
#include "collatz.h"
#include <iostream>

const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red   = TGAColor(255, 0,   0,   255);
int HEIGHT = 2880;
int WIDTH = 1864;

// TODO: Add expanded range so you can scale it

// generate an image of the collatz conjecture after n iterations
void renderCollatz(int range) {
    // setup image
    TGAImage image(1000, 1000, TGAImage::RGB); 

    for (int x = 0; x < range; x++) {

        int y = collatz(x, 0);
        std::cout << x << "->" << y << std::endl;
        image.set(x, 10*y, red);

    }
    
    image.flip_vertically(); // i want to have the origin at the left bottom corner of the image
    image.write_tga_file("collatz.tga");
}


// Collatz Recursion starting from integer n
int collatz(int n, int iterations) {
    // base case
    if (n == 1 || iterations > 1000) {
        return iterations;
    }
     //std::cout << "hey" << std::endl;
    //recursion
    return collatz(f(n), ++iterations);

}


// should be okay
// Collatz function
int f(int n) {
    if ((n % 2) == 0) 
        return n / 2;
    else 
        return 3*n + 1;
}


