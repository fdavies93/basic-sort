#include <iostream>
#include <string>

int* bubbleSort(int* input, int len) {
    std::cout << "Length: " << len << "\n";
    int* input_copy = new int[len];
    memcpy(input_copy, input, len * sizeof(*input));
    int temp;
    for (int step = 0; step < len; ++step) {
        for (int i = 0; i < len - step - 1; ++i) {
            if (input_copy[i] > input_copy[i+1]) { 
                temp = input_copy[i+1];
                input_copy[i+1] = input_copy[i];
                input_copy[i] = temp;
            }
        }
    }
    return input_copy;
}

int main() {
    std::string input;
    int toSort[3];
    for (int i = 0; i < 3; i++) {
        std::cin >> input; 
        toSort[i] = std::stoi(input);
    }
    
    int* sorted = bubbleSort(toSort, 3);

    for (int i = 0; i < 3; i++) {
        if (i > 0) std::cout << " ";
        std::cout << sorted[i];
    }

}