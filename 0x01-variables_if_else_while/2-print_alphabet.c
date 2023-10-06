#include <stdio.h>
/**
 * main- entry point
 * Description: A program that prints lowercase alphabets
 * Return:0 if success
 */
int main(void)
{
        char alph = 'a';

        while (alph <= 'z')
        {
                putchar(alph);
                alph++;
        }
        putchar('\n');
        return (0);
}
