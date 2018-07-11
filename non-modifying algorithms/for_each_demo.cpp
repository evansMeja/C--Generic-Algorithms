/*
 * Language  : C++
 * Topic     : Non-Modifying Algorithms
 * Subject   : for_each function
 * author    : Evans Kiprotich Kiplagat
 * contact   : +25492281868
*/

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
void show_val(int val){
cout<<val<<" ";
}

int main(){
multiset <int , less<int> > intSet;
intSet.insert(10);
intSet.insert(8);
intSet.insert(1);
intSet.insert(3);
intSet.insert(8);
intSet.insert(8);
intSet.insert(8);
intSet.insert(5);

//display contents of the set
for_each(intSet.begin(),intSet.end(),show_val);
cout<<endl;
return 0;
}


/*
 * Thank you *** you are a star
 *
 */
