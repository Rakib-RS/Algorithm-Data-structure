#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,i,j,k;
    while(cin>>n){
        string s[n+1],sf;
        map<char,long long int>mp;
        for(i=0;i<n;i++){
            cin>>s[i];
            sf=sf+s[i];
        }
        sort(sf.begin(),sf.end());
        for(i=0;i<sf.size();i++){
            if(s[i]='A'&&s[i]=='a')
                mp['A']++;
            else if(s[i]=='B'&&s[i]=='b')
                 mp['B']++;
            else if(s[i]=='C'&&s[i]=='c')
                 mp['C']++;
            else if(s[i]=='D'&&s[i]=='d')
                 mp['D']++;
            else if(s[i]=='E'&&s[i]=='e')
                 mp['E']++;
            else if(s[i]=='F'&&s[i]=='f')
                 mp['F']++;
            else if(s[i]=='G'&&s[i]=='g')
                 mp['G']++;

            else if(s[i]=='H'&&s[i]=='h')
                 mp['H']++;
            else if(s[i]=='I'&&s[i]=='i')
                 mp['i']++;
            else if(s[i]=='J'&&s[i]=='j')
                 mp['J']++;
            else if(s[i]=='K'&&s[i]=='k')
                 mp['K']++;
            else if(s[i]=='L'&&s[i]=='l')
                 mp['L']++;
            else if(s[i]=='M'&&s[i]=='m')
                 mp['M']++;
            else if(s[i]=='N'&&s[i]=='n')
                 mp['N']++;
            else if(s[i]=='O'&&s[i]=='o')
                 mp['O']++;
            else if(s[i]=='P'&&s[i]=='p')
                 mp['P']++;
            else if(s[i]=='Q'&&s[i]=='q')
                 mp['Q']++;
            else if(s[i]=='R'&&s[i]=='r')
                 mp['R']++;
            else if(s[i]=='S'&&s[i]=='s')
                 mp['S']++;
            else if(s[i]=='T'&&s[i]=='t')
                 mp['T']++;
            else if(s[i]=='U'&&s[i]=='u')
                 mp['U']++;
            else if(s[i]=='V'&&s[i]=='v')
                 mp['V']++;
            else if(s[i]=='W'&&s[i]=='w')
                 mp['W']++;
            else if(s[i]=='X'&&s[i]=='x')
                 mp['X']++;
            else if(s[i]=='Y'&&s[i]=='y')
                 mp['Y']++;
            else if(s[i]=='Z'&&s[i]=='z')
                 mp['Z']++;
        }
        sort(mp.begin(),mp.end())
        reverse(mp.begin(),mp.end());

        for(char c='A';c<='Z';c++){
            if(mp[c]>0){
                cout<<c<<" "<<mp[c]<<endl;
            }
        }
    }


    return 0
}
