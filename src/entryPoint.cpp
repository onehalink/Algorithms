#include "../src/Algorithms/Sort.h"
#include "Algorithms/Search.h"
#include<iostream>

int main() {
	const int c = 10;

	int* pl = new int[c];
	for (int i = 0; i < c; i++) {
		*(pl + i) = c-i;
	}
	InsertionSort<int>(pl, c, false);
	
	for (int i = 0; i < c; i++)
		std::cout << *(pl + i) << "\t";
	std::cout << std::endl;
	std::cout << BinarySearch<int>(pl, 9, c);
	std::cin.get();
	return 0;
}