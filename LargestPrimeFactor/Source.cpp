/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143?
*/

#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int);

int main() {
	long long int number = 600851475143;

	for (int i = sqrt(number); i > 1; i--) {
		if (number%i == 0)
		{
			if (isPrime(i))
			{
				cout << i << endl;
				break;
			}
		}
	}
}

bool isPrime(int number) {
	if (number <= 1)
		return false;
	else if (number <= 3)
		return true;
	else if (number % 2 == 0 || number % 3 == 0)
		return false;

	int i = 5;
	while (pow(i, 2) <= number)
	{
		if (number%i == 0 || number % (i + 2) == 0)
			return false;
		i += 6;
	}
	return true;
}