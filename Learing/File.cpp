#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //    Writing:
    ofstream out("data.txt");

    //    Reading:
    ifstream in("data.txt");

    //    Both modes:
    fstream file("data.txt", ios::in | ios::out);

    //    ALWAYS check if file opened correctly:

    if (!out.is_open())
    {
        cout << "File opening failed";
    }

    //    Writing to a File
    ofstream out("data.txt");
    out << "Hello Manav!";
    out << "\nThis is C++ File I/O.";
    out.close();

    //    A) Reading word-by-word
    string word;
    while (in >> word)
    {
        cout << word << endl;
    }

    //    B) Reading line-by-line
    string line;
    while (getline(in, line))
    {
        cout << line << endl;
    }

    //    C) Reading character-by-character
    char ch;
    while (in.get(ch))
    {
        cout << ch;
    }

    //    Default (write mode):
    ofstream out("a.txt"); // overwrites the old file

    //    Append mode:
    ofstream out("a.txt", ios::app); // → Adds data at the end of file.

    //    Binary mode:
    ofstream out("a.dat", ios::binary);

    //    Multiple modes:
    fstream file("data.txt", ios::in | ios::out | ios::app);

    /*  good() → everything is fine

        fail() → something went wrong

        eof() → reached end of file */

    if (file.eof())
        cout << "Reached end of file";

    file.close();

    //  If file doesn’t exist:

    ifstream in("abc.txt");
    if (!in)
    {
        cout << "File not found!";
    }

    //  If something breaks while reading:

    if (in.fail())
    {
        cout << "Input failed";
    }

    // Finding current position

    long pos = file.tellg();  // reading position
    long pos2 = file.tellp(); // writing position

    // Writing Pointer
    file.seekp(position);

    // Reading Pointer
    file.seekg(position);

    // Writing a struct to binary file
    struct Student
    {
        char name[20];
        int roll;
        float marks;
    };

    Student s = {"Aman", 10, 88.5};

    ofstream out("stud.dat", ios::binary);
    out.write((char *)&s, sizeof(s));
    out.close();

    //  Reading a struct
    Student s2;
    ifstream in("stud.dat", ios::binary);
    in.read((char *)&s2, sizeof(s2));
    in.close();

    //     Updating a Record Inside a File

    // Steps:

    // Find record’s position

    // Seek to that position via seekp

    // Overwrite with new data

    int index = 4; // 5th record

    file.seekp(index * sizeof(Student));
    file.write((char *)&updatedStudent, sizeof(updatedStudent));

    file.clear();     // clear all flags
}