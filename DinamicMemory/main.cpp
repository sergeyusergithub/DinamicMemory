#include <iostream>
#include <cstdlib>
#include <ctime>

// заполнение массива случайными числами
template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}

// вывод массива в консоль
template <typename T>
void print_arr(const T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}

// добавление num элементов к динамическому массиву
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


	// динамическая память

	//int* pointer = new int;
	//*pointer = 7;
	//std::cout << "pointer = " << pointer << std::endl;
	//std::cout << "*pointer = " << *pointer << std::endl;
	//delete pointer; // освобождение области памяти, на которую направлен указатель
	//pointer = nullptr;
	//if (pointer == nullptr) {
	//	pointer = new int;
	//	*pointer = 15;
	//	std::cout << "pointer = " << pointer << std::endl;
	//	std::cout << "*pointer = " << *pointer << std::endl;
	//}
	//
	//delete pointer;


	// динамические одномерные массивы

	/*std::cout << "Введите размер массива -> ";
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

	// динамические двумерные массивы

	//int rows = 5, cols = 5;
	//// выделение памяти
	//// int* dmx = new int[rows][cols];  // ОШИБКА!!!!
	//int** dmx = new int*[rows];
	//for (int i = 0; i < rows; i++)
	//	dmx[i] = new int[cols];
	//// освобождение памяти
	//for (int i = 0; i < rows; i++)
	//	delete[] dmx[i];
	//delete[] dmx;

	// Задача 1. Увеличение размера массива

	std::cout << "Задача 1.\nВведите размер массива -> ";
	int size1;
	std::cin >> size1;

	int* arr1 = new int[size1];

	fill_arr(arr1, size1, 1, 11);
	std::cout << "Изначальный массив:\n";
	print_arr(arr1, size1);

	std::cout << "Введите количество новых элементов -> ";
	std::cin >> n;

	arr_add(arr1, size1, n);

	std::cout << "Итоговый массив:\n";
	print_arr(arr1, size1);
	std::cout << std::endl;






	delete[] arr1;
	arr1 = nullptr;


	return 0;
}