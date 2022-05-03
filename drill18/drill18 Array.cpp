#include "std_lib_facilities.h"
//       <<<<<<<<<<< question 1
int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void print_ar(const int ai[], int n) {
    for (int i = 0; i<n; ++i) cout << ai[i] << " ";
}

void f(int arr[], int arg) {//   <<<<<<<<<<< question 2
    int la[10];             //   <<<<<<<<<<< question 3
    for (int i = 0; i<10; ++i) la[i] = ga[i];
    print_ar(la,10);
    cout << "\n";
    int* p = new int[arg];
    for (int i = 0; i<arg; ++i) p[i] = arr[i];
    print_ar(p,arg);
    cout << "\n";
    delete[] p;
}

int main()
try {
    f(ga,10);//   <<<<<<<<<<< question 4
    int aa[10] = { 1 };
    for (int i = 1; i<10; ++i) aa[i] = aa[i-1]*(i+1);
    f(aa,10);
}
catch (exception& e) {
    cerr << "exception: " << e.what() << endl;
}
catch (...) {
    cerr << "exception\n";
}