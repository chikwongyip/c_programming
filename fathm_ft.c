
//fahtm_ft.c--把2音寻转换英寸
#include <stdio.h>
int main(void)
{
    int feet,fathoms;
    fathoms = 2;
    feet = 6*fathoms;
    printf("there are %d feet in %d fathoms!\n",feet,fathoms);
    printf("Yes,I said %d feet!\n",6*fathoms);
    return 0;
}