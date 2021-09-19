#include<iostream>
using namespace std;       /*1
                             23     pattern;
                             345*/
int main(){

int j,i=1,n;
int k;
cin>>n;
    while(i<=n){
        j=1;
        k = i;
        while(j<=i){
          // k= n;
            cout<< k;
            k++;
            j++;
        }
        cout<<endl;
        //k=1;
        i++;
    }
}
    