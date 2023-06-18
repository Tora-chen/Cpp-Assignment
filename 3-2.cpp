#include <iostream>
#include <iomanip>
using namespace std;

// 日期类
class Date {
private:
    int year;
    int month;
    int day;
    
public:
    Date(int y, int m, int d) : year(y), month(m), day(d) {}
    void display() {
        cout << year << "/" << month << "/" << day;
    }
};

// 基类：教师
class Teacher {
private:
    string name;
    Date birthdate;
    char gender;
    
public:
    Teacher(string n, Date bd, char g) : name(n), birthdate(bd), gender(g) {}
    void display() {
        cout << name << " ";
        birthdate.display();
        cout << " " << gender << " ";
    }
    string getTitle() {
        return "professor"; // 返回职称
    }
};

// 基类：干部
class Cadre {
private:
    string name;
    Date birthdate;
    char gender;
    
public:
    Cadre(string n, Date bd, char g) : name(n), birthdate(bd), gender(g) {}
    void display() {
        cout << name << " ";
        birthdate.display();
        cout << " " << gender << " ";
    }
    string getPost() {
        return "Header"; // 返回职务
    }
};

// 派生类：教师兼干部
class Teacher_Cadre : public Teacher, public Cadre {
private:
    float wages;
    
public:
    Teacher_Cadre(string n, Date bd, char g, double w)
    : Teacher(n, bd, g), Cadre(n, bd, g), wages(w) {}
    
    void show() {
        Teacher::display(); // 调用Teacher类中的display()函数
        cout << getTitle() << " " << getPost() << " " <<fixed<<setprecision(2)<< wages << endl;
    }
};

int main() {
    Date birthdate(1967, 10, 12);
    Teacher_Cadre teacher_cadre("LiHong", birthdate, 'f', 8000.00);
    teacher_cadre.show();
    
    return 0;
}

