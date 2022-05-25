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
class Sports{
    protected:
    int score;

    public:
    Sports(int sc = 0){
        score = sc;
    }
};

class Test:public Student{
    protected:
    int m1, m2;

    public:
    Test(int mr1 = 0, int mr2 = 0, string nm = "", int rN = 1):Student(nm, rN){
        m1 = mr1;
        m2 = mr2;
    }
};