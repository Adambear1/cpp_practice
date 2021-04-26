#include <iostream>

using namespace std;

int main()
{
    string phrase = "practice placeholder text";
    cout << "Break this line." << endl;
    cout << "Break that line. \n";
    cout << "The string is " << phrase << " and is " << phrase.length() << " characters long.";
    phrase[0] = 'P';
    cout << "Updated string is " << phrase << "now capitalized." << endl;
    cout << phrase.find("Practice") << endl; // Get 0 because word is at index 0;
    cout << phrase.find("text", 0) << endl; // Second parameter to show;
    cout << phrase.substr(0,9) << endl; // Both parameters specify the starting index and the length wishing to specify;
    
    return 0;
}