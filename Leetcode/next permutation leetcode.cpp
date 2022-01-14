#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vc,v;
    int n,i,j,temp,ch=0,index;
    cin>>n;
    for(i =0;i<n;i++){
        cin>>j;
        vc.push_back(j);
    }
    for(i = n-1;i>0;i--){
        for(j = i-1;j>=0;j--){
            if(vc[j]<vc[i]){
                temp = vc[i];
                vc[i] = vc[j];
                vc[j] = temp;
                index = j;
                ch = 1;
                break;
            }
        }
        if(ch) break;
    }
    if(ch){
        for(i = index+1;i<n;i++){

            for(j=i+1;j<n;j++){
                if(vc[i]>vc[j]){
                    temp = vc[i];
                    vc[i] = vc[j];
                    vc[j] = temp;
                }
            }
        }
    }
    else{
        for(i = 0;i<n;i++){

            for(j=i+1;j<n;j++){
                if(vc[i]>vc[j]){
                    temp = vc[i];
                    vc[i] = vc[j];
                    vc[j] = temp;
                }
            }
        }
    }
    for(i = 0;i<n;i++){
        cout<<vc[i]<<" ";
    }
    return 0;
}
