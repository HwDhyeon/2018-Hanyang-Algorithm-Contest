// 1291 : ±¸±¸´Ü 



#include "stdio.h"
int main()
{
    int s, e;
    int a, b;
     
    while(1) {
        scanf("%d%d", &s, &e);
        if(s > 9 || s < 2 || e > 9 || e < 2) {
            printf("INPUT ERROR!\n");
            continue;
        }
        else {
            break;
        }
    }
     
    if(s>e) {
        for(int i=1;i<10;i++) {
            for(int j=s;j>=e;j--) {
                printf("%d * %d = %2d   ", j, i ,j*i);
            }
            printf("\n");
        }
    }
    else {
        for(int i=1;i<10;i++) {
            for(int j=s;j<=e;j++) {
                printf("%d * %d = %2d   ", j, i ,j*i);
            }
            printf("\n");
        }
    }
     
    return 0;
}
