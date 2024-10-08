#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    float marks;


    char calculateGrade() const {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }

public:
 
    Student(string n, string c, int r, float m) : name(n), studentClass(c), rollNumber(r), marks(m) {}

    void displayInfo() const {
        cout << "Student Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {

    Student student1("pandey", "12th", 25, 88.5);
    Student student2("lamxi Raj", "10th" , 24, 71);
    Student student3("hacker", "10th" , 23, 98);

    student1.displayInfo();
    student2.displayInfo();
    student3.displayInfo();

    return 0;
}