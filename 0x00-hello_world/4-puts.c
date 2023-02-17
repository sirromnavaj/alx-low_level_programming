#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 *string initializing 
 *
 *writing to stderr and stdout
 *
 * return always 0 (Success)
*/
int main(void)
{	
char str1[60] = "\"programming is like building a multilingual puzzle";
char str2[10] = "lost";
puts(stdout,str1);
puts(stderr,str2);
return (0);
}
