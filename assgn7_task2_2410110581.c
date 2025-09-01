#include <stdio.h>

void print_decoration(int n) {

  for (int i=1; i<=n; i++) {
    for (int j=1; j<=(n-i);j++) {
      printf(" ");
      }
 
    for (int k=1; k<=2*i-1;k++)
    {
      if(k%2==0){
        printf("~");
      }
      else {
        printf("*");
      }
    }
    printf("\n");
  }
}

int main()
{
  int n;
  printf("enter number of rows \n");
  scanf("%d",&n);

  print_decoration(n);
  
  return 0;
}
  