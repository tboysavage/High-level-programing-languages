#include "std_lib_facilities.h"

void swap_v(int a,int b)
{
    int temp = a;            //This will be executable
    a=b;
    b=temp;
}

void swap_r(int& a,int& b)
{
    int temp = a;
    a=b;
    b=temp;
}

void swap_cr(const int& a, const int& b)
{
    int temp = a;   //                constant variables can not be swapped as the variables
    a=b;            //                have permanently assigned values
    b=temp;
}



int main()
{   // Using swap_v
    int x = 7;
    int y =9;
    swap_v(x,y); // This call worked

    swap_v(7,9);//This call will work but there won't be a visible way to view the swapped values

    const int cx = 7;
    const int cy = 9;
    swap_v(cx,cy);//Ths call won't work because of the constant variables

    swap_v(7.7,9.9);//This call will work but there won't be a visible way to view the swapped values

    double dx = 7.7;
    double dy = 9.9;
    swap_v(dx,dy);//This call worked

    swap_v(7.7,9.9);//This call will work but there won't be a visible way to view the swapped values
                          //There are no global variables that can be called in int main()to view the swapped
                          //values
// Using swap_r
    int x = 7;
    int y =9;
    swap_r(x,y); // This call worked

    swap_r(7,9);//This call will not work because there are no variables to point to

    const int cx = 7;
    const int cy = 9;
    swap_r(cx,cy);//Ths call won't work because constant variables can't be swapped

    swap_r(7.7,9.9);//This call will not work because there are no variables to point to

    double dx = 7.7;
    double dy = 9.9;
    swap_r(dx,dy);//This call won't work because of the variables being doubles

    swap_v(7.7,9.9);//This call will not work because there are no variables to point to

//Using function swap_cr() will not work at all due to the use of constant local variables within
//the function
    return 0;

}