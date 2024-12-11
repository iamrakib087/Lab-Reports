#include<iostream>
#include<cmath>
using namespace std;
void toh(int n, char beg, char max, char end){
if(n==1){
    cout<<"\nshift top disk from "<<beg<<" to "<<end;
return;}
toh(n-1,beg,end,max);
cout<<"\nshift top disk from "<<beg<<" to "<<end;
toh(n-1,max,beg,end);
}
int main(){
int disk;
cout<<"Enter the no of disk:";
cin>>disk;
if(disk<1)
    cout<<"\nThere are no disk to shift:";
else
    cout<<"\nThere are "<<disk<<" disks in tower A.\n";
toh(disk,'A','B','C');
cout<<"\n"<<disk<<" disks in tower A are shifted to tower C.\n";
int count = pow(2,disk)-1;
cout<<"Total count: "<<count<<endl;
return 0;

}
