#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
  int n,i,j,k;
  scanf("%d",&i);
  for(n=1;n<=i;n++){
    for(j=1;j<=n;j++){
       printf("%d",j);
    }
    for(k=j-2;k>=1;k--){
       printf("%d",k);
    }
    printf("\n");
  }
  getch();
}
