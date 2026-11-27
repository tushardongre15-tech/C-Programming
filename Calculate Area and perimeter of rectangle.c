#include<stdio.h>

int main() 
{
    int height;
    int width;

    int area;
    int perimeter;
     
    height = 5;
    width = 2;

    perimeter= 2*(height+width);
    printf("the perimeter of rectangle = %d inches \n ",perimeter);

    area= height*width;
    printf("the areaof rectangle= %d square inches \n",area);

    return (0);



}