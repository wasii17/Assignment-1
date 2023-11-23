////Task 1
////#include<iostream>
////using namespace std;
////int main()
////{
////    int i,num;
////    cout<<"Enter a number: ";
////    cin>>num;
////    cout<<"The factors of "<<num<<" are: ";
////    for(i=1;i<=num;i++)
////    {
////        if(num%i==0)
////        {
////        cout<<i<<"  ";
////        }
////    }
////    return 0;
////}
//
////Task 3
//#include<iostream>
//using namespace std;
//int main()
//{
//    bool result;
//    int num;
//    cout<<"Enter an Integer: ";
//    cin>>num;
//    result=(num>10 && num<=20);
//    if(result)
//    {
//        cout<<"1";
//    }
//    else
//    {
//    cout<<"0";
//    }
//    return 0;
//}
//
//
//Task 4
//#include<iostream>
//using namespace std;
//int main()
//{
//    int N,i,a;
//    cout<<"Enter a number: ";
//    cin>>N;
//    a=N-1;
//    while(a>1)
//    {
//        i=2;
//        while(i<a)
//        {
//            if(a%i==0)
//            {
//            break;
//            }
//            ++i;
//        }
//        if(i==a)
//        {
//            cout<<"Greatest Prime number before "<<N<<" is "<<a<<endl;
//            return 0;
//        }
//        --a;
//    }
//    cout<<"No Prime numbers found :(";
//    return 0;
//}
//
//
//Task 5
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main() {
//    string str1, str2;
//    cout << "Enter the first string: ";
//    cin >> str1;
//    cout << "Enter the second string: ";
//    cin >> str2;
//
//    if (str1 == str2) {
//        for (size_t i = 0, j = str1.length() - 1; i < j; ++i, --j) {
//            swap(str1[i], str1[j]);
//        }
//
//        cout << "After reversing the first string, the strings are now unequal:" << endl;
//        cout << "String 1: " << str1 << endl;
//        cout << "String 2: " << str2 << endl;
//    } else {
//        cout << "The strings are already unequal." << endl;
//    }
//
//    return 0;
//}
//
//
//
//Task 6
//#include<iostream>
//using namespace std;
//int main()
//{
//    int dividend,divisor,quotient=0,remainder,a,b;
//    cout<<"Enter Dividend: ";
//    cin>>dividend;
//    cout<<"Enter Divisor: ";
//    cin>>divisor;
//    a=dividend;
//    b=divisor;
//    remainder=a%b;
//    cout<<dividend<<"/"<<divisor<<" = ";
//    for(int i=0;dividend>=divisor;i++)
//    {
//        dividend-=divisor;
//        quotient++;
//    }
//    cout<<quotient<<endl;
//    cout<<"Remainder= "<<remainder;
//    return 0;
//}
//
//
//
//Task 7
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string a;
//    int l;
//
//    cout << "Input the string text: ";
//    getline(cin, a);
//    
//    l = a.length();
//
//    for (int i = 0; i < l; i++) {
//        for (int j = i + 1; j < l;) {
//            if (tolower(a[i]) == tolower(a[j])) {
//                a.erase(j, 1);
//                l = a.length();
//            } else {
//                j++;
//            }
//        }
//    }
//
//    cout << a;
//
//    return 0;
//}
//
//
//
//Task 8
//#include <iostream>
//using namespace std;
//
//int main() {
//    const int maxSize = 50;
//    int arr[maxSize] = {1, 2, 3, 4, 5};
//
//    cout << "Enter digits into the array. Enter 0 to stop input and display the array.\n";
//
//    int input;
//    int currentIndex = 5;
//
//    do {
//        cin >> input;
//
//        if (input != 0) {
//            arr[currentIndex++] = input;
//            if (currentIndex >= maxSize) {
//                cout << "Array is full. Exiting input loop.\n";
//                break;
//            }
//        }
//    } while (input != 0);
//
//    cout << "The current values stored in the array are:\n";
//    
//    for (int i = 0; i < maxSize && arr[i] != 0; i++) {
//        cout << arr[i] << endl;
//    }
//
//    return 0;
//}
//
//
//
//Task 9
//#include <iostream>
//using namespace std;
//
//int main() {
//    int length;
//
//    cout << "Enter the length of the input array: ";
//    cin >> length;
//
//    int a[length];
//
//    cout << "Enter the values in the array: ";
//    for (int i = 0; i < length; i++) {
//        cin >> a[i];
//    }
//
//    int num;
//
//    cout << "Enter a number: ";
//    cin >> num;
//
//    int j, k, l;
//    bool value = false;
//
//    for (j = 0; j < length; j++) {
//        for (k = j + 1; k < length; k++) {
//            for (l = k + 1; l < length; l++) {
//                if (a[j] + a[k] + a[l] == num) {
//                    value = true;
//                    goto endLoop;
//                }
//            }
//        }
//        if (value) {
//            break;
//        }
//    }
//
//endLoop:
//    if (value) {
//        cout << num << " is the sum of " << a[j] << " (Array." << j + 1 << ") , "
//             << a[k] << " (Array." << k + 1 << ") & "
//             << a[l] << " (Array." << l + 1 << ")";
//    } else {
//        cout << "No such combination found.";
//    }
//
//    return 0;
//}
//
//
//
//
//Task 10
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a[6];
//
//    cout << "Enter 6 integers into the array: \n";
//    for (int i = 0; i <= 5; i++) {
//        cin >> a[i];
//    }
//
//    for (int j = 0; j <= 5; j++) {
//        for (int k = 0; k <= 5; k++) {
//            if (a[k] > a[k + 1]) {
//                swap(a[k], a[k + 1]);
//            }
//        }
//    }
//
//    cout << "The sorted values are: \n";
//    for (int l = 0; l <= 5; l++) {
//        cout << a[l] << "\n";
//    }
//
//    return 0;
//}
//
//
