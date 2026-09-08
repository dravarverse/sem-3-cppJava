#include <iostream>

class Number {
    
    public:
    int integer;
        void display(){
            std::cout << integer << std::endl;
        }
};

int add(Number n1, Number n2){
    return n1.integer + n2.integer;
}

int main(){
    Number n3, n2, n1;
    std::cout << "Enter Number 1: ";
    std::cin >> n1.integer;
    std::cout << "Enter Number 2: ";
    std::cin >> n2.integer;
    n3.integer = add(n1, n2);
    n3.display();
    
    return 0;
}