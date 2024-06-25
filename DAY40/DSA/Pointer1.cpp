#include<iostream>
using namespace std;

int main(){

/*
    int arr[10] = {23,122,41,67};
    cout << "Address of First Memory Block is :- " << arr << endl;
    cout << "Address of First Memory Block is :- " << &arr[0] << endl;
    cout << "*arr is :- " << *arr << endl;
    cout << "*arr+1 is :- " << *arr + 1 << endl;
    cout << "*(arr+1) is :- " << *(arr + 1) << endl;
    cout << "arr[2] is :- " << arr[2] << endl;
    cout << "*(arr+2) is :- " << *(arr + 2) << endl;

    int i = 3;
    cout << i[arr] << endl;

*/

/*
   int temp[10];
   cout << sizeof(temp) << endl;
   cout << "First " << sizeof(*temp) << endl;
   cout << "Second " << sizeof(&temp) << endl;

   int *ptr = &temp[0];
   cout << sizeof(ptr) << endl;
   cout << sizeof(*ptr) << endl;
   cout << sizeof(&ptr) << endl;

*/
/*
  int a[20] = {1,2,3,4,5};
  cout << "--->> "  << &a[0] << endl;

  int *p = &a[0];
  cout << "--->> " << &p << endl;

*/

  int arr[10];
  //   arr = arr + 1;     //   Error aa jayega

  int *ptr = &arr[0];
  cout << ptr << endl;
  ptr = ptr + 1;
  cout << ptr << endl;





    return 0;
}