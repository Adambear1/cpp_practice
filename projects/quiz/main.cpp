#include<iostream>
#include<random>
#include<ctime>
using namespace std;

int question_number = 1;
int correct = 0;
int wrong = 0;
bool ask[10] = {true, true, true, true, true, true, true, true, true, true};
void display_random_question();
void display();
void question(string question, string a, string b, string c, string d, char correct_answer);
void result();

int main()
{
    display();
    return 0;
}

void display()
{
    system("cls");
    cout << "Question Number: " << question_number << "\t\tCorrect Answer: " << correct << "\t\tWrong Answer:" << wrong << "\n\n";
    display_random_question();
}

void display_random_question()
{
    srand(time(0));
    bool is_question_remaining = false;
    for(int i=0; i < 10; i++)
    {
        if(ask[i])
        {
            is_question_remaining = true;
            break;
        }
    }
    while(is_question_remaining)
    {
        int number = rand()%10;
        if(ask[number])
        {
            ask[number] = false;
            switch(number)
            {
                case 0 :
                    question("What language uses Flask as front end platform?:      ", "JavaScript", "Python", "C++", "Node", 'b');
                    break;
                case 1 :
                    question("What language uses React as front end platform?:      ", "JavaScript", "Python", "C++", "Node", 'a');
                    break;
                case 2 :
                    question("What language is considered a front end language?:      ", "JavaScript", "Python", "C++", "Node", 'a');
                    break;
                case 3 :
                    question("What language is considered a front end language?:      ", "JavaScript", "Python", "C++", "Node", 'a');
                    break;
                case 4 :
                    question("What language is considered a front end language?:      ", "JavaScript", "Python", "C++", "Node", 'a');
                    break;
                case 5 :
                    question("What language is considered a front end language?:      ", "JavaScript", "Python", "C++", "Node", 'a');
                    break;
                case 6 :
                    question("What language is considered a front end language?:      ", "JavaScript", "Python", "C++", "Node", 'a');
                    break;
                case 7 :
                    question("What language is considered a front end language?:      ", "JavaScript", "Python", "C++", "Node", 'a');
                    break;
                case 8 :
                    question("What language is considered a front end language?:      ", "JavaScript", "Python", "C++", "Node", 'a');
                    break;
                case 9 :
                    question("What language is considered a front end language?:      ", "JavaScript", "Python", "C++", "Node", 'a');
                    break;
                case 10 :
                    question("What language is considered a front end language?:      ", "JavaScript", "Python", "C++", "Node", 'a');
                    break;
            }
        }
    }
    result();
}

void result()
{
    system("cls");
    cout << "Total Question = " << question_number - 1 << "\n";
    cout << "Correct Answers = " << correct << "\n";
    cout << "Wrong Answers = " << wrong << "\n";
    if (correct > wrong)
    {
        cout << "Result = PASS" << "\n";
    }
    else if (wrong > correct)
    {
        cout << "Result = FAIL" << "\n";
    }
    else {
        cout << "Result = TIE" << " \n";
    }
}

void question(string question, string a, string b, string c, string d, char correct_answer)
{
    cout << question << "\n";
    cout << "A.\t" << a << "\n";
    cout << "B.\t" << b << "\n";
    cout << "C.\t" << c << "\n";
    cout << "D.\t" << d << "\n";
    char answer;
    cin >> answer;
    if(answer == correct_answer)
    {
        correct ++;
    }
    else
    {
        wrong ++;
    }
    question_number ++;
    display();
}