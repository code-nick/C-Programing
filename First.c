#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter your day :");
    scanf("%d",&a);
    if(a==1)
    {
        printf("Son \n");
    }
     if (a==2)
    {
        printf("Mon\n");
    }
    else if (a==3)
    {
        printf("Tue\n");
    }
    else if(a==4)
    {
        printf("Wed\n");

    }
    else if(a==5)
    {
        printf("Thu\n");

    }
    else if (a==6)
    {
        printf("Fri\n");
    }
    else if (a==7)
    {
        printf("Sat\n");
    }
    else{
        printf("Enter your worng choice\n");
    }
}

