#include <iostream>
#include <string>
using namespace std;
class Student
{
    int rollno;
    string Name;
    int physics;
    int chemistry;
    int mathematics;
 public:
    void input()
    {
        cout << "Enter roll no of student: ";
        cin>> rollno;
        cout << "Enter name of student: ";
        cin>> Name;
        cout << "Enter physics marks: ";
        cin>> physics;
        cout << "Enter chemistry marks: ";
        cin>> chemistry;
        cout << "Enter mathematics marks: ";
        cin>> mathematics;
    }
    void display()
    {
        cout << "roll No: " << rollno << endl;
        cout << "Name: " << Name << endl;
        cout << "Physics Marks: " << physics << endl;
        cout << "Chemistry Marks: " << chemistry << endl;
        cout << "Mathematics Marks: " << mathematics << endl;
    }
    void result()
    {
        int total = physics + chemistry + mathematics;
        float percentage = (total / 300.0) * 100;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};
 int main()
{
    Student s;
    cout<<".........s information........"<<endl;
    s.input();
    s.display();
    s.result();
    return 0;
}