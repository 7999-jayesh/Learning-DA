// For finding ascii values :-

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    char k = 125;
//    cout<<k<<endl;
//
//
//    return 0;
//}

// if we use \n then we dont need to use endl it automatically send to the next line.
// if we use \t then it create one tab space means 4bit space like { that j     a }.

// Airthmatic operators :-
// by pre-input :-

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    float x=24,y=5,z;
//    z= x+y;
//    cout<<"Addition of x and y :- "<<z<<endl;
//    z= x-y;
//    cout<<"Subtraction of x and y :- "<<z<<endl;
//    z=x*y;
//    cout<<"Multipilcation of x and y :- "<<z<<endl;
//    z=x/y;
//    cout<<"Division of x and y :- "<<z<<endl;
//    z=x%y;
//    cout<<"Modulus of x and y :- "<<z<<endl;
//
//    return 0;
//}


// by user input (input from user ):-

//#include<iostream>
//using namespace std;
//int main()
//{
//    int x,y,z;
//
//    cout<<"Enter the value of x :- "<<endl;
//    cin>>x;
//    cout<<"Enter the value of y :- "<<endl;
//    cin>>y;
//
//    z = x+y;
//    cout<<"Addition of x and y is :- "<<z<<endl;
//    z = x-y;
//    cout<<"Subtraction of x and y is :- "<<z<<endl;
//    z = x*y;
//    cout<<"Multiplication of x and y is :- "<<z<<endl;
//     float z1;
//    z1=(float)x/y;
//    cout<<"Division of x and y is :- "<<z1<<endl;
//    z1=x%y;
//    cout<<"Modulus of x and y is :- "<<z1<<endl;
//    return 0;
//}

// AREA OF SHAPES :-
#include<iostream>
using namespace std;
int main()
{
    float radius,result,length,breadth,hight;
    cout<<"Enter the value of radius :- "<<endl;
    cin>>radius;
    result= 3.14*radius*radius;
    cout<<"Area of circle is :- "<<result<<endl;



    return 0;
}

