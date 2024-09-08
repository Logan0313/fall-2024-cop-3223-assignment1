// Logan Jenison
// UCF ID: 4922461
// September 8, 2024

#include <stdio.h>
#include <math.h>

// Defining PI
#define PI 3.14159

// Function prototypes
int main(int argc, char **argv);
double calculateDistance(double *x1, double *y1, double *x2, double *y2);
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
void askForUserInput(double *x1, double *y1, double *x2, double *y2);

int main(int argc, char **argv) {
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// Function to get user input for the points
void askForUserInput(double *x1, double *y1, double *x2, double *y2) {
    printf("Input x1, y1: ");
    scanf("%lf %lf", x1, y1);
    printf("Input x2, y2: ");
    scanf("%lf %lf", x2, y2);
}

// Function to calculate the distance between two points
double calculateDistance(double *x1, double *y1, double *x2, double *y2) {
    double distance = sqrt(pow(*x2 - *x1, 2) + pow(*y2 - *y1, 2));
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", *x1, *y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", *x2, *y2);
    printf("The distance between the two given points is %.2lf\n", distance);
    return distance;
}

// Function to calculate the perimeter of the circle
double calculatePerimeter() {
    double x1, y1, x2, y2;
    askForUserInput(&x1, &y1, &x2, &y2);
    double distance = calculateDistance(&x1, &y1, &x2, &y2);
    double perimeter = 2 * PI * (distance / 2);
    printf("The perimeter of the circle is %.2lf\n", perimeter);
    return 2.0;  // Example difficulty rating
}

// Function to calculate the area of the circle
double calculateArea() {
    double x1, y1, x2, y2;
    askForUserInput(&x1, &y1, &x2, &y2);
    double distance = calculateDistance(&x1, &y1, &x2, &y2);
    double radius = distance / 2;
    double area = PI * pow(radius, 2);
    printf("The area of the circle is %.2lf\n", area);
    return 3.0;  // Example difficulty rating
}

// Function to calculate the width (same as distance in this context)
double calculateWidth() {
    double x1, y1, x2, y2;
    askForUserInput(&x1, &y1, &x2, &y2);
    double distance = calculateDistance(&x1, &y1, &x2, &y2);
    printf("The width of the circle is %.2lf\n", distance);
    return 1.0;  // Example difficulty rating
}

// Function to calculate the height (same as distance in this context)
double calculateHeight() {
    double x1, y1, x2, y2;
    askForUserInput(&x1, &y1, &x2, &y2);
    double distance = calculateDistance(&x1, &y1, &x2, &y2);
    printf("The height of the circle is %.2lf\n", distance);
    return 1.0;  // Example difficulty rating
}
