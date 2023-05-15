#include "palindrome.h"
/**
 * is_palindrome - function that checks whether or not a given unsigned integer is a palindrome
 * @n: the given number
 * Return: 0 if its not a palindrome 
*/
int is_palindrome(unsigned long n)
{
    unsigned long i = 1, x = 0, y = 0, j = 10;
    int m = 1, s = 0;

    while ((n / i) >= 10)
    {
        i *= 10;
        m += 1;
    }
    for(s = 1; s <= (m/2); s++)
    {
        x = n / i;
        y = n % j;
        if (x != y)
            return(0);
        n = n % i;
        n = n / j;
        i /= 100;
    }
    return (1);

}