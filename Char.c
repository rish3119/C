#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];

    // Input
    scanf("%c", &ch);           // read single character
    scanf("%s", s);             // read string (no spaces)
    scanf(" %[^\n]%*c", sen);   // read sentence (with spaces)

    // Output
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
