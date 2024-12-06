#include<iostream>
using namespace std;
int main(){
    int n,sum =0;
    cout<<"Enter the number you wants added it:";
    cin>>n;
    for(int i=0;i<n;i++){
        if(i%3==0){
            continue;
        }
        else{
            sum=sum+i;
        }
    }
        cout<<sum;
   return 0;
}