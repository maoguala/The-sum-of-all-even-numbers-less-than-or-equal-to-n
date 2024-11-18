#include <iostream>
//#include <string>

int process(int n_recived){
    
    int sum = 1;
    for(int i = 1; i <= n_recived; i++){
        sum *= i; //sum = sum * i, [n! = n * (n - 1) * (n - 2) *...* 1]
    }
    std::cout << "Totall: " << sum << std::endl;
    return 0;
}

int main(){
    
    int n = 0;
    std::cout << "Please enter the number: ";
    while (true)
    {
        std::cin>>n;
        if(n >= 0){
            break;
        }
        std::cout << "\n";
    }
    return process(n);
}
