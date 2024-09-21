#include <stdio.h>

int lcm(int n1, int n2) {
	int max;
	if (n1 > n2) max = n1;
	else max = n2;
	int ans = max - 1;
	for (int i = max; i % n1 != 0 or i % n2 != 0; i++)
		ans = i;
	return ans + 1;
}
	void main() {
		int m = scanf("%d", &m);
		int ans = m;
		for (int i = m - 1; i != 1; i--)  
			ans = lcm(ans, i);
		printf("Answer: %d", ans - 1);
}
