#include <iostream>

class Distance {
    
    public:
    int feet;
    int inches;
    Distance(){
        std::cout << "Feet: ";
        std::cin >> feet;
        std::cout << "Inches: ";
        std::cin >> inches;
    }
    void addDistance(Distance d){
        feet += d.feet;
        inches += d.inches;
        if (inches >= 12)
        {
            feet++;
            inches %= 12;
        }
    }
};

int main(){
    Distance d1;
    Distance d2;
    d1.addDistance(d2);
    std::cout << "]nNew Disance\nFeet: " << d1.feet << std::endl;
    std::cout << "Inches: " << d1.inches << std::endl;
    
    return 0;
}