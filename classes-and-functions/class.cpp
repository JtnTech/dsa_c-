#include <iostream>
using namespace std;

class student
{
public:
    int rollno;
    char name[20];

    void input();
    void output();
};

void student::input()
{
    cin >> rollno >> name;
}

void student::output()
{
    cout << "Roll no is: " << rollno << "\n"
                                        "Name is: "
         << name << endl;
}

int main()
{
    student s1;
    s1.input();
    cout << "Your Roll no and name is:\n";
    s1.output();

    return 0;
}
