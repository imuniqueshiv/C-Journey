// This is my first c++ program

// #include <iostream>
// using namespace std;


// #1
// int main() {
//     cout << "Hello World" << endl;
//     return 0;
// }


// #2
// int main() {
//     int age;
//     cout << "Enter your age: ";
//     cin  >> age;
//     if (age >= 18) {
//         cout << "You are Adult";
//     }
//     else {
//         cout << "You are Under-Age for driving";
//     }
// }

// #3 Ex Odd Even
// int main() {
//     int num;
//     cout << "Enter Number: ";
//     cin >> num;

//     if (num % 2 == 0) {
//         cout << "Number is Even.";
//     }
//     else{
//         cout << "Number is Odd";
//     }
// }

// #4 Ex Leap-Year
// int main() {
//     int year;
//     cout << "Enter Year:";
//     cin >> year;

//     if (year % 4 == 0 && year % 100 != 0) {
//         cout << "This is year is a Leap-year";
//     }
//     else {
//         if (year % 400 == 0 && year % 100 == 0 && year % 4 == 0){
//             cout << "This is a Leap-year";
//         }
//         else{
//             if (year % 4 == 0 && year % 100 == 0) {
//                 cout << "This is not a Leap-year";
//             }
//             else {
//                cout << "This is not a Leap-year";
//             }  
//         }
//     }
// }

// #5 Ex Maximum of Two Numbers
// int main(){
//     int num1, num2;
//     cout << "Enter First Number: ";
//     cin >> num1 ;
//     cout << "Enter Second Number: ";
//     cin >> num2;

//     if (num1 > num2){
//          cout << "First is Maximum number ";
//     }
//     else {
//          cout << "Second is Maximum number ";
//     }
// }

// #6 Ex Maximum of Three Numbers
// int main(){
//     int num1, num2, num3;
//     cout << "Enter First Number: ";
//     cin >> num1 ;
//     cout << "Enter Second Number: ";
//     cin >> num2;
//     cout << "Enter Third Number: ";
//     cin >> num3;

//     if (num1 > num2 && num1 > num3){
//          cout << "First is Maximum number ";
//     }
//     else if (num1 < num2 && num2 > num3) {
//          cout << "Second is Maximum number ";
//     }
//     else {
//           cout << "Third is Maximum number ";
//     }
// }


// #7 Ex Positive, Negative, or Zero
// int main() {
//     int num;
//     cout << "Enter Number: ";
//     cin >> num ;

//     if (num < 0) {
//         cout << "Negative";
//     }
//     else if (num > 0) {
//         cout << "Positve";
//     }
//     else {
//         cout << "Zero";
//     }
// }

// #8 Learning Switch cases
// #include <iostream>
// using namespace std;

// int main() {
//     int value = 3;

//     switch (value) {
//         case 1:
//             cout << "One" << endl;
//             break;
//         case 2:
//             cout << "Two" << endl;
//             break;
//         case 3:
//         cout << "Three" << endl;
//         break;
//         default:
//             cout << "Default case" << endl;
//     }

//     return 0;
// }