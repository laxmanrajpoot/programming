#include<stdio.h>
int main( ) { 
 int   m1, m2, m3, m4, m5, per ; 
 scanf("%d%d%d%d%D",&m1,&m2,&m3,&m4,&m4);
 
 per = ( m1+ m2 + m3 +  m4+ m5 ) / 5 ; 
 
 if ( per >= 60 )  
  printf ( "First division" ) ; 
   else if ( per >= 50 )   
   printf ( "Second division" ) ; 
    else if ( per >= 40 )    
	printf ( "Third division" ) ;  
else   printf ( "fail" ) ; 
return 0;} 
 
