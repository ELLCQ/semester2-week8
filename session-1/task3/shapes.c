
#include <stdio.h>
#include "shapes.h"

int main( void ) {

    // complete the structure definition in the header file first
    // code in main to test the structures and functions
    
    return 0;
}

Rectangle makeRectangle( Point p, float width, float height ){
    Rectangle r;
    p  = {1.0, 2.0};
    width = 3.0;
    height = 4.0;



    return r;
}

float area( Rectangle r ) {
    float a = width * height;

    return a;
}

void shiftRectangle( Rectangle *r, Point dp ) {
    dp = {2.0, 3.0};
    p.x += dp.x;
    p.y += dp.y;
    
    return 0;
}

void scaleRectangle( Rectangle *r, float scale ) {
    scale = 2.0;
    r.width *= scale;
    r.height *= scale;
    return 0;
}
