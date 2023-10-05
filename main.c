#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int input;
    scanf("%d",&input);
    
    if (input>=0)
     printf("absolute value is %d\n", input);
    else
     printf("absolute value is %d\n", -input);
  
  system("PAUSE");	
  return 0;
}
