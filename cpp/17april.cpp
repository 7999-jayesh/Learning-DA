// For print right angle triangle :-
//
//#include<iostream>
//using namespace std;
//int main()
//{
//
//    for(int i=1;i<=5;i++) // row = i ; coloum = j
//    {
//        for(int j=1;j<=5;j++)
//        {
//            if(j<=i){
//                cout<<" * ";
//            }
//            else{
//                cout<<" " ;
//            }
//        }
//        cout<<endl;
//    }
//    return 0;
//}

// For triangle :-

//#include<iostream>
//using namespace std;
//int main()
//{
//    for(int i=1;i<=4;i++)
//    {
//        for(int j=1;j<=7;j++)
//        {
//            if(j>=(5-i) and j<=(3+i))
//            {
//                cout<<"*";
//            }
//            else{
//                cout<<" ";
//            }
//        }
//        cout<<endl;
//    }
//
//
//    return 0;
//}
//
//

// For ulta triangle :-

//
//#include<iostream>
//using namespace std;
//int main()
//{
//
//    for(int i=1;i<=5;i++) // row = i ; coloum = j
//    {
//        for(int j=1;j<=5;j++)
//        {
//            if(j>=i){
//                cout<<" * ";
//            }
//            else{
//                cout<<" " ;
//            }
//        }
//        cout<<endl;
//    }
//    return 0;
//}


#include<iostream>
using namespace std;
int main()
{

    for(int i=1;i<=5;i++) // row = i ; coloum = j
    {
        for(int j=1;j<=5;j++)
        {
            if((i==j and j==5) or (i==1 and j>=1) or(i==5 and j>=1)){
                cout<<" * ";
            }


            else{
                cout<<" " ;
            }
        }
        cout<<endl;
    }
    return 0;
}
