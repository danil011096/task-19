#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>



int divider(int num1, int num2) {
	int common_divisor = 1;
	for (int i = 1; i <= (num1 + num2)/2; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			common_divisor = i;
		}
	}
	return common_divisor;
}

void mirror_number(int num1) {
	if (num1 > 0 && num1 < 10)
	{
		int arr[1]{};
		int m = 1;
		for (int i = 0; i < 1; i++)
		{
			arr[i] = num1 / m % 10;
				std::cout << arr[i];
			m *= 10;
		}
		std::cout << std::endl;
	}
	if (num1 > 9 && num1 < 100)
	{
		int arr[2]{};
		int m = 1;
		for (int i = 0; i < 2; i++)
		{
			arr[i] = num1 / m % 10;
			if (arr[i] == 0)
				std::cout << "\b";
				std::cout << arr[i];
			m *= 10;
		}
		std::cout << std::endl;
	}
	if (num1 > 99 && num1 < 1000)
	{
		int arr[3]{};
		int m = 1;
		for (int i = 0; i < 3; i++)
		{
			arr[i] = num1 / m % 10;
			if (arr[i] == 0)
				std::cout << "\b";
				std::cout << arr[i];
			m *= 10;
		}
		std::cout << std::endl;
	}
	if (num1 > 999 && num1 < 10000)
	{
		int arr[4]{};
		int m = 1;
		for (int i = 0; i < 4; i++)
		{
			arr[i] = num1 / m % 10;
			if (arr[i] == 0)
				std::cout << "\b";
			else
				std::cout << arr[i];
			m *= 10;
		}
		std::cout << std::endl;
	}if (num1 > 9999 && num1 < 100000)
	{
		int arr[5]{};
		int m = 1;
		for (int i = 0; i < 5; i++)
		{
			arr[i] = num1 / m % 10;
			if (arr[i] == 0)
				std::cout << "\b";
			else
				std::cout << arr[i];
			m *= 10;
		}
		std::cout << std::endl;
	}

}

void array(int arr[], const int lenght, int num);
void empty_array(int arr[], const int lenght, int num1, int num2);


int main() {

	setlocale(LC_ALL, "Russian");

	std::cout << "\nЗадание 1.\nВведите числа -> ";
	int n, m;
	std::cin >> n >> m;
	std::cout << "Общий делитель чисел " << n << " и " << m << " = " << divider(n, m);
	std::cout << std::endl;


	std::cout << "\nЗадание 2.\nВведи число -> ";
	std::cin >> n;
	std::cout << std::endl;
	mirror_number(n);

	std::cout << "\nЗадание 3.\n";
	int const size3 = 5;
	int arr3[size3]{ 23, -1, 42, 3, 9 };
	for (int i = 0; i < size3; i++)
		std::cout << arr3[i] << " ";
	std::cout << std::endl;
	array(arr3, size3, -1);
	std::cout << std::endl;

	std::cout << "\nЗадание 4.\nВведи два числа ->";
	int p, o;
	std::cin >> p >> o;
	const int size4 = 10;
	int arr4[size4]{};
	empty_array(arr4, size4, p, o);
	
	

	return 0;
}
void empty_array(int arr[], const int lenght, int num1, int num2) {
	srand(time(NULL));
	for (int i = 0; i < lenght; i++)
	{
		arr[i] = rand() % (num2 + 1 - num1) + num1;
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}



void array(int arr[], const int lenght, int num) {
	int first;
	for (int i = 0; i < lenght; i++)
	{
		if (arr[i] == num)
			first = i;
	}
	std::cout << "Позиция введенного числа - " << first << std::endl;

	for (int i = 0; i < lenght; i++)
	{
		for (int j = first + 1; j < lenght-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
				std::swap(arr[j], arr[j + 1]);
		}
	}
	for (int i = 0; i < lenght; i++)
		std::cout << arr[i] << " ";
}
