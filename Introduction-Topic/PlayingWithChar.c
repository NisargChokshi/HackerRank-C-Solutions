#include <stdio.h>
#include <string.h>
#include <math.h>
// Author : Nisarg Chokshi
/* Task : You have to print the character - "c", in the first line. 
		Then print word string - "s" in the next line.
		In the last line print the sentence string - "sen" 
*/

#include <stdlib.h>

int main() 
{
    char c;
    char s[100];
    char sen[100];
    printf("\n Enter a Character : ");
    scanf("%c%*c", &c);
    printf("      Enter a Word : ");
    scanf("%s%*c", &s);
    printf("  Enter a Sentence : ");
    scanf("%[^\n]%*c", &sen);
    printf("\n\n\tCharacter : %c",c);
    printf("\n\t     Word : %s", s);
    printf("\n\t Sentence : %s", sen);    
    return 0;
}

