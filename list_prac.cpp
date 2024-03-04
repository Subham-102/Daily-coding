/*using list, add any 5 numbers of your own choice , then add 2 lucky numbers in the front of the list,
then sort the above list,then delete the last and the first element, finally reverse the list. Print the 
list after each operation. */
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    list<int>l1;
    l1.push_back(103);
    l1.push_back(30);
    l1.push_back(18);
    l1.push_back(102);
    l1.push_back(50);
    cout<<"Initially the list is :- "<<endl;
    for(int x:l1){
        cout<<x<<" ";
    }
    l1.push_front(80);
    l1.push_front(70);
    cout<<endl<<"List after adding the elements :- "<<endl;
    for(int x:l1){
        cout<<x<<" ";
    }
    l1.sort();
    cout<<endl<<"List after sorting :- "<<endl;
    for(int x:l1){
        cout<<x<<" ";
    }
    l1.pop_back();
    l1.pop_front();
    cout<<endl<<"List after deleting the elements :- "<<endl;
    for(int x:l1){
        cout<<x<<" ";
    }
    l1.reverse()



    

    




}
/*using list, insert all the prime numbers from 1 to 15, then insert all the prime numbers from 15 to 20 at the 
starting of the list, then sort the above list , then delete 2 elements from starting and 1 elements from end, 
finally reverse the list.*/
