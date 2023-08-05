// A program that indexes into an array

#include <cstdio>

int main() {
	int arr[] = { 1, 2, 3, 4 };
	printf("The forth element is %d.\n", arr[3]);
	arr[3] = 200;
	printf("The forth element is %d.\n", arr[3]);
}
