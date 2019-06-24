#import <Foundation>
int main (int argc, char *argv[])
{
NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
int n, triangularNumber;
triangularNumber = 0;
70 Chapter 5 Program Looping
The for Statement 71
for ( n = 1; n <= 200; n = n + 1 )
triangularNumber += n;
NSLog (@"The 200th triangular number is %i", triangularNumber);
[pool drain];
return 0;
}
