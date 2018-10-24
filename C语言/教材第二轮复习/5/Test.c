#include <stdio.h>
void main ( )
{
  char  ch;
  ch = getch ( );
  switch ( ch )
  { default :   printf ("Yes,No or All\n"); 
    case 'Y' :  printf ("Yes\n");  
                     break;
  
   case 'N' :  printf ("No\n");  
                     break;
    case 'A' :  printf ("All\n");  
                     break;
  }
}
