#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << " , ";
	std::cout << "\b\b]\n";
}

/*template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand((time(NULL));
		for (int i = 0; i < length; i++)
			arr[i] = rand() % (right - left) + left;
}*/

template <typename T>
void clear_arr(T arr[], const int length, int key) {
	for (int i = 0; i < length; i++)
		if (arr[i] == key)
			arr[i] = 0;
}
template <typename T>
int index_sum(T arr1[], T arr2[], const int length,int index) {
	int sum = 0;
	
			sum = arr1[index] + arr2[index];
	
	return sum;
}
template <typename T>
int mean_arr(T arr[], const int length) {
	int sum = 0;
	int min = arr[0];
	int max = arr[0];
	for (int i = 1; i < length; i++)
		max = arr[i] > max ? arr[i] : max;
	for (int i = 1; i < length; i++)
	min = arr[i] < min ? arr[i] : min;
		sum = min +max;
		
		return sum / 2;
}
template<typename T>
int permute_arr(T arr, const int length) {
	int first_index = 0, last_index = 0;
	for (int i = last_index - 1; i > first_index + 1; i--)
		for (int j = first_index + 1; j < i; j++)

}


int main() {
	setlocale(LC_ALL, "Russian");
	//int n;
	//Задача 1.
	/*const int size = 10;
	int arr[size]{ 6,5,8,11,5,7,8,5,9,1 };
	std::cout << "Массив:\n";
	print_arr(arr, size);
	std::cout << "Введите число для обнуления - >\n";
	std::cin >> n;
	clear_arr(arr, size, n);
	std::cout << "Итоговый массив:\n";
	print_arr(arr, size);
	std::cout << std::endl;*/
	//Задача 2.
	/*const int size = 4;
	int arr1[size]{ 2,1,8,5 };
	int arr2[size]{ 7,1,2,3, };
	std::cout << "Массив 1:\n";
	print_arr(arr1, size);
	std::cout << "Массив 2:\n";
	print_arr(arr2, size);
	std::cout<<"Введите число- >\n";
	std::cin >> n;
	std::cout << "Сумма индексов равна:\n";
	index_sum(arr1, arr2, size, n);*/
	//Задача 3.
	/*const int size = 5;
	int arr[size]{ 1,2,3,4,5 };
	std::cout << "Массив:\n";
	print_arr(arr, size);
	std::cout << "Среднее арифметическое мин и мах:\n";
	mean_arr(arr, size);*/
	//Задача 5.


	return 0;
}