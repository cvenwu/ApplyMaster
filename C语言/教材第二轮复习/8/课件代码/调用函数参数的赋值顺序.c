#include <stdio.h>
void compare (int a, int b);     
void main ( )
{   
    int i = 2;
    compare ( i, i++ );           
    printf ("i = %d\n", i);
}

void compare ( int a, int b ) 
{   
    printf ("a = %d  b = %d\n", a, b);
    if ( a > b)  
        printf ("a > b\n");
    else 
      if (a == b)  
          printf ("a = b\n");
      else 
          printf ("a < b\n");
}
