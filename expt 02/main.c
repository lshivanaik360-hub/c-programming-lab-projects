#include <stdio.h>

int main()
{
    float length, width;
    float radius;
    float base, height;
    float area, perimeter, circumference;

    /*rectangle*/
    printf("enter length and width of rectangle:");
    scanf("%f %f",&length,&width);

    area=length*width;
    perimeter=2*(length+width);

    printf("rectangle area=%.2f\n",area);
    printf("rectangle perimeter=%.2f\n",perimeter);

    /*circle*/
    printf("\n enter radius of circle;");
    scanf("%f",&radius);
    area=3.14159*radius*radius;
    circumference=2*3.14159*radius;

    printf("circle area=%.2f\n",area);
    printf("circle circumference=%.2f\n",circumference);

    /*triangle*/
    printf("\n enter base and neight of triangle:");
    scanf("%f%f",&base,&base,&height);

    area=0.5*base*height;

    printf("triangle area=%.2f\n",area);
     return 0;

}
