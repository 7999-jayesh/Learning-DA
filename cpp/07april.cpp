//// Relational Operators :-

//
//#include<iostream>
//using namespace std;
//int main()
//{
// int x=10,y=10,z;
// z= x==y; // { == same value , as it is }
// cout<<z<<endl;
//
// z= x!=y; // { != not equal to }
// cout<<z<<endl;
//
// z= x<=y; // { less than equal to }
// cout<<z<<endl;
//
// z= x>=y; // { Greater than equal to }
// cout<<z<<endl;
//
// z= x<y; // { less than }
// cout<<z<<endl;
//
// z= x>y; // { greater than }
// cout<<z<<endl;
//
//
//
// return 0;
//}



// Conditional Operator :-

// if - else condition :-

//#include<iostream>
//using namespace std;
//int main()
//{
//    int age;
//    cout<<"Enter the proper age :- "<<endl;
//    cin>>age;
//    if(age>=18)
//    {
//        cout<<"You are eligible for voting"<<endl;
//
//    }
//    else
//    {
//
//        cout<<"You are not eligible for vote"<<endl;
//    }
//    return 0;
//}



// else if condition :-


#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age :- "<<endl;
    cin>>age;
    if(age<=0)
    {
        cout<<"Provide a valid age"<<endl;
    }
    else if(age<=12)
    {
        cout<<"child Age"<<endl;
    }
    else if(age<=19)
    {
        cout<<"Teen Age"<<endl;
    }
    else if(age<=59)
    {
        cout<<"Young Age"<<endl;
    }
    else if(age>=60)
    {
        cout<<"Old Age"<<endl;
    }
    else
    {
        cout<<"Plese enter a valid age . Thankyou"<<endl;
    }
    return 0;
}
