// Step function

#include <cstdio>

int step_function(int x) {
	int result = 0;
	if (x < 0) {
		result = -1;
	}
	else if (x > 0) {
		result = 1;
	}
	return result;
}

int main() {

	int value1 = step_function(100);
	int value2 = step_function(-500);
	int value3 = step_function(0);

	printf("The result for 100: %d\n", value1);
	printf("The result for -500: %d\n", value2);
	printf("The result for 0: %d\n", value3);

	return 0;
}