 #include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin>>n;
    if(n==3 || n==2){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
    for(int i=1; i<n; i = i +2){
        cout<< n - i <<" ";
    }
    cout<< n <<" ";
     for(int i=2; i<n; i = i + 2){
        cout << n - i <<" ";
    }
    }









    return 0;
}
