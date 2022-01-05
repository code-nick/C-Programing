#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter your day :");
    scanf("%d",&a);
    switch (a)
    {
    case 0:{
        printf("Sun");
    }
       break;
    case 1:
    {
        printf("Mon");
    }
    break;
    case 2:
    {
        printf("Tu");

    }
    break;
    case 3:
    {
        printf("Wed");
    }
    break;
    case 4:
    {
        printf("thu");

    }
    break;
    case 5:
    {
        printf("Fri");
    }
    break;
    case 6:
    {
        printf("sat");
    }
    break;
    default:
    {
        printf("enter your worng number");
    }
        break;
    }
    return 0 ;
    
}

