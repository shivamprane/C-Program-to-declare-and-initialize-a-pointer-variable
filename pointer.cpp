#include<iostream>

using namespace std;
int main()
{

int var1 = 33;
int *ptr;
ptr = &var1;

char charvar1 = 'A';
char *charptr;
charptr = &charvar1;

cout << "Memory address of var1: " << &var1 << endl;
cout << "Memory address of ptr: " << &ptr << endl;
cout << "Value of *ptr: " << *ptr << endl;
cout << "Memory address of ptr before incrementing: " << ptr << endl;

ptr++;

cout << "Memory address of ptr after incrementing: " << ptr << endl;

return 0;
}
