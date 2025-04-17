//// For loop :-
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cout<<"Enter the number :- "<<endl;
//    cin>>n;
//    int cnt=0;
//  for(int i=1;i<=n;i+=1)
//    {
//    if(n%i==0){
//        cnt+=1;
//    }
//  }
//  if(cnt==2)
//  {
//      cout<<"The given number is prime number"<<endl;
//  }
//  else{
//    cout<<"The given number is not a prime number"<<endl;
//  }
//
//    return 0;
//}

// find all the prime number two user input taken from user using for loop ?

//#include<iostream>
//using namespace std;
//int main()
//{
//    int n1;
//    cout<<"Enter the number :- "<<endl;
//    cin>>n1;
//    int n2;
//    cout<<"Enter the number :- "<<endl;
//    cin>>n2;
//
//    for(int i=n1;i<=n2;i+=1)
//        {
//            int cnt=0;
//    for(int j=1;j<=i;j+=1)
//    {
//        if(i%j==0)
//            {
//            cnt+=1;
//        }
//    }
//}
//         if(cnt==2)
//  {
//      cout << "Prime numbers  are : "<<i<<endl;
//  }
//  else{
//    cout<<"There is no  no prime number between n1 and n2"<<endl;
//  }
//    return 0;
//}
//
//


// right angle triangle :-
//WITHOUT USER INPUT :
//#include<iostream>
//using namespace std;
//int main()
//{
//
//    for(int i=1;i<=8;i+=1)
//    {
//        for (int j=1;j<=i;j+=1){
//            cout<<" * .";
//        }
//        cout<<endl;
//    }
//
//    return 0;
//}

//WITH USER INPUT :

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of a :- "<<endl;
    cin>>a;

    for(int i=1;i<=a;i+=1)
    {
        for (int j=1;j<=i;j+=1){
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}


// Break and continue are keywords. These are jumping statement.
