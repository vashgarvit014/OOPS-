
#include <iostream>
using namespace std;

class base; 
class anotherClass {
public:
    void memberFunction(base& obj);
};
class base {
private:
    int private_variable;

protected:
    int protected_variable;

public:
    base()
    {
        private_variable = 10;
        protected_variable = 99;
    }

    friend void anotherClass::memberFunction(base&);
};


void anotherClass::memberFunction(base& obj)
{
    cout << "Private Variable: " << obj.private_variable
         << endl;
    cout << "Protected Variable: " << obj.protected_variable;
}

int main()
{
    base object1;
    anotherClass object2;
    object2.memberFunction(object1);

    return 0;
}