#include <iostream>
#include <vector>

int processArray(std::vector<int> &arr) {
    int newSize = 0;
    int sum = 0;
    bool inSequence = false;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 100) {
            sum += arr[i];
            inSequence = true;
        } else {
            if (inSequence) {
                arr[newSize++] = sum;
                sum = 0;
                inSequence = false;
            }
            arr[newSize++] = arr[i];
        }
    }

    if (inSequence) {
        arr[newSize++] = sum;
    }

    return newSize;
}

int main() {
    std::vector<int> numbers;

    int num;
    while (true) {
        std::cin >> num;
        if (num < 0) {
            break;
        }
        numbers.push_back(num);
    }

    int newSize = processArray(numbers);

    for (int i = 0; i < newSize; i++) {
        std::cout << numbers[i] << std::endl;
    }

    return 0;
}