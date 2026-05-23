#include "Algorithms.h"

unsigned int findNumberOfDigits(unsigned int number)
{
	if (number == 0) return 1;

	unsigned int count = 0;
	while (number != 0) {
		count++;
		number /= 10;
	}

	return count;
}
