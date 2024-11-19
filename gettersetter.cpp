#include <iostream>
using namespace std;

class Passenger {
private:
    string name;  
    int age;      

public:

    string getName() const {
        return name;
    }


    void setName(const string& newName) {
        name = newName;
    }


    int getAge() const {
        return age;
    }


    void setAge(int newAge) {
        if (newAge >= 0) {  
            age = newAge;
        } else {
            cout << "Invalid age!" << endl;
        }
    }
};

int main() {
    Passenger passenger;


    passenger.setName("John");
    passenger.setAge(30);


    cout << "Passenger Name: " << passenger.getName() << endl;
    cout << "Passenger Age: " << passenger.getAge() << endl;

    return 0;
}
