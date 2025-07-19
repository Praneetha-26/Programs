#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Enter base of a triangle:");
    scanf("%f",&base);
    printf("Enter height of a triangle:");
    scanf("%f",&height);
    {
        area=0.5*base*height;
        printf("Enter area of a triangle=%.2f",area);
    }
}