#include<stdio.h>
int main()
{
int age ,section;// variable inter type
char name[10] ,father[10], class[5]; // variable charecter type
     
     printf("My  Name is :");
     scanf("%s",name);
     printf(" My Father Name is:");
     scanf("%s",father);
     printf("My Section Name:");
     scanf("%d",&section);
     printf("I am class:");
     scanf("%s",class);
     printf("My Age:");
     scanf("%d",&age);
     printf("--------------Student ID----------\n");
     printf("\tName:%s \n ",name);
     printf("!*------------------------------*!\n");
     printf("\tFather:%s\n",father);
     printf("!*------------------------------*!\n");
     printf("\tSection:%d\n",section);
     printf("!*------------------------------*!\n");
     printf("\tclass: %s\n",class);
     printf("!*------------------------------*!\n");
     printf("\tage: %d \n",age);
     printf("!*------------------------------*!\n");
     return 0 ; 



}
