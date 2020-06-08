// Author : Nisarg Chokshi

/* Task : This challenge requires you to print "HELLO WORLD" on a single line, and then print the 
		already provided input string to stdout.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[100];
    printf("Enter Your Name : ");
    scanf("%[^\n]%*c", &s);
    
/* The Above line of code scanf("%[^\n]%*c",&s); will help you to get an entire sentence until 
	the next line isn’t encountered by "\n" or enter is pressed which is done with the help of 
	"%[^\n]". Here [ ] is used as the scan set character . The "%*c" will read the newline character,
	asterisk "*" is used to indicate that the next line character is discarded.*/
	
    printf("Hello, World!\n");
    printf("%s", s);
    return 0;
}
