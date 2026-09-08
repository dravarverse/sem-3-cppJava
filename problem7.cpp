#include <iostream>
#include <string>

class Rectangle {
    
    public:
    int length;
    int width;
    Rectangle(){
        std::cout << "Enter Length: ";
        std::cin >> length;
        std::cout << "Enter Width: ";
        std::cin >> width;
        std::cout << std::endl;
    }
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
    r.length = r1.length;
    r.width = r2.width;
    return r;
    }


int main(){
    Rectangle r1, r2;
    std::cout << r1.compare(r2) << std::endl;
    std::cout << "New Length: " << newRectangle(r1, r2).length << std::endl;
    std::cout << "New Width: " << newRectangle(r1, r2).width << std::endl;

    return 0;
}