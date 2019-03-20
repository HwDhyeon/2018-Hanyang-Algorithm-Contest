// 1157 : 버블 정렬



#include <stdio.h>
#include <stdlib.h>

int *list;

void sort(int n);
void show(int n);
int main() {
	
	int n, i;
	scanf("%d", &n);
	list = (int*)calloc(sizeof(int), n);
	for(i=0;i<n;i++){ scanf("%d", &list[i]); }
	
	sort(n);
	
	free(list);
	return 0;
}

void sort(int n) {
	
	int i, j, tmp;
	
	for(i=n-1;i>0;i--) {
		for(j=0;j<i;j++) {
			if(list[j] > list[j + 1]) {
				tmp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = tmp;
			}
		}
		show(n);
	}
	
}

void show(int n) {
	
	int i;
	for(i=0;i<n;i++){ printf("%d ", list[i]); }
	puts("");
	
}
