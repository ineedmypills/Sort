#include <iostream>
#include <Windows.h>

void bubbleSort(int arr[], int n);
void insertionSort(int arr[], int n);
void selectionSort(int arr[], int n);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 5;
    int arrBubble[size] = { 3, 1, 4, 5, 2 };
    int arrInsertion[size] = { 3, 1, 4, 5, 2 };
    int arrSelection[size] = { 3, 1, 4, 5, 2 };


    // Сортировка пузырьком
    bubbleSort(arrBubble, size);
    std::cout << "Сортировка пузырьком: ";
    for (int num : arrBubble) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Сортировка вставками
    insertionSort(arrInsertion, size);
    std::cout << "Сортировка вставками: ";
    for (int num : arrInsertion) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Сортировка выбором
    selectionSort(arrSelection, size);
    std::cout << "Сортировка выбором: ";
    for (int num : arrSelection) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}