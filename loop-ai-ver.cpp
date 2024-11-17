#include <iostream>
#include <string>

// 使用單一函數進行重複邏輯的處理，避免代碼重複
int calculateSum(int z, char method) {
    int sum = 0;
    if (method == 'a' || method == 'A') {
        // 使用 for loop
        for (int i = 1; i <= z; ++i) {
            if (i % 2 == 0) {
                sum += i;
            }
        }
    } else if (method == 'b' || method == 'B') {
        // 使用 while loop
        int i = 0;
        while (i <= z) {
            if (i % 2 == 0) {
                sum += i;
            }
            ++i;
        }
    } else if (method == 'c' || method == 'C') {
        // 使用 do-while loop
        int i = 0;
        do {
            if (i % 2 == 0) {
                sum += i;
            }
            ++i;
        } while (i <= z);
    } else {
        std::cerr << "Invalid method selected.\n";
        return -1;
    }
    std::cout << "Total: " << sum << std::endl;
    return 0;
}

// 主函數處理用戶輸入與選擇
int main() {
    int number = 0;
    char choice;

    // 輸入數字
    std::cout << "Please enter the number: ";
    std::cin >> number;

    // 用戶選擇
    while (true) {
        std::cout << "Please enter your choice (a / b / c): ";
        std::cin >> choice;

        if (choice == 'a' || choice == 'A' || choice == 'b' || choice == 'B' || choice == 'c' || choice == 'C') {
            return calculateSum(number, choice);
        } else {
            std::cout << "Invalid choice, please try again.\n";
        }
    }
    return 0;
}
