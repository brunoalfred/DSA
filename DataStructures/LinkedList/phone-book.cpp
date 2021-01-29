#include <iostream>
#include <fstream>

using namespace std;

class Contact
{
public:
    string first_name;
    string last_name;
    string phone;
    string gender;

    Contact *next;
};

int main()
{

    ifstream list("contact.csv");

    if (!list.is_open())
    {
        cout << "The file is not opened" << endl;
    }

    string first_name;
    string last_name;
    string phone;
    string gender;

    string line;
    while (!list.eof())
    {
        getline(list, line);

        cout << line << endl;
    }
    list.close();
}
