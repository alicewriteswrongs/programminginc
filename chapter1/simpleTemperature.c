#include <stdio.h>

main()
{
    int fahr;

    printf("Welcome to the world of temperatures!\n\n");

    /* note when we calculate: book has increment as 
     * fahr = fahr + 20, but the += syntax seems to work fine! */

    for (fahr = 0; fahr <= 300; fahr += 20)
        printf("%3d %6.1f \n", fahr, (5.0/9.0)*(fahr-32));
}
