// 1146 : �������� 



#include <stdio.h>
#include <stdlib.h>

int *num;
 
void pr(int n); //����Լ� 
void line(int n); //�����Լ� 

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
        for(j=i+1; j<n; j++) //�ּڰ� ���ϱ� 
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
