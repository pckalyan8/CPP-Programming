#include <iostream>

using namespace std;

enum Gender
{
    MALE = 1,
    FEMALE = 2,
    OTHERS = 3
};

class Student
{
private:
    Gender gender;

public:
    int age;
    string name;

    Student() {}

    Student(int age, string name)
    {
        this->age = age;
        this->name = name;
    }

    Student(int age, string name, Gender gender)
    {
        this->age = age;
        this->name = name;
        this->gender = gender;
    }

    void setGender(Gender gender)
    {
        this->gender = gender;
    }

    void print()
    {
        cout << "age = " << age << endl;
        cout << "name = " << name << endl;
        cout << "gender = " << gender << endl;
    }

    bool isAdult() { return age > 18; }
};

class Engineer : public Student
{
private:
    string specialization;
    typedef Student super;

public:
    
    Engineer() {}
    Engineer(int age, string name, string specialization) : Student(age, name)
    {
        super::age = age;
        super::name = name;
        this->specialization = specialization;
    }
    void setSpecialization(string specialization)
    {
        this->specialization = specialization;
    }

    void print()
    {
        super::print();
        cout << "specialization = " << specialization << endl;
    }
};

int main()
{
    // create an object of class Student
    Gender gender;
    gender = MALE;
    Student student(20, "John");
    student.setGender(gender);
    student.print();

    student.age = 30;
    student.name = "Kate";
    student.print();

    Student studentTwo;
    studentTwo.age = 40;
    studentTwo.name = "Tyson";
    studentTwo.print();
    cout << "Is Tyson adult? " << studentTwo.isAdult() << endl;

    // create an object of class Engineer
    Engineer engineer(30, "Tom", "Computer Science");
    engineer.setGender(gender);
    engineer.print();

    return 0;
}
