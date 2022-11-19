#include <stdio.h>
#include <math.h>
/* Suppose that you are given the following code.

   #include <stdio.h> 
   typedef struct { double x; double y; } point; 
   int main(void) { 
       point test = {.25, .75}; 
       pointshow(test); 
       return 0; 
   } 
*/

typedef struct {
    double x;
    double y;
} point;
void pointshow(point test);
double pointdist(point t1, point t2);
int pointequal(point test);

int main() {
    point t1 = {.25, .75};
    point t2 = {1, 1.75};
    /*
    a. Write a function pointshow() so that the program is functionally equivalent to the 
    three programs above. 
    */
    
    pointshow(t1);
    pointshow(t2);


    /*
    Write a function pointdist() that computes the Euclidean distance between two 
    points. 
    */
    printf("Euclidean distance is: %.2f", pointdist(t1, t2));

    /*
    c. Write a function pointequal() that returns 1 if the two points are "equal"; and 0 
    otherwise.  With floating point values it doesn't make much sense to test for exact 
    equality; instead check to see if the distance between the points is less than 
    0.000001. 
    */
    return 0;
}

void pointshow(point test) {
    printf("%.2f %.2f\n", test.x, test.y);
    return;
}


double pointdist(point t1, point t2) {
    double distance = sqrt(pow(abs(t1.x - t2.x),2) + pow(abs(t1.y - t2.y),2));
    return distance;
}

int pointequal(point test) {
    int y = 1;
    double distance = sqrt(pow(abs(test.x - test.y),2) + pow(y,2));
    if (distance < 0.000001) {
        return 1;
    }
    else {
        return 0;
    }

}