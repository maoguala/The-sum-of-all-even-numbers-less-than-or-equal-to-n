#include <iostream>
#include <string>

int a_for(int z = 0,int s = 0){
    //z = x;
for(int i = 1;i <=z; i++){
        if(i%2 == 0){
            s = s + i;
        }
    }
    std::cout << "Totall: " << s << std::endl;
return 0;
}
int b_while(int z = 0,int s = 0){

return 0;
}
int c_do_while(int z = 0,int s = 0){

return 0;
}

//main aera.
int main(){

std::string sel;
int x,y = 0;
std::cout << "Please enter the number: ";
std::cin >> x;
std::cout << "Please enter the choise(a \\ b \\ c): ";

while(1){

std::cin>>sel;

if(sel == "a" || sel == "A"){

    return a_for(x,y);

}else if(sel == "b" || sel == "B"){
    return b_while(x,y);

}else if(sel == "c" || sel == "C"){
    return c_do_while(x,y);
}else{
 
    std::cout<<"Please re-enter the choise: ";

}
}

return 0;
}


