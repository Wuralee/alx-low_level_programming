#include <stdio.h>

/**
 * main - print the variable in the printf function
 *
 * Description: using the main funtion
 * this program prints "sizes of various data types
 * Return: 0
 */
int main(void)
{
            char c;
	      int i;
	        long int li;
	           long long int lli;
	               float f;

	 printf("size of an char: %ld byte(s)\n", sizeof(c));
	  printf("size of a int: %ld byte(s)\n", sizeof(i));
	   printf("size of a long int: %ld byte(s)\n", sizeof(li));
	    printf("size of a long long int: %ld byte(s)\n", sizeof(lli);
	      printf("size of a float: %ld byte(s)\n", sizeof(f));	    
        return (0);
}
