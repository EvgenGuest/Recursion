//Персональный шаблон проекта С++
#include <iostream>
using namespace std;

int factorial(int num) {
	if (num <= 1)
		return 1;
	return factorial(num - 1) * num;
}

int fibonacci(int fn);

template <typename T> void bubbleSort(T array[], int length, bool type = false) {
	if (!type) {//false
		for (int i = length - 1; i > 0; i--)
			for (int j = 0; j < i; j++)
				if (array[j] > array[j + 1])
					swap(array[j], array[j + 1]);
	}
	else
		for (int i = length - 1; i > 0; i--)
			for (int j = 0; j < i; j++)
				if (array[j] < array[j + 1])
					swap(array[j], array[j + 1]);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	
	//Задача 2
	cout << "Задача 2.\nИзначальный массив: \n";
	double z2[5] = { 5.1, 6.101, 0.1, -10.8, 0.1 };
	for (int i = 0; i < 5; i++)
		cout << z2[i] << " ";
	cout << "\nОтсортированный массив:\n";

	bubbleSort(z2, 5, true);
	for (int i = 0; i < 5; i++)
		cout << z2[i] << " ";


	return 0;
}

int fibonacci(int fn) {
	if (fn == 0)
		return 0;
	if (fn == 1)
		return 1;
	return fibonacci(fn - 1) + fibonacci(fn - 2);
}
