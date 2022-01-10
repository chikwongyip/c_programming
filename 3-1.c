/* 上面有关折半查找的例子，while 循环语句内共执行了两次测试，其实只要一次
就足够(代价是将更多的测试再循环外执行) 重写该函数，
使得在循环内部只执行一次测试。比较两种版本函数运行时间 */
#include <stdio.h>

int main(){

}

int binsearch(int x, int v[], int n)
{
    int low,high,mid;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < v[mid])
        {
            high = mid + 1;
        }elseif (x > v[mid])
        {
            low = mid + 1;
        }else
        {
            return mid;
        }
        return -1;
        
    }
    
}

int binsearch_2(int x, int v[], int n)
{
    int low,high,mid;
    low = 0;
    high = n - 1;
    mid = (low + high ) / 2;
    while ((low <= high) && (x != v[mid]))
    {
        /* code */
        (x < v[mid] ? high = mid -1; : low =mid + 1;)
        mid = (low + high ) / 2;
    }

    if (x == v[mid])
    {
        /* code */
        return mid;
    }else
    {
        return -1;
    }
    
    
}

