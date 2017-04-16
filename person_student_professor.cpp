#include <iostream>

using namespace std;

class Person {
    public:
        string name;
        int age;
		static int personCount;
        virtual void getdata() {
            std::cin >> this->name >> this->age;
        }
        virtual void putdata() {
            std::cout << this->name << ' ' << this->age;
        }
        virtual void getcount() {
            std::cout << Person::personCount << endl;
        }
        Person() {
            Person::personCount++;
        }
};

int Person::personCount = 0;

class Professor : public Person {
    public:
        int publications;
        int age;
        string name;
        static int professorCount;
        int cur_id;
        void getdata() {
            std::cin >> this->name >> this->age >> this->publications;
        }
        void putdata() {
            std::cout << this->name << ' ' << this->age << ' ' << this->publications << ' ' << this->cur_id << endl;
        }
        Professor() : Person() {
            Professor::professorCount++;
            this->cur_id = Professor::professorCount;
        }
};

int Professor::professorCount = 0;

class Student : public Person {
    public:
        const int marksCount = 6;
        int marks[6];
        int cur_id;
        static int studentCount;
        Student() : Person() {
            Student::studentCount++;
            this->cur_id = Student::studentCount;
        }
        void getdata() {
            std::cin >> this->name >> this->age >> this->marks[0] >> this->marks[1] >> this->marks[2] >> this->marks[3]
                     >> this->marks[4] >> this->marks[5];
        }
        void putdata() {
            int total = 0;

            for (int i = 0; i < this->marksCount; i++) {
                total += marks[i];
            }

            std::cout << this->name << ' ' << this->age << ' ' << total << ' ' << this->cur_id << endl;
            
        }
};

int Student::studentCount = 0;

int main() {

    Student *s = new Student;
    Student *c = new Student;
    Student *p = new Student;

    Professor *Vasilev = new Professor;
    //Vasilev->getdata();

    Professor *Stamatov = new Professor;
    Professor *Proinov = new Professor;
/*
    (*p).getdata();
    p->putdata();
*/

    Proinov->getdata();
    Proinov->putdata();
    Proinov->getcount();

    return 0;

}
