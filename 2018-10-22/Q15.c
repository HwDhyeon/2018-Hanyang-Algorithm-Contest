// 1146 : 선택정렬 



#include <stdio.h>
#include <stdlib.h>

int *num;
 
void pr(int n); //출력함수 
void line(int n); //정렬함수 

int main(void)
{
    int n, i;
 
    scanf(" %d", &n);
    num = (int*)calloc(sizeof(int), n);
 
    for(i=0; i<n; i++)
        scanf(" %d", &num[i]);
 
    line(n);
 
 	free(num);
    return 0;
}
void pr(int n)
{
    int i;
 
    for(i=0; i<n; i++)
        printf("%d ", num[i]);
 
    printf("\n");
}
void line(int n)
{
    int i, j, min, temp;
 
    for(i=0; i<(n-1); i++)
    {
        min=i;
        for(j=i+1; j<n; j++) //최솟값 구하기 
        {
            if(num[min]>num[j]) 
                min=j;
        }
 
        if(min!=i)
        {
            temp=num[i];
            num[i]=num[min];
            num[min]=temp;
        }
 
        pr(n);
    }
    
}
