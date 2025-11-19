#include <iostream>
using namespace std;

struct Student {
    string x;
    int y;
    int z;
};

int main() {
    Student s1;

    // Assigning values
   s1. x = "Hermela";
   s1. y = 12;
   s1. z = 20;

    // Printing the values
    cout << "Student x: " << s1.x << endl;
    cout << "y: " << s1.y << endl;
    cout << "z: " << s1.z << endl;

    return 0;
}
    
