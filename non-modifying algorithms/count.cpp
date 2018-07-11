/*
 * Language  : C++
 * Topic     : Non-Modifying Algorithms
 * Subject   : count Demo C++
 * author    : Evans Kiprotich Kiplagat
 * contact   : +25492281868
*/

#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int main(){
multiset <int, less<int> > intSet;
int userInput;
int choice;
int loop = 1;
int testNumber;
int cnt;
int i;
multiset <int, less<int> > :: iterator it;
while(loop == 1){
cout<<"1. Insert number"<<endl;
cout<<"2. check duplicates"<<endl;
cout<<"3. display set"<<endl;
cout<<"4. exit"<<endl;
cin>>choice;
switch(choice){
case 1:
cout<<"Enter Number to insert"<<endl;
cin>>userInput;
intSet.insert(userInput);
cout<<userInput<<" Inserted"<<endl;
break;
case 2:
cout<<"Enter number to check for duplicates"<<endl;
cin>>testNumber;
cnt = count(intSet.begin(),intSet.end(),testNumber);
cout<<"Number of "<<testNumber<<" duplicates = "<<cnt<<endl;
break;
case 3:
it = intSet.begin();
cout<<"Set : ";
for(i=0;i<intSet.size();++i){
cout<<*it++<<" ";
}
cout<<endl;
break;
case 4:
loop = 0;
break;
default:
cout<<"invalid input please"<<endl;
break;
}
}
return 0;
}

/*
 * Thank you *** you are a star
 *
 */
