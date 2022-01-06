#include<stdio.h>
int main()
{
int age;
printf("Enter Your age :");
scanf("%d",&age);
if(age<=10){
  printf("You are 10 year old :");
}
else if (age<=15)
{
  printf("your age 15 year old:");
}
else if (age<=70)
{
  printf("Your are going to die: ");
}
else{
  printf("You are worng choice:");
}

}


