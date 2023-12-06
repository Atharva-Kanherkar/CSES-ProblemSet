 #include <bits/stdc++.h>
using namespace std;

#define ll long long

bool compare(const pair<char, int> &a, const pair<char, int> &b) {
    return a.second > b.second;  
}

int main() {
    string s;
    cin >> s;
    int n = s.size();
    unordered_map<char, int> mp;

    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }

    int oddCount = 0;
    for (const auto &p : mp) {
        if (p.second % 2 != 0) {
            oddCount++;
            if (oddCount > 1) {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
        }
    }

    vector<pair<char, int>> freqVector(mp.begin(), mp.end());

    sort(freqVector.begin(), freqVector.end(), compare);
    string ans = " ";
    for (const auto &p : freqVector) {
        int k = p.second / 2; 
        for (int i = 0; i < k; i++) {
            ans+= p.first;
        }
         
    }
   bool check = false;
   string a = s;
   reverse(s.begin(), s.end());
   if(a==s){
    check = true;
   }


     for (const auto &p : freqVector) {
        if(p.second == 1){
             ans+= p.first;
        }
         
    }
    string ans2  =  " ";
        for(int i=0; i<ans.size()-1; i++){
                ans2+= ans[i];
        }
    reverse(ans2.begin(), ans2.end());  
    if(check){
        cout<<s<<endl;
    }
    else{
        cout<<ans+ans2<<endl;
    }
   
        
    

    
    return 0;
}
