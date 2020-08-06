#include<stdio.h>
#define jump(x) ++x
int main() {
	char *ptr = "covid";
	int x = 10;
	float f = 10.5;
	printf("%s ", jump(ptr));
	printf("%d", jump(x));
	printf(" %.2f",jump(f));
	return 0;
}
