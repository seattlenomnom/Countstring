/* countstring.c
 * Source file for countstring, an example program from Kochan, Stephhan,
 * "Programming in C, 3rd edition", Sams Publishing, p. 199.
 *
 * Programmer: Mark Crapsser
 *
 * 07/14/2022
 *  Initial editing: README, countstring.c makefile.
 *  Initial git setup.
 *
 * 07/14/2022
 *   Done
 */

#include <stdio.h>

 int stringlength(const char string[]);

 int main(int argc, char *argv[]) {

    const char word1[] = {'D', 'e', 'b', 'b', 'i', 'e', '\0'};
    const char word2[] = {'H', 'a', 'r', 'r', 'y', '\0'};

    printf("%i  %i\n", stringlength(word1), stringlength(word2));

     return(0);
 }

int stringlength(const char string[]) {

    int count;

    count = 0;
    while(string[count] != '\0')
        ++count;

    return(count);
}

