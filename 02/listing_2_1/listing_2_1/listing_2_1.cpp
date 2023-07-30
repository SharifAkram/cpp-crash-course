// A program that assigns integer variables and prints them
// with the appropiate format specifier

#include <cstdio>

int main() {
	unsigned short a = 0b10101010;
	printf("%hu\n", a);
	int b = 0123;
	printf("%d\n", b);
	unsigned long long d = 0xFFFFFFFFFFFFFFFF;
	printf("%llu\n", d);
}