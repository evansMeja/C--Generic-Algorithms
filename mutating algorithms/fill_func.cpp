/*
 * Language  : C++
 * Topic     : Mutation Algorithms
 * Subject   : fill function demo
 * author    : Evans Kiprotich Kiplagat
 * contact   : +25492281868
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void show_val(int val){
cout<<val<<" ";
}

int main(){
//create vector object
vector<int> intVector;

//populate vector with initial values
for(int i=0;i<10;i++){
intVector.push_back(i);
}

//display initial vector values
cout<<"Initial :";
for_each(intVector.begin(),intVector.end(),show_val);
cout<<endl;

//fill the last 5 with zeros
cout<<"Final   :";
fill(intVector.begin(),intVector.begin()+5,0);

//display new vector values
for_each(intVector.begin(),intVector.end(),show_val);
cout<<endl;
return 0;
}


/*
 * Thank you *** you are a star
 *
 */
