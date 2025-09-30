//Мерзлякова Тимофея РПО 2

#include <iostream>
#include <Windows.h>																								
#include <string>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	
	const int row = 3, col = 4;
	int arr[row][col]{};
	int sumRow{}, sumCol{}, sumAll{};

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << "  ";
			sumCol += arr[i][j];
		}

		std::cout << "| " << sumCol << std::endl;
		sumCol = 0;
	}
	std::cout << "----------------" << std::endl;
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			sumRow += arr[j][i];
			sumAll += arr[j][i];
		}

		std::cout << sumRow << " ";
		sumRow = 0;
	}
	std::cout << "| " << sumAll;
	
	return 0;
}