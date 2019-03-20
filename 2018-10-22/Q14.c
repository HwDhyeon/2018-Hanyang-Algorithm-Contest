// 1836 : 연속부분합 찾기 



#include <stdio.h>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main() {
	int N;
	scanf("%d", &N);
	int num, maxsum = 0, sum = 0;
	
	for(int i=0;i<N;i++) {
		scanf("%d", &num);
		sum += num;
		
		if(sum < 0) {
			sum = 0;
			continue;
		}
		
		maxsum = MAX(maxsum, sum);
	}
	
	printf("%d\n", maxsum);
	
	return 0;
}
