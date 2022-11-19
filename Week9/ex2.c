#include <stdio.h>
#include <math.h>

/*
Define a data type rect for rectangles that are parallel to the axes in a Cartesian 
coordinate system. Represent a rectangle by its lower left and upper right endpoints 
using the point data type above. 
*/


typedef struct {
    double x;
    double y;
} point;

typedef struct
{
    point upper;
    point lower;
} rect;

int calArea(rect rectangle);
int checkPoint (point pt, rect rectangle);
int checkRectangle(rect test, rect rectangle);
int checkFurthest(point arr[], int length);
int main() {
    rect rectangle;
    rectangle.upper.x = 5;
    rectangle.upper.y = 5;
    rectangle.lower.x = 0;
    rectangle.lower.y = 0;

    //a. Write a function that computes the area of a rectangle.  
    printf("The area of the rectangle is: %d\n", calArea(rectangle));

    /*
    Write a function that returns 1 if a point falls within a rectangle, 0 otherwise. Use the 
    point and rect data types above. 
    */
    point check = {-1,3};
    printf("The given point is in position: %d\n", checkPoint(check, rectangle));

    /*
    Write a function that returns 1 if the first rectangle is completely contained inside 
    the second rectangle, and 0 otherwise.  Hint: check if the lower left and upper right 
    endpoints of the first rectangle fall within the second rectangle. 
    */
    rect test;
    test.upper.x = 4;
    test.upper.y = 4;
    test.lower.x = 1;
    test.lower.y = 1;
    printf("The given rectangle is in position: %d\n", checkRectangle(test, rectangle));

    /*
    Write a program that reads in a list of points (given by their x and y coordinates) and 
    determines the pair that is the farthest apart. Hint: store the points in an array and 
    use the pointdist() function. 
    */

    point p1 = {1,2};
    point p2 = {3,5};
    point p3 = {5,10};
    point p4 = {10,20};
    point p5 = {20,40};
    point arr[5] = {p1,p2,p3,p4,p5};
    checkFurthest(arr, 5);
    return 0;
}

double pointdist(point t1, point t2) {
    double distance = sqrt(pow(abs(t1.x - t2.x),2) + pow(abs(t1.y - t2.y),2));
    return distance;
}

int calArea(rect rectangle) {
    return abs(rectangle.upper.y - rectangle.lower.y) * abs(rectangle.upper.x - rectangle.lower.x);
}

int checkPoint(point pt, rect rectangle) {
    if ((pt.x >= rectangle.lower.x && pt.x <= rectangle.upper.x) && (pt.y >= rectangle.lower.y && pt.y <= rectangle.upper.y)) {
        return 1;
    }
    else {
        return 0;
    }
}

int checkRectangle(rect test, rect rectangle) {
    if (test.upper.x <= rectangle.upper.x && test.upper.y <= rectangle.upper.y && test.lower.x >= rectangle.lower.x && test.lower.y >= rectangle.lower.y){
        return 1;
    }
    else {
        return 0;
    }
}

int checkFurthest(point arr[], int length) {
    double max = 0;
    point p1, p2;
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (max < pointdist(arr[i], arr[j])) {
                max = pointdist(arr[i], arr[j]);
                p1 = arr[i];
                p2 = arr[j];
            }
        }
    }    
    printf("The maximum distance is: %.2f, the pair is: point 1 = (%.2f, %.2f), point 2 = (%.2f, %.2f)\n", max, p1.x, p1.y, p2.x, p2.y);

    return 1;
}