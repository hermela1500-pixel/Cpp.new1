#include <iostream>
using namespace std;

struct Student {
    string name;
    int grade;
    int age;
};

int main() {
    Student s1;

    // Assigning values
    s1.name = "Hermela";
    s1.grade = 12;
    s1.age = 20;

    // Printing the values
    cout << "Student Name: " << s1.name << endl;
    cout << "Grade: " << s1.grade << endl;
    cout << "Age: " << s1.age << endl;

    return 0;
}
    