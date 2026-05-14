#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    Student(string n, int r, float m) {
        name = n;
        rollNumber = r;
        marks = m;
    }
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
    
    float getMarks() {
        return marks;
    }
};

int main() {
    Student s1("John Doe", 101, 85.5);
    Student s2("Jane Smith", 102, 92.0);
    
    cout << "Student 1 Details:" << endl;
    s1.display();
    
    cout << "\nStudent 2 Details:" << endl;
    s2.display();
    
    return 0;
}
