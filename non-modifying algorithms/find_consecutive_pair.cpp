/*
 * Language  : C++
 * Topic     : Non-Modifying Algorithms
 * Subject   : Find consecutive Matching Pairs Demo C++
 * author    : Evans Kiprotich Kiplagat
 * contact   : +25492281868
*/

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
multiset <int , less<int> > intSet;
intSet.insert(10);
intSet.insert(3);
intSet.insert(1);
intSet.insert(8);
intSet.insert(8);
intSet.insert(67);
intSet.insert(13);
intSet.insert(89);
intSet.insert(13);

//display contents of the set
multiset <int , less<int> > :: iterator it = intSet.begin();
for(int i = 0;i < intSet.size(); ++i){
cout<<*it++<<" ";
}
cout<<endl;

cout<<"First Matching Pair"<<endl;
it = adjacent_find(intSet.begin(),intSet.end());
cout <<*it++<< " "<<*it<<endl;

cout<<"Second Matching Pair"<<endl;
it = adjacent_find(it,intSet.end());
cout <<*it++<< " "<<*it<<endl;
return 0;
}

