#include <iostream>
using namespace std;

class Input
{
public:
    string day;
    Input();
    inline void take_input(string);
    ~Input();
}

class Output
{
public:

    void sunday();
    void monday();
    void tuesday();
    void wednesday();
    void thursday();
    void friday();
    void saturday();
}

Input::Input(void) //Constructors
{
    cout <<"Welcome to Class Routine."<<endl;
}

void Input::take_input(string d)
{
    day = d;
}

Input::~Input(void) //Destructor
{
    cout <<"Created and Developed by Asif Bin Kabir."<<endl;
}


void Output::sunday(void)
{
    cout << "MATH" <<endl<<"ENGLISH"<<endl<<"CSE1221"<<endl;
}

void Output::monday(void)
{
    cout >>
}

void Output::tuesday(void)
{
    cout >>
}

void Output::wednesday(void)
{
    cout >>
}

void Output::thursday(void)
{
    cout >>
}

void Output::friday(void)
{
    cout >>
}

void Output::saturday(void)
{
    cout >>
}



int compare_string (input i, string n)
{
    int length_input, length_day;
    length_input = i.day.size();
    length_day = n.size();
    int j;

    for(j=0;j<length_day;j++)
    {
        if(i.day[j] != n[j]) return 0;
    }
    return 1;
}


int main()
{
    Input ob1;
    Output ob2;
    string day;

    cout << "Enter day :";
    cin >> day;

    ob1.take_input(day);

    if(compare_string(day,"sunday")==1){
        ob2.sunday();
    }

    else if(compare_string(day,"monday")==1){
        ob2.monday();
    }

    else if(compare_string(day,"tuesday")==1){
        ob2.tuesday();
    }

    else if(compare_string(day,"wednesday")==1){
        ob2.wednesday();
    }

    else if(compare_string(day,"thursday")==1){
        ob2.thursday();
    }

    else if(compare_string(day,"friday")==1){
        ob2.friday();
    }

    else if(compare_string(day,"saturday")==1){
        ob2.saturday();
    }
    return 0;
}
