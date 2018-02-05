#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int id;
    // เพิ่มเอาเอง
    string name;
    int age;
    double height;
public:
    Student(int i, string n, int a, double h)
    {
        id = i;
        name = n;
        age = a;
        height = h;
    }

    int getId()
    {
        return id;
    }
    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
    double getheight()
    {
        return height;
    }
};

int main ()
{
    Student Noctis(36548 , "noctis" , 20 , 176);
    Student Ignis(36549 , "Ignis" , 22 , 183);
    Student Gladiolus(36550 , "Gladiolus", 23, 198);
    Student Prompto(36551 , "Prompto", 20, 173);

    cout << "id : " << Noctis.getId() << endl;
    cout << "name : " << Noctis.getname() << endl;
    cout << "age : " << Noctis.getage() << endl;
    cout << "height : " << Noctis.getheight() << endl;

    cout << "id : " << Ignis.getId() << endl;
    cout << "name : " << Ignis.getname() << endl;
    cout << "age : " << Ignis.getage() << endl;
    cout << "height : " << Ignis.getheight() << endl;

    cout << "id : " << Gladiolus.getId() << endl;
    cout << "name : " << Gladiolus.getname() << endl;
    cout << "age : " << Gladiolus.getage() << endl;
    cout << "height : " << Gladiolus.getheight() << endl;

    cout << "id : " << Prompto.getId() << endl;
    cout << "name : " << Prompto.getname() << endl;
    cout << "age : " << Prompto.getage() << endl;
    cout << "height : " << Prompto.getheight() << endl;

    return 0;
}
