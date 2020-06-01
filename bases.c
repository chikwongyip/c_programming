#include <stdio.h>
//显示二进制
int main(void)
{
    int x = 100;
    printf("desc = %d,octal = %o; hex = %x\n",x,x,x);
    printf("desc = %d,octal = %#o; hex = %#x\n",x,x,x);
    return 0;
}