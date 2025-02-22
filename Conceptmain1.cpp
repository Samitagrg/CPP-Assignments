#include <iostream>

#include "Concept1.h"

using std::string;
using std::cout;
using std::endl;

int main()

{
    Employee claudia {1, "Claudia", 10000.45f};
    Employee petter {2, "Petter", 5555.5f};

    Employee sarah;

    cout << "-----Claudia's account-----" << endl;
    cout << claudia.get_id() << endl;
    cout << claudia.get_name() << endl;
    cout << claudia.get_salary() << endl;

    cout << "-----Petter's account-----" << endl;
    cout << petter.get_id() << endl;
    cout << petter.get_name() << endl;
    cout << petter.get_salary() << endl;

    cout << "-----Sarah's account-----" << endl;
    cout << sarah.get_id() << endl;
    cout << sarah.get_name() << endl;
    cout << sarah.get_salary() << endl;

    return 0;
}