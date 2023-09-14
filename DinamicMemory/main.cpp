#include <iostream>
#include <cstdlib>
#include <ctime>

// ���������� ������� ���������� �������
template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}

// ����� ������� � �������
template <typename T>
void print_arr(const T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}

// ���������� num ��������� � ������������� �������
template <typename T>
void arr_add(T*& arr, int& length, int num) {
	if (num <= 0)
		return;
	T* tmp = new T[length + num]{};
	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];

	delete[] arr;

	arr = tmp;
	length += num;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;


	// ������������ ������

	//int* pointer = new int;
	//*pointer = 7;
	//std::cout << "pointer = " << pointer << std::endl;
	//std::cout << "*pointer = " << *pointer << std::endl;
	//delete pointer; // ������������ ������� ������, �� ������� ��������� ���������
	//pointer = nullptr;
	//if (pointer == nullptr) {
	//	pointer = new int;
	//	*pointer = 15;
	//	std::cout << "pointer = " << pointer << std::endl;
	//	std::cout << "*pointer = " << *pointer << std::endl;
	//}
	//
	//delete pointer;


	// ������������ ���������� �������

	/*std::cout << "������� ������ ������� -> ";
	int dsize;
	std::cin >> dsize;

	int* darr = new int[dsize];

	srand(time(NULL));
	for (int i = 0; i < dsize; i++) {
		darr[i] = rand() % 11 + 10;
		std::cout << darr[i] << ' ';
	}

	std::cout << std::endl;
	
	delete[] darr;*/

	// ������������ ��������� �������

	//int rows = 5, cols = 5;
	//// ��������� ������
	//// int* dmx = new int[rows][cols];  // ������!!!!
	//int** dmx = new int*[rows];
	//for (int i = 0; i < rows; i++)
	//	dmx[i] = new int[cols];
	//// ������������ ������
	//for (int i = 0; i < rows; i++)
	//	delete[] dmx[i];
	//delete[] dmx;

	// ������ 1. ���������� ������� �������

	std::cout << "������ 1.\n������� ������ ������� -> ";
	int size1;
	std::cin >> size1;

	int* arr1 = new int[size1];

	fill_arr(arr1, size1, 1, 11);
	std::cout << "����������� ������:\n";
	print_arr(arr1, size1);

	std::cout << "������� ���������� ����� ��������� -> ";
	std::cin >> n;

	arr_add(arr1, size1, n);

	std::cout << "�������� ������:\n";
	print_arr(arr1, size1);
	std::cout << std::endl;






	delete[] arr1;
	arr1 = nullptr;


	return 0;
}