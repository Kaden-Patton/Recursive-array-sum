#include <iostream>
#include <vector>
int recursive_sum(std::vector<int> vec, int SIZE);

int main()
{
	unsigned int size = -1;
	std::vector<int> vec{};
	do {
		std::cout << "Please enter a positive integer: ";
		std::cin >> size;
	} while (size < 0);

	vec.resize(size);

	for (int i = 0; i <= size - 1; i++) {
		int temp = 0;
		std::cout << "Please enter the value for array index " << i << ": ";
		std::cin >> temp;
		vec[i] = temp;
	}

	int sum = recursive_sum(vec, size);

	std::cout << "The sum of all the elements in the array is " << sum;
}

int recursive_sum(std::vector<int> vec, int size) {
	if (size == 0) {
		return 0;
	}
	else {
		return vec[size - 1] + recursive_sum(vec, size - 1);
	}
}