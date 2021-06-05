#include <iostream>
#include <string>
using namespace std;

class Printer
{
private:
    string _name;
    int _availablePaper;

public:
    Printer(string name, int paper)
    {
        _name = name;
        _availablePaper = paper;
    }
    void Print(string txtDoc)
    {
        int req_paper = txtDoc.length() / 10;
        if (req_paper > _availablePaper)
        {
            throw "Not enough paper.";
        }

            cout << "Printing.... \n"
                 << endl;
            cout << txtDoc << endl;
            _availablePaper -= req_paper;
    }
};

int main()
{
    Printer myPrinter("Laptop One", 100);
    try{
    myPrinter.Print("Hello, my name is Adam");
    } catch (const char * txtException){
        cout << "Exception:  " << txtException << endl;
    } catch ( int exceptionCode)
    {
        cout << "Exception:  " << exceptionCode << endl;
    }

    return 0;
}