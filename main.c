#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
  int n,i,j,k,s,d;
  scanf("%d",&i);
  for(n=1;n<=i;n++){
    for(j=i,s=1;j>=n;j--,s++){
       printf("%d",s);
    }
    
     for(j=i,s=1;j>=n;j--,s++){
       printf("%d",j-n+1);
    }
    printf("\n");
  }
  getch();
}
