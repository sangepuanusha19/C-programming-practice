# include<stdio.h>
int main() 
{
   float area,radius;
   const float pi=3.14;
    printf("enter the radius of the circle:");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("the area of the circle is:%f",area);
    return 0;
}

