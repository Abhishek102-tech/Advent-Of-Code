#include <iostream>
using namespace std;
int main(){
int k1[1000],k2[1000],temp;
cout<<"Enter the array 1 and array 2 elements"<<endl;
for(int i=0;i<1000;i++){
cin>>k1[i]>>k2[i];
}
int diff[1000];
for(int i=0;i<1000;i++){
for(int j=0;j<1000;j++){
if(k1[j]>k1[j+1]){
temp=k1[j];
k1[j]=k1[j+1];
k1[j+1]=temp;
}
}
}
for(int i=0;i<1000;i++){
for(int j=0;j<1000;j++){
if(k2[j]>k2[j+1]){
temp=k2[j];
k2[j]=k2[j+1];
k2[j+1]=temp;
}
}
}
cout<<"The formatted output is"<<endl;
for(int i=0;i<1000;i++){
cout<<k1[i]+"\t"<<k2[i]<<endl;
}
return 0;
}
