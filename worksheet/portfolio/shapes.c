
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;
    // implementation
    new.x = x;
    new.y = y;
    return new;
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()

Line makeLine( Point p1, Point p2 ){
    Line l;
    l.p[0] = p1;
    l.p[1] = p2;
    return l;
}

Triangle makeTriangle( Point p1, Point p2, Point p3 ){
    Triangle t;
    t.p[0] = p1;
    t.p[1] = p2;
    t.p[2] = p3;
    return t;
}


/*
*Pythagorean theorem to find distance
*/
float lineLength( Line l ){
    float length = (float)sqrt(pow((double)(l.p[0].x - l.p[1].x), 2) + pow((double)(l.p[0].y - l.p[1].y), 2));
    return length;
}

/*
*calculate the area by using cross product
*/
float triangleArea( Triangle t ){
    float x1 = t.p[0].x;
    float y1 = t.p[0].y;
    float x2 = t.p[1].x;
    float y2 = t.p[1].y;
    float x3 = t.p[2].x;
    float y3 = t.p[2].y;
    float area = 0.5f * fabs((x2-x1)*(y3-y1)-(y2-y1)*(x3-x1));
    return area;
}

bool samePoint( Point p1, Point p2 ){
     float length = lineLength(makeLine( p1, p2 ));
    if(length<1.0e-6f){
        return true;
    }
    else{
        return false;
    }
}

bool pointInLine( Point p, Line l){
    if(samePoint(p, l.p[0]) || samePoint(p, l.p[1])){
        return true;
    }
    else{
        return false;
    }
}

bool pointInTriangle( Point p, Triangle t ){
    if(samePoint(p, t.p[0]) || samePoint(p, t.p[1]) || samePoint(p, t.p[2])){
        return true;
    }
    else{
        return false;
    }
}