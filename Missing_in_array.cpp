#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long


int missingNumber(int n, vector<int>& arr) {

        // Your code goes here
        
        sort(arr.begin(), arr.end());
        int ans = arr[n-1];
        for(int i=0; i<n; i++){
             if(arr[i]!=i+1){
                 ans = i+1;
                 break;
             }
        }
        
        
        return ans;
    }