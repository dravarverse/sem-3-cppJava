#include <iostream>

class Students {
    
    public:
    int rollNo;
    int marks;
};

int findTop(Students n1, Students n2){
    if (n2.marks > n1.marks)
    {
        return n2.rollNo;
    }
    else if(n2.marks < n1.marks){
        return n1.rollNo;
    }
    else{
        return 1;
    }
}

int main(){
    Students s1, s2;
    std::cout << "Enter Roll Number: ";
    std::cin >> s1.rollNo;
    std::cout << "Enter Marks:";
    std::cin >> s1.marks;
    std::cout << "Enter Roll Number: ";
    std::cin >> s2.rollNo;
    std::cout << "Enter Marks: ";
    std::cin >> s2.marks;
    
    std::cout << "Topper Roll Number: " << findTop(s1, s2) << std::endl;
    
    return 0;
}