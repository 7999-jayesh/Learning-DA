////Sum of first n natural numbers :-
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, sum = 0;
//    cout << "Enter a number: ";
//    cin >> n;
//    for(int i=1; i<=n; i++) {
//        sum +=i;
//    }
//    cout << "Sum of first " << n << " natural numbers: " << sum<<endl;
//    return 0;
//}

//// Check if number has 4 factors or is prime or neither :-
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, count = 0;
//    cout << "Enter a number: ";
//    cin >> n;
//        for(int i = 1; i <= n; i++) {
//        if(n % i == 0) {
//           count++;
//       }
//    }
//    if(count == 2) {
//        cout << "Prime number";
//    }
//    else if(count == 4) {
//        cout << "Has exactly 4 factors";
//}
//    else {
//      cout << "Neither prime nor has 4 factors";
//  }
//    return 0;
//}

//
//// WAP to reverse the given input take from user ?
////
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, rev = 0;
//    cout << "Enter a number: ";
//    cin >> n;
//     while(n != 0) {
//        rev = rev * 10 + n % 10;
//        n /= 10;
//    }
//
//    cout <<"Reversed number:- "<<rev<<endl;;
//    return 0;
//}

//
//// WAP to find a factorial of a number ?
//
//#include <iostream>
//using namespace std;
//int main() {
//    int n, fact = 1;
//    cout << "Enter a number: ";
//      cin >> n;
//      for(int i = 1; i <= n; i++) {
//       fact *= i;
//    }
//    cout << "Factorial: " << fact;
//    return 0;
//}
//
//// WAP to find the sum of factorial of a number  ?
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, sum = 0;
//    cout << "Enter a number: ";
//    cin >> n;
//    while(n != 0) {
//        int digit = n % 10;
//        int fact = 1;
//        for(int i = 1; i <= digit; i++) {
//            fact *= i;
//        }
//        sum += fact;
//        n /= 10;
//    }
//    cout << "Sum of factorials of digits: " << sum;
//    return 0;
//}
//
//// WAp to check number is paldel wrong or not ? // its is simlar to revers no. isme ye hota hai agr mene 101 ko reverse kra to same ye hi aaye 101
//// WAP to find the number is armstrong or not ?
//
//// WAP to print the fibonacci series, {0,1,1,2,3,5,8,13,.....} ?
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, a = 0, b = 1, c;
//    cout << "Enter number of terms: ";
//    cin >> n;
//    cout << "Fibonacci series: ";
//    for(int i = 1; i <= n; i++) {
//        cout << a << " ";
//        c = a + b;
//        a = b;
//        b = c;
//    }
//    return 0;
//}
//
//// WAP to print the mathamatical table ?
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Enter a number: ";
//    cin >> n;
//    for(int i = 1; i <= 10; i++) {
//        cout << n << " x " << i << " = " << n * i << endl;
//    }
//    return 0;
//}
//

#include<iostream>
using namespace std;
int main()
{
    int i=10;
    while(i>0)
    {
        cout<<i<<endl;
        i-=1;
    }
    return 0;
}
