#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int answer =32;
    int num;
    int trial =0;
    
    do
    {
     printf("enter:\n");
     scanf("%d",&num);
     
      if(num<answer)
       printf("up\n");
      else if(num>answer)
       printf("down\n");
     
     trial= trial+1;
     }
   while(num!=answer);
   printf("the end\n");
   printf("trial:%d",trial);


  system("PAUSE");	
  return 0;
}

