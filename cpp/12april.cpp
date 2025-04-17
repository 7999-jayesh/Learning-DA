// NESTED WHILE LOOP:-
//When we declear a loop inside a loop is known as nested while loop.
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    int i=1,j=1;
//    while(i<=5)
//    {
//        cout<<"outer while loop"<<i<<endl;
//        j=1;
//        while(j<=5)
//        {
//            cout<<"Inner while loop"<<j<<endl;
//            j+=1;
//        }
//         i+=1;
//    }
//    return 0;
//}

//WAP to print 5 5time,4 5 time , 3 5 time , 2 2 time ,1 1 times ?
#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter the value of i:-";
    cin>>i;
    while(i<=5)
    {
        int j=1;
        while(j<=i)
        {

            cout<<"*";
            j-=1;

        }
        cout<<endl;
        i+=1;
    }

    return 0;

}

// DO-while LOOP :-  loop will excuate at least one time and after that it check condition.
