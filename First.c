#include<stdio.h>
#define PI 3.41 //globle variable
int main(int argc, char const *argv[])
{
    float area , r;
    printf("Enter the  value !");
    scanf("%f", &r);
     area= PI*r*r;
     printf("result = %f",area);
    return 0;
}

