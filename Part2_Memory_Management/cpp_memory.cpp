#include <iostream>
using namespace std;

int main() {
    int* numbers = new int[100];
    numbers[0] = 10;

    delete[] numbers;
    return 0;
}
