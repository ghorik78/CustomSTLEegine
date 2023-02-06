#include "../include/Vector.h"
#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

int main()
{
	Vector<int> f;
	clock_t start = clock();

	for (size_t i = 0; i < 1000000000; ++i) {
		f.push_back(i);
	}

	clock_t end = clock();

	std::cout << "Executing time (custom vector class): " << (double) (end - start) / CLOCKS_PER_SEC << " sec" << endl;

	clock_t start1 = clock();

	std::vector<int> f1;
	for (size_t i = 0; i < 1000000000; ++i)
		f1.push_back(i);

	clock_t end1 = clock();

	std::cout << "Executing time (STL vector class): " << (double) (end1 - start1) / CLOCKS_PER_SEC << " sec" << endl;

	return 0;
}
