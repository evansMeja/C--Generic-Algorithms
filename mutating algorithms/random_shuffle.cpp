/*
 * Language  : C++
 * Topic     : Mutating Algorithms
 * Subject   : Random_shuffle Demo
 * author    : Evans Kiprotich Kiplagat
 * contact   : +25492281868 or evanslagat911@gmail.com
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

//shuffle vector
cout<<"Final   :";
random_shuffle(intVector.begin(),intVector.end());

//display new vector values
for_each(intVector.begin(),intVector.end(),show_val);
cout<<endl;
return 0;
}

/*
 * Thank you *** you are a star
 *
 */
