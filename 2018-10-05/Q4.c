// 1402 : 약수 구하기 



#include <stdio.h>
 
int main()
{
    int N, K;
 
    scanf("%d%d", &N, &K);
 
    int count = 0, i;
    for (i = 1; i <= N; ++i)
    {
        if (N%i == 0)
        {
            count++;
            if (count == K){
                printf("%d", i);
                return 0;
            }
        }
    }
    printf("0");
 
    return 0;
}
