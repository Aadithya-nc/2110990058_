#include <iostream>
using namespace std;

class Student{
    protected:
    int rNo;
    string name;

    public:
    Student(string n = "",int i = 1){
        rNo = i;
        name = n;
    }
};