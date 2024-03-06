/*using vector insert elements from 15 to 5, then add 18 2 times at the end ,
and 30 3 times at the beginning.then sort the vector, remove 11 from the 
vector. print the vector after each operation*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
int main(){
    vector<int>myvector;
    cout<<"Initialy the vector is :- "<<endl;
    int b= myvector.size();
    for(int i=15;i>=5;i--){
        myvector.push_back(i);
    }
    for(int i=0;i<myvector.size();i++){
        cout<<myvector[i]<<" ";

    }
    b= myvector.size();
    cout<<endl<<"The size of the vector is :- "<<b<<endl;
    cout<<"\t"<<"******************************"<<endl;
    myvector.insert(myvector.begin(),3,30);
    myvector.insert(myvector.cend(),2,18);
    b= myvector.size();
    cout<<endl<<"After inserting the elemnts the vector is"<<endl;
    for(int i=0;i<myvector.size();i++){
        cout<<myvector[i]<<" ";
    }
    cout<<endl<<"The size of the vector is :- "<<b<<endl;
    cout<<endl<<"\t"<<"*******************************"<<endl;
    cout<<endl<<"After sorting the vector is"<<endl;
    sort(myvector.begin(),myvector.end());
    b= myvector.size();
    for(int i=0;i<myvector.size();i++){
        cout<<myvector[i]<<" ";
    }
     cout<<endl<<"\t"<<"*******************************"<<endl;

    vector<int>::iterator it;
    it=myvector.begin()+6;
    myvector.erase(it);
    cout<<endl<<"Finally the vector is "<<endl;    
    for(int i=0;i<myvector.size();i++){
        cout<<myvector[i]<<" ";
    }   
    







    return 0;
}
