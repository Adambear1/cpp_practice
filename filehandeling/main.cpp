#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("practice.txt", ios::out); //write
    if (file.is_open())
    {
        file << "Write this to the first line of the file. \n";
        file << "\n";
        file << "Third line.\n";
        file.close();
    }
    file.open("practice.txt", ios::app); // append
    if (!file.fail() && file.is_open())
    {
        file << "Appended line \n";
        file.close();
    };
    file.open("practice.txt", ios::in); // read
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        //Function to read first parameter + stores as variable in second parameter.
        // Requires string library, paired with while loop, ends when all lines have been read.
        {
            cout << line << "\n";
        };
        file.close();
    }
    return 0;
}