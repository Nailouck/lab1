#include "math_alh.h"
int gcd(int n1, int n2) {
	while(n1 != n2) {
		if(n2 > n1) n2 -= n1;
		else n1 -= n2;
}
	return n2;
}
int lcm(int n1, int n2) {
	return n2 * n1 / gcd(n1, n2);
}
