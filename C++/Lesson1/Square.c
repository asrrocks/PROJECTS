// Write a program to calculate area of a square

#include <stdio.h>

int main()
{
    float length, width, area;
    printf("Enter length of square \n");
    scanf("%f", &length);

    printf("Enter breadth of square \n");
    scanf("%f", &width);

    area = length * width;
    printf("Area of square \n%f", area);

    return 0;
}