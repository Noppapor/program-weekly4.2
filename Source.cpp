#include<stdio.h>
int main() {
	int x, y, z, max, sum;
	scanf_s("%d %d %d", &x, &y, &z);
	max = x;
	if (max <= y && y <= z) max = z;
	if (max <= y && y >= z) max = y;
	if (max == x) {
		printf("%d", y + z);
	}
	if (max == y) {
		printf("%d", x + z);
	}
	if (max == z) {
		printf("%d", x + y);
	}


}