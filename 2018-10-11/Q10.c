// 1620 : 전화번호 속의 암호 


#include <stdio.h>

char s[100];
int an[4];

void serch(int p, int m);

int main() {
	int num, p, m;
	scanf("%s", s);
	scanf("%d %d", &p, &m);
	
	serch(p, m);
	return 0;
}

void serch(int p, int m) {
	int i = 0, h = 1, c = 0, a = 0, ac = 0;
	
	while(s[i] >= '0' && s[i] <= '9' || s[i] == '-') {
		if(s[i] == '-') {
			h++;	// h -> 몇번째 더미인지 찾는 변수
			
			if(c > 4)
				a = -1;
			else if(h == m)
				a = i + 1;
			else if(h == m + 1)
				ac = c;
			c = 0; 
		}
		else
			c++;
		i++;
	}
	
	if(c > 4 || h < m)
		a = -1;
	if(ac == 0)
		ac = i - a;
	
	if(a != -1) {
		if(ac < 4) { for(i = 0; i < 4 - ac; i++){ an[i] = p; } }
		for(i = 4 - ac; i < 4; i++) {
			s[a] = s[a] - '0' + p;
			if(s[a] >= 10) { s[a] = s[a] % 10; }
			an[i] = s[a];
			a++;
		}
		
		for(i = 0; i < 4; i++) { printf("%d", an[i]); }
	}
	
	else { printf("INPUT ERROR!\n"); }
}
