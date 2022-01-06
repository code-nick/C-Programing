#include<stdio.h>
int main()
{
 char grade;
 printf("Enter a Latter Grade :\n");
 scanf("%s",&grade);
 switch (grade)
 {
 case 'A':
   printf("Perfect!\n");
   break;
 case 'B':
   printf("You Did Good !\n");
   break;
  case 'C':
  printf("You Did Okay!\n");
  break;
  case 'D':
  printf("At Leats its not an Failed!\n");
  break;
  case 'F':
  printf("You Failed!\n");
  break;
 default:
 printf("Plase Enter Only Valid Number!\n");
   break;
 }
}


