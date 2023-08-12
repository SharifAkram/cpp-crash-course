// Refactoring 2_10 with a range-based for loop

#include <cstdio>

int main() {
	unsigned long maximum = 0;
	unsigned long values[] = { 45, 12, 33, 189, 0, 77 };
	for (unsigned long value : values) {
		if (value > maximum) maximum = value;
	}
	printf("The maximum value is %lu.", maximum);
}