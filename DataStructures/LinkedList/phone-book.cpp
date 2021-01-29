#include <iostream>
#include <fstream>
#include<vector>

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

    string first_name, last_name,phone,gender;

    while (!list.eof())
    {

        string line;
        getline(list, line);

      
        string mistari = line;
        
        

        cout << mistari << endl;
        
    }

    list.close();
}
