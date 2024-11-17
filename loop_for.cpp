#include <iostream>

int main(){
    int x = 0,y = 0;
    std::cin>>x;
    for(int i = 1;i <=x; i++){
        if(i%2 == 0){
            y = y + i;
        }
    }
    std::cout << "Totall: " << y << std::endl;
}