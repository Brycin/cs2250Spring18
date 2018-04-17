/*
 * =====================================================================================
 *
 *       Filename:  firstVector.cpp
 *
 *    Description:  example of vectors
 *
 *        Version:  1.0
 *        Created:  04/17/2018 08:36:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h>  //For C
#include <iostream>   //For C++
#include <vector>     //For vectors
using namespace std;  //For C++

// Constants

// Function Prototypes

// Main Function
int main()
{
    vector <int> g1;
    vector <int> :: iterator j;  //Defines an iterator for vectors. Accesses positions in the for loop

    // Add elements
    for (int i = 1; i < 5; ++i)
    {
        g1.push_back(i*2);  // push_back adds the element to the end of the vector
    }
    cout << "Output of begin and end\n";
    for (j = g1.begin(); j != g1.end(); ++j) // i is equal to the first element in the vector. Only works if i is same type as vector
                                             // ++j doesn't add 1 it increments iterator to go to next element of the list
    {
        cout << *j << '\t'; //*j gives value where iterator is pointing to (dereferencing)
    }
    cout << endl;
    // To add and iterate:
    // push_back(): add element at the end of the vector
    // begin(): Takes the first element of vector
    // end(): takes last element of the vector
    
    // Capacity::
    // size(): returns the size of the vector
    // max_size(): returns the maximum number of elements that the vector can hold
    // capacity(): returns the size of storage in bytes
    // empty(): returns whether the container is empty

    cout << "Size: " << g1.size() << endl;
    cout << "Capacity: " << g1.capacity() << endl;
    cout << "Max_size: " << g1.max_size() << endl;

    // Accessing the elements:
    // Reference operator [g]: Returns a reference to the element at position 'g'
    // at(g): Returns a reference to the element at position 'g'
    // front(): Returns a reference to the first element
    // back(): Returns a reference to the last element

    cout << "Reference Operator [g]: g1[2] = " << g1[2] << endl;
    cout << "at : g1.at(1) = " << g1.at(1) << endl;
    cout << "front() : g1.front() = " << g1.front() << endl;
    cout << "back() : g1.back() = " << g1.back() << endl;



    return 0;
}
// Function Definitions


