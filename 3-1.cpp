#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;
class Person {
public:
    string name;
    int age;
    string sex;
    
    Person(string name_, int age_, string sex_){
        name = name_;
        age = age_;
        sex = sex_;
    }
    
    void display() {
        cout << name << ' ' << age  << ' ' << sex;
    }
};

class Student : public Person {
public:
    int grade;
    float score;
    
    Student(string name_, int age_, string sex_, 
        float grade_, float score_):Person(name_, age_, sex_) {
        grade = grade_;
        score = score_;
    }
    
    void show() {
        cout << name << ' '
        << age << ' '
        << sex << ' '
        << grade << ' '
        << score;
    }
    
    void add(float s) {
        score += s;
    }
};

int main()
{
    Student xuli("Xu Li", 20, "f", 2, 25.4);
    xuli.add(2.6);
    xuli.show();
    
    return 0;
}
