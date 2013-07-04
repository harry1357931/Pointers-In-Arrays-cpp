/**
 * PointersInArrays.cpp
 * Purpose: Understanding pointers in arrays
 * @author GurpreetSingh
 */
#include <iostream>
#include <cstdlib>
using namespace std;
int main( )
{
 int b[3][2]={1,2,3,4,5,6},k=5;
cout<<"Value of b : "<<b<<endl;
cout<<sizeof(b)<<endl; /*Size of b is 24 bytes....since each integer takes 4 bytes in memory
                          so....b[3][2]....stores 3*2=6 integer values....so  6 times 4 = 24 bytes
                          here compiler treats 'b' as a array object   */

cout<<sizeof(b+0)<<endl; /* here compiler will not treat the expression (b+0) as an array object....because Zero is added to b.
 Since Zero is added to b...So here...compiler will recognize the expression as a pointer expression ..so the ...since b stores
 the memory address of first element----so the answer will be 4. */

cout<<sizeof(*(b+0))<<endl; /*this is the combined size of first row or Zeroth one dimensional array...
  b[0][0] and b[0][1] ......since 2D array is the array of arrays.....*(b+0)..refers to the first array in array of arrays.
  Since we have two elements in 1st 1D array of 2D array...so the size is 8...and so is the answer   */


// the next line prints 0012FF68
cout<<"The address of b is: "<<b<<endl;    /* This is the address where array "b"  starts...*/

cout<<"The address of b+1 is: "<<b+1<<endl; /* This is the address of 2nd row ..if we consider 2D array as a Matrix...
or of we say....2D array is array of Arrays...here b+1 refers to 2nd array in array of arrays...and prints out the
address of begining of 2nd array in two dimensional array*/ 

cout<<"The address of &b is: "<<&b<<endl;    /* here "b" ..due to ampersand sign..is considered as a variable..
so it wiil print the address where b is stored....or where b begins...which is b[0][0]  */

cout<<"The address of &b+1 is: "<<&b+1<<endl;  /*Here b is considered as a variable.....since b is an array of 24 bytes
     so &b+1 gives the location of memory address one address ahead where array b ends  */

system("pause");
return 0;
}

