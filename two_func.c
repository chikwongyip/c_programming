//*two_func.c --一个文件包含两个函数*/
#include <stdio.h>
void butler(void);/*ANSI/ISO C 函数原型*/
int main()
{
    printf("I will summon the bulter function.\n");
    butler();
    printf("Yes, Bring me some tea and writeable DVDS.\n");
    return 0;
}

void butler(void)
{
    printf("You rang,sir?\n");
}