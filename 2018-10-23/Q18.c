// 1534 : 10진수를 2,8,16진수로



#include <stdio.h>

int main() {
	
	int j, n, d, i = 0, arr[32] = {0, };
	
	scanf("%d%d", &n, &d);
	
	if(d == 2) {
		while(n != 1) {
			arr[i++] = n % 2;
			n = n / 2;
		}
		arr[i] = n;
		
		for(j=i;j>=0;--j)
			printf("%d", arr[j]);
	}
	else if (d == 8)
    {
        while (n > 7)
        {
            arr[i++] = n % 8;
            n /= 8;
        }
        arr[i] = n;
        for (j = i; j >= 0; --j)
            printf("%d", arr[j]);
    }
    else if (d == 16)
    {
        while (n > 15)
        {
            arr[i++] = n % 16;
            n /= 16;
        }
        arr[i] = n;
        for (j = i; j >= 0; --j)
        	printf("%c", arr[j] < 10 ? arr[j] + '0' : arr[j] + 55);
    }
	
	return 0;
}
