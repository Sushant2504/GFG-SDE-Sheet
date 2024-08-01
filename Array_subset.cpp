#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

string isSubset(int a1[], int a2[], int n, int m) {
     unordered_map<int, int> m1;
     unordered_map<int, int> m2;
     
     
     for(int i=0; i<n; i++){
         m1[a1[i]]++;
     }
     
     for(int i=0; i<m; i++){
         m2[a2[i]]++;
     }
     
     for(auto i:m2){
          bool f = false;
         for(auto j:m1){
             if(i.first==j.first && i.second<=j.second){
                 f = true;
             }
         }
         
         if(!f) return "No";
         
     }
     
     
     return "Yes";
}