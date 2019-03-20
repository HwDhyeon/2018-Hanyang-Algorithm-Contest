// 1692 : °ö¼À 



#include <stdio.h>

int main() {
	
	int u = 0, d = 0, o = 0, t = 0, th = 0;
	
	scanf("%d%d", &u, &d);
	
	o = ((d % 100) % 10);
	t = (d % 100) / 10;
	th = d / 100;
	
	printf("%d\n%d\n%d\n%d\n", o * u, t * u, th * u, u * d);
	
	return 0;
}
