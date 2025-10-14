#include <iostream>


void reverse_array(int* array, int size) {
    int* start = array;
    int* end = array + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}


int main() {
    std::cout << "Task_02" << std::endl;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = std::size(array);

    reverse_array(array, size);

    std::cout << "Elements in reverse order:" << std::endl;
    for (int a : array) {
        std::cout << a << " ";
    }
}