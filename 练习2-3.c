// 练习2-3：编写函数htoi（s） ，把十六进制数字组成的字符串（包含可选的前缀0x或者0X）转换与之等价的值，
//字符串允许包含数字包括0-9，a-f以及A-F.
#include <stdio.h>
#include <stdlib.h>
int hoti(char s[]);
int main()
{
    char s[100];
    printf("请输入十六进制数值：");
    scanf("%d",&s);
    printf("数值为：%d", hoti(s) );

}

int hoti(char s[])
{
    int i,n,num;
    num = 0;
    i = 0;
    if (s[i] == '0')
    {
        ++i;
        if (s[i] =='x'|| s[i] == 'X')
        {
            ++i;
            for (; s[i] != '\0'; ++i)
            {
                if (s[i] >= '0' && s[i] <= '9')
                {
                    n = s[i] - '0';
                }

                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    n = s[i] - 55;
                }

                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    n = s[i] - 87;
                }

                num = num*16 + n;                
                
            }
            
        }
        
    }
    return num;
    
}