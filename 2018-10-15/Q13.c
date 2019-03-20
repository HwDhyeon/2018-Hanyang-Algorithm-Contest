// 1009 : 각 자리수의 역과 합 



#include <stdio.h>
 
void an(int n);
int main(void)
{
    int n, sum;
 
    while(1)
    {
        scanf("%d", &n);
 
        if(n==0)
            break;
 
        an(n);
    }
    return 0;
}
void an(int n)
{
    int sum=0, a=0, b=0;
 
    while(1)
    {
        a=(a*10)+(n%10);
        sum+=n%10;
        n=n/10;
        if(n==0)
            break;
    }
 
    printf("%d %d\n", a, sum);
 
}
