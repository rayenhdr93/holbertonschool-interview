#include "palindrome.h"
/**
 * is_palindrome - function that checks whether or not a given unsigned integer is a palindrome
 * @n: the given number
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
    for(s = 1; s <= (m/2) && x == y; s++)
    {
        x = n / i;
        y = n % j;
        n = n % i;
        n = n / j;
        i /= 100;
    }
    if (x == y)
        return (1);
    else
        return (0);

}