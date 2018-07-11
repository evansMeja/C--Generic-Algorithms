/*
 * Language  : C++
 * Topic     : Mutation Algorithms
 * Subject   : rotate demo
 * author    : Evans Kiprotich Kiplagat
 * contact   : +25492281868 
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void show_val(char val){
cout<<val;
}

int main(){
//create vector object
vector<char> charVector;

//populate vector with initial values
charVector.push_back('T');
charVector.push_back('H');
charVector.push_back('E');
charVector.push_back('R');
charVector.push_back('E');
charVector.push_back(' ');
charVector.push_back('H');
charVector.push_back('I');

//display initial vector values
cout<<"Initial :";
for_each(charVector.begin(),charVector.end(),show_val);
cout<<endl;

//rotate vector
cout<<"Final   :";
rotate(charVector.begin(),charVector.begin()+6,charVector.end());

//display new vector values
for_each(charVector.begin(),charVector.end(),show_val);
cout<<endl;
return 0;
}

/*
 * Thank you *** you are a star
 *
 */
