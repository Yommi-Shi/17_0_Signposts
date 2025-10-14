#include <iostream>


void swap(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    std::cout << "Task_01" << std::endl;
    int a = 10;
    int b = 20;

    swap(&a, &b);

    std::cout << a << " " << b;

}