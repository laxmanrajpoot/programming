#include<stdio.h>
int main( ) { 
 int  temp ;  
 scanf ( "%d", &temp ) ; 
  switch ( temp )  {  
   case ( temp <= 20 ) :   
    printf ( "\nOoooooohhhh! Damn cool!" ) ;   
	case ( temp > 20 && temp <= 30 ) :  
	  printf ( "\nRain rain here again!" ) ;   
	  case ( temp > 30 && temp <= 40 ) :    
	  printf ( "\nWish I am on Everest" ) ;   
	  default :    printf ( "\nGood old nagpur weather" ) ;  }
	  return 0; } 
