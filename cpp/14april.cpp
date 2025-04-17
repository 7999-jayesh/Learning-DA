//#include<iostream>
//using namespace std;
//int main()
//{
//    int n, sum=0,i=1;
//    cout<<"Enter the number :- "<<endl;
//    cin>>n;
//    while(i<n)
//    {
//        if(n%i==0)
//        {
//           sum=sum+i;
//        }
//
//            i+=1;
//    }
//
//
//    if(sum==n)
//        {
//            cout<<"perfect"<<endl;
//    }
//    else
//        {
//    cout<<"not perfect"<<endl;
//    }
//    return 0;
//    }
//

// Make a program taking two input from user n1 and n2 and when the user input the n2 find out all the palanfdrog number after n1 and number of n2 ?
// Ask in delloite for 8.4lpa package


#include<iostream>
using namespace std;
int main()
{
    int n1, n2,n3,i=0;
    cout<<"Enter the value of n1 :- "<<endl;
    cin>>n1;
    cout<<"Enter the value of n2 :- "<<endl;
    cin>>n2;
    n3=n1+1;
    while(i<=n2){
        int temp=n3,rev=0;
        while(temp>0){
            int r=temp%10;
            rev=rev*10+r;
            temp=temp/10;
        }
    if(rev==n3)
    {
        cout<<"Here the palendrong numbers are :-"<<rev<<endl;
        i+=1;
    }
    n3+=1;
    }

    return 0;
}
