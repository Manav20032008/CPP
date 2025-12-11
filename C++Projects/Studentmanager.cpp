#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string rollNo[5] = {"25CSB1A05", "25CSB1A20", "25CSB1A21", "25CSB1A27", "25CSB1A35"};
    string name[5] = {"Darshil", "Manav", "Aryan", "Trinadh", "Arpit"};

    bool per = true;
    string permission;

    while (per)
    {
        string input;
        cout << "Enter Roll Number: ";
        cin >> input;

        bool found = false;
        for (int i = 0; i < 5; i++)
        {
            if (input == rollNo[i])
            {
                cout << "Student Name: " << name[i] << endl;
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "Roll Number not found!" << endl;
        }

        cout << "Do You Want To Exit the Program ? (yes/no) ";
        cin >> permission;

        // convert entire permission string to lowercase
        for (char &c : permission)
        {
            c = tolower(c);
        }

        if (permission == "no")
        {
            per = true;
        }
        else if (permission == "yes")
        {
            per = false;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}