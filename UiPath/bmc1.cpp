#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    // Read integers from standard input
    int num;
    while (true) {
        std::cin >> num;
        if (num < 0) {
            break;
        }
        numbers.push_back(num);
    }

    int max_num = 0;
    // Find the highest number less than 100 in the array
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] < 100 && numbers[i] > max_num) {
            max_num = numbers[i];
        }
    }

    // Print the result (0 if no numbers are less than 100)
    std::cout << max_num << std::endl;

    return 0;
}