// 2815 : 10진수를 2진수로 



#include <stdio.h>

int main() {
	int i=0, j, orgnum, rst[31];
    scanf("%d",&orgnum);
    do{ //print rst[31];
        rst[i] = orgnum % 2;
        orgnum = orgnum/2;
        i++;
    }while(orgnum!=0);
    for(j=i-1;j>=0;j--) printf("%d",rst[j]);
	
	return 0;
}
