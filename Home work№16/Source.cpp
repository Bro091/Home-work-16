#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, sum;

	// ������ 1. 
	std::cout << "������ 1.\n����������� ������:\n";
	const int size = 10;
	int arr[size];
	srand(time(NULL));
	sum = 0;
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
		std::cout << arr[i] << " \t";
		sum += arr[i];
	} 	std::cout << std::endl;
	double arithm = sum / size;
	int counter = 0;

	for (int i = 0; i < size; i++)
		if (arr[i] < arithm)
			counter++;

	std::cout << "��. �������������� ������� �������: " << arithm << "\n\n";
	std::cout << "���-�� ���������, ������� ������ ��. ��������������: " << counter << "\n\n";

	//������ 2
	const int height = 5;
	const int wight = 5;
	int arr1[height][wight];
	srand(time(NULL));
	std::cout << "������ 2\n������ 1:\n";
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < wight; j++) {
			arr1[i][j] = rand() % 10;
			std::cout << arr1[i][j] << '\t';
		}
		std::cout << '\n';
	}


	int arr2[height][wight];
	std::cout << "������ 2:\n";
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < wight; j++) {
			arr2[i][j] = rand() % 10;
			std::cout << arr2[i][j] << '\t';
		}
		std::cout << '\n';
	}

	std::cout << "�������� ������:\n";
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < wight; j++) {
			std::cout << arr1[i][j] + arr2[i][j] << '\t';
		}
		std::cout << '\n';

	}
	std::cout << '\n';
	
	
	std::cout << "������ 3\n������� 6�� ������� ����� ->";
	
	std::cin >> n;

	int n100000 = n / 100000;
	int n10000 = n / 10000 % 10;
	int n1000 = n / 1000 % 10;
	int n100 = n / 100 % 10;
	int n10 = n / 10 % 10;
	int n1 = n % 10;
	const int size3 = 6;
	int arr3[size3]{ n100000, n10000, n1000, n100, n10, n1 };
	
	if (n < 100000 || n > 999999)
		std::cout << "������ �����!";
	else
		for (int i = 0; i < size3; i++)
			std::cout << arr3[i] << ' ';
			
		



	return 0;
}