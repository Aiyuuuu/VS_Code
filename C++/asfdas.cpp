#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    int salary;
    

public:
    string getName() {
        return name;
    }

    int getId() {
        return id;
    }

    int getSalary() {
        return salary;
    }

    void setName(string Naam) {
        name = Naam;
    }

    void setId(int idoeee) {
        id = idoeee;
    }

    void setSalary(int paisa) {
        if (salary >= 0) {
            salary = paisa;
        } else {
            cout << "Salary cannot be negative" << endl;
        }
    }
};



int main() {
    Employee mekail;
    Employee ayan;


    ayan.setName("aiyu");
    ayan.setId(69);
    ayan.setSalary(9);

    mekail.setName("rebel");
    mekail.setId(1234);
    mekail.setSalary(500000); // Note: assuming salary is in integer format

    cout << "Name: " << mekail.getName() << endl;
    cout << "Id: " << mekail.getId() << endl;
    cout << "Salary: " << mekail.getSalary() << endl;

    cout << "Name: " << ayan.getName() << endl;
    cout << "Id: " << ayan.getId() << endl;
    cout << "Salary: " << ayan.getSalary() << endl;

    return 0;
}



















// create a class of human and make 2 properties one instance and one class then make 5 objects of human class with array , take input in loop and then output human every thing

// #include <iostream>
// #include <string>
// using namespace std;

// class human{ 
//     private:
//     string name;
//     string university;

//     public:
//     string getName(){
//         return name;
//     }


//     string setName(){
//         return name;
//     }
// };
