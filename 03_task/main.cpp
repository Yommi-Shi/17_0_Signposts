#include <iostream>
#include <cstring>

bool substr(const char* str_one, const char* str_two) {
    size_t len_str_one = strlen(str_one);
    size_t len_str_two = strlen(str_two);

    if (len_str_one < len_str_two) {
        return false;
    }

    for (int i = 0; i < len_str_one; i++) {
        int coincidence = 0;
        for (int j = 0; j < len_str_two; j++) {
            if (*(str_one + i + j) == *(str_two + j)) {
                coincidence++;
            }
        }
        if (coincidence == len_str_two) {
            return true;
        }
    }

    return false;
}


int main() {
    std::cout << "Task_03" << std::endl;

    const char* a = "Hello world";
    const char* b = "wor";
    const char* c = "banana";

    std::cout << std::boolalpha << substr(a,b) << " " << std::boolalpha << substr(a,c);


}