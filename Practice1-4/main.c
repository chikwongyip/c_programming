#include <stdio.h>
#include <stdlib.h>


int main()
{
//    float fahr,celsius;
//    float lower,upper,step;
//    lower = 0;
//    upper = 300;
//    step = 20;
//    celsius = lower;
//    printf("�¶��뻪�жȶ��ձ�\n");
//
//    while (celsius <= upper)
//    {
//        /*celsius = (5.0/9.0) * (fahr-32.0);*/
//        fahr = celsius * 9.0 /5.0 + 32.0;
//        printf("%3.f %6.1f\n",fahr,celsius);
//        celsius = celsius + step;
//    }
/* for ���÷��� */
    int fahr;
    for(fahr=0;fahr<=300;fahr=fahr+20)
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));

/* for ���� */
    for(fahr=300;fahr>=0;fahr=fahr-20)
        printf("%3d,%7.1f\n",fahr,(5.0/9.0)*(fahr-32));
    return 0;
}
