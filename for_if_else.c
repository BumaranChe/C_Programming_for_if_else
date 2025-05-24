#include <stdio.h>

int main()
{ 
  int i;
  for (i=0;i<10;i++) //starts with 0, increment by 1
    {   
        printf("%d\n",i); //print 0
        if(i==5) { // when i=5, move out of the loop
          break; //break stops the loop
        }
        else if (i==6)i--; // when i=6, decrement i one time
        i++; // increase i one time
    }
  return 0;
}