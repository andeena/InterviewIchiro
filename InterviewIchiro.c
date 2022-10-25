#include <stdio.h>

int main() {

	int x=0, y;
	scanf("%d", &y);
	for(int i=x; i<=y; i++){
		if(i%2==1){
			printf("%d", i);
		}
	}
	return 0;
}
