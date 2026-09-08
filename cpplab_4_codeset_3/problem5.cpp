#include <iostream>

class Complex {
    
    public:
    int real;
    int img;
    
    void addition(Complex n1, Complex n2){
        real = n1.real + n2.real;
        img = n2.img + n1.img;
    }
    Complex multiplication(Complex n1, Complex n2){
        Complex n;
        n.real = (n1.real * n2.real) - (n1.img * n2.img);
        n.img = (n1.real * n2.img) + (n1.img * n2.real);
        return n;
    }
};
void substraction(Complex n1, Complex n2){
        int real = n1.real - n2.real;
        int img = n1.img - n2.img;
        std::cout << real << " + i" << img << std::endl;
    }

int main(){
    Complex n1, n2, n3;
    std::cout << "Number 1 (real): ";
    std::cin >> n1.real;
    std::cout << "Number 1 (imaginary): ";
    std::cin >> n1.img;
    std::cout << "Number 2 (real): ";
    std::cin >> n2.real;
    std::cout << "Number 2 (imaginary): ";
    std::cin >> n2.img;

    n3.addition(n1, n2);
    std::cout << "Adding Number 1 and Number 2: " << n3.real << " + i" << n3.img << std::endl;

    std::cout << "Multiplying Number 1 and Number 2: " << n3.multiplication(n1, n2).real << " + i" << n3.multiplication(n1, n2).img << std::endl;
    std::cout << "Subtarcting Number 1 and Number 2: ";
    substraction(n1, n2);
    return 0;
}