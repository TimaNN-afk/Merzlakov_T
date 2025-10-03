#include <string>
#include <Windows.h>
#include <iostream>

void Completion(int arr[], int size);
void PrintArr(int arr[], int size);
void Sorting(int arr[], int size, bool sor);
bool Sor();
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	const int size = 10;
	int arr[size]{};

	Completion(arr, size);
	PrintArr(arr, size);
	Sorting(arr, size, Sor());


	return 0;
}

void Completion(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void PrintArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void Sorting(int arr[], int size, bool sor)
{
	bool sort{};
	int temp = arr[0];
	if (sor == false)
	{
		while (sort) {
			for (int i = 0; i < size; i++)
			{

				if (temp > arr[i])
				{
					arr[i - 1] = arr[i];
					arr[i] = temp;
					temp = arr[i];
				}
				else
				{
					temp = arr[i];
				}
			}
		}
		PrintArr(arr, size);
	}
	else
	{

	}
}


bool Sor()
{
	int vvod{};
	while (true)
	{
		std::cout << "Введите 1 если сортировать по возрастанию, 2 если по убыванию: ";
		std::cin >> vvod;
		if (vvod != 1 && vvod != 2)
		{
			std::cout << "Вы ввели неверное значение, введите еще раз.";
			continue;
		}
		else
		{
			break;
		}
	}
	if (vvod == 1)
	{
		return false;
	}
	else
	{
		return true;
	}
}