#include<stdio.h>
int main()
{
    int i , j,sum ;

  for ( i = 1; i <=10; i++)
  {
      sum =i;
      for (j=1; j<=10; j++)
      {
        printf("%5d",sum);
        sum+=10;
      }
        printf("\n");
      
  }
}



