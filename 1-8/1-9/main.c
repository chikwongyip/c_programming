#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    char pre;
    while((c=getchar()) != EOF)
    {
        if(c != ' ' || pre != ' ')
        {
                putchar(c);
                pre = c;
        }

    }
    return 0;
}
