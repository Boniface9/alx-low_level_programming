#include <stdio.h>
#include <string.h>
/**
 *@ _islower - converts strings to uppercase
 *return(1) - returns true
 *return(0) - returns false 
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
