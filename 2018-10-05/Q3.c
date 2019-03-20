// 1523 : º°»ï°¢Çü1 



#include <stdio.h>
 
void star1(int n);
void star2(int n);
void star3(int n);
int main(void)
{
    int n, m;
 
    scanf("%d %d", &n, &m);
 
    if(n>100 || m>3 || n<1 || m<1)
        printf("INPUT ERROR!");
 
    else
    {
        switch(m)
        {
            case 1:
                star1(n);
                break;
 
            case 2:
                star2(n);
                break;
 
            case 3:
                star3(n);
                break;
        }
    }
 
    return 0;
}
 
void star1(int n)
{
    int i, j;
 
    for(i=1; i<=n; i++)
    {
        for(j=0; j<i; j++)
            printf("*");
        printf("\n");
    }
}
void star2(int n)
{
    int i, j;
 
    for(i=1; i<=n; i++)
    {
        for(j=0; j<=(n-i); j++)
            printf("*");
        printf("\n");
    }
}
void star3(int n)
{
    int i, j, s=1, b=n-1;
 
    for(i=0; i<n; i++)
    {
        for(j=0; j<(s+b); j++)
        {
            if(j<b)
                printf(" ");
 
            else
                printf("*");
        }
        printf("\n");
        b--;
        s+=2;
    }
}

