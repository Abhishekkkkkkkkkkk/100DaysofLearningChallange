#include<iostream>
using namespace std;

// What will be the output?


int main() {

    // Q 1 :- 
    // float f = 10.5;
    // float p = 2.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout  << "Answer of Q 1 is :- "<< endl;
    // cout << *ptr << " " << f << " " << p;


    // Q 2 :- 
    // int a = 7;
    // int b = 17;
    // int *c = &b;
    // *c = 7;
    // cout  << "Answer of Q 2 is :- "<< endl;
    // cout  << a << "  " << b << endl;

    // Q 3 :- 
    // int *ptr = 0;
    // int a = 10;
    // *ptr = a;
    // cout  << "Answer of Q 3 is :- "<< endl;
    // cout << *ptr << endl;        //---- ERROR

    // // Q 4 :-
    // char ch = 'a';
    // char* ptr = &ch;
    // ch++;
    // cout  << "Answer of Q 4 is :- "<< endl;
    // cout << *ptr << endl;

    // Q 5 :-
    // int a = 7;
    // int *c = &a;
    // c = c + 1;
    // cout  << "Answer of Q 5 is :- "<< endl;
    // cout  << a << "  " << *c << endl;

    // Q 6 :-
    // int a[] = {1, 2, 3, 4};
    // cout  << "Answer of Q 6 is :- "<< endl;
    // cout << *(a) << " " << *(a+1) <<endl;
    
    // Q 7 :-
    // int a[] = {1, 2, 3, 4};
    // // int *p = a++;    --ERROR
    // cout  << "Answer of Q 7 is :- "<< endl;
    // cout << *p << endl;

    // Q 8 :-
    // int arr[] = {4, 5, 6, 7};
    // int *p = (arr + 1);
    // cout  << "Answer of Q 8 is :- "<< endl;
    // cout << *arr + 9;

    // Q 9 :-
    // char b[] = "xyz";
    // char *c = &b[0];
    // cout  << "Answer of Q 9 is :- "<< endl;
    // cout << c << endl;

    // Q 10 :-
    // char arr[20];
    // int i;
    // for(i = 0; i < 10; i++) {
    //     *(arr + i) = 65 + i;
    // }
    // *(arr + i) = '\0';
    // cout  << "Answer of Q 10 is :- "<< endl;
    // cout << arr << endl;

    // *(arr + i) is equivalent to arr[i]. Since arr is an character array, so 65 + i will be typecasted to corresponding character for each i from 0 to 9. Since at last , we are appending the NULL character, so arr will become string and thus we get the output as "ABCDEFGHIJ".

    // // Q 11 :-
    // int first = 8;
    // int second = 18;
    // int *ptr = &second;
    // *ptr = 9;
    // cout  << "Answer of Q 11 is :- "<< endl;
    // cout  << first << " "<< second << endl;

    // // Q 12 :-
    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout  << "Answer of Q 12 is :- "<< endl;
    // cout  << first << endl;

    // // Q 13 :-
    // int first = 8;
    // int *p = &first;
    // cout  << "Answer of Q 13 is :- "<< endl;
    // cout << (*p)++ << " ";
    // cout << first << endl;

    // // Q 14 :-
    // int *p = 0;
    // int first = 110;
    // *p = first;
    // cout  << "Answer of Q 14 is :- "<< endl;
    // cout << *p << endl;    //--- Segementation Fault 

    // Q 15 :-
    int first = 8;
    int second = 11;
    int *third = &second; 
    first = *third;
    *third = *third + 2;
    cout  << "Answer of Q 15 is :- "<< endl;
    cout  << first << "  " << second << endl;

    return 0;
}