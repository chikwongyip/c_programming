#include <stdio.h>
#include <stdlib.h>
int space,tab,line;
int main()
{
    int c;

    while((c = getchar()) != EOF)
        switch(c)
    {
        {
            case ' ':
                space++;
                break;
            case '/t':
                tab++;
                break;
            case '\n':
                line++;
                break;
            default:
                break;
        }
        printf("%d,%d,%d",space,tab,line);

    }

    return 0;

}
