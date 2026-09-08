#include <iostream>
#include <string>

class Rectangle {
    
    public:
    int length;
    int width;
    
    bool compare(Rectangle r){
    if (length * width == r.length * r.width)
    {
        return true;
    }
    else{
        return false;
    }
    }
   
};

Rectangle newRectangle(Rectangle r1, Rectangle r2){
    Rectangle r;
    r.length = r1.length + r2.length;
    r.width = r2.width + r1.width;
    return r;
    }


int main(){
    Rectangle r1, r2;

    std::cout << "Enter R1 Length: ";
    std::cin >> r1.length;
    std::cout << "Enter R2 Width: ";
    std::cin >> r1.width;

    std::cout << "Enter R2 Length: ";
    std::cin >> r2.length;
    std::cout << "Enter R2 Width: ";
    std::cin >> r2.width;

    std::cout << std::endl;

    std::cout << "Is R1 = R2: " << r1.compare(r2) << std::endl;
    std::cout << "New R3 Length: " << newRectangle(r1, r2).length << std::endl;
    std::cout << "New R3 Width: " << newRectangle(r1, r2).width << std::endl;

    return 0;
}