// 2074 : ¸¶¹æÁø 



#include <stdio.h>
 
int squ[100][100]={0};
 
void pr(int n);
int square(int n, int a, int x, int y);
int main(void)
{
    int n;
 
    scanf("%d", &n);
 
//  pr(n);
    square(n, 1, 0, n/2);
    pr(n);
 
    return 0;
}
void pr(int n)
{
    int i, j;
 
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%d ", squ[i][j]);
        printf("\n");
    }
    //printf("\n");
}
int square(int n, int a, int x, int y)
{
    //printf("x= %d y= %d a= %d \n", x, y, a);
 
    if(x>=0 && y>=0 && x<n && y<n && a<=(n*n) && squ[x][y]==0)
    {
        squ[x][y]=a;
 
        //pr(n);
 
        if(a%n==0)
            square(n, ++a, ++x, y);
 
        else
            square(n, ++a, --x, --y);
    }
 
    else
    {
        if(x<0)
            square(n, a, n-1, y);
 
        else if(y<0)
            square(n, a, x, n-1);
 
        else if(a>(n*n))
            return 0;
    }
 
}
