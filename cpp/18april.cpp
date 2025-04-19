// String :- it is a dervied data type.
//in string we always need to use getline in cin

#include<iostream>
using namespace std;
int main()
{
    string x="Jatindra";
    cout<<x;
    string y;
    getline(cin,y); // user input.
    cout<<y;
    cout<<sizeof x; // for size of string

    return 0;
}
