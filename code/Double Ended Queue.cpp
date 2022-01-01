 #include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,v,i,n,m,t,j,k,j1;
    string s1,s2,s3,s4;
    scanf("%d",&t);
    i=1;
    while(t--){
        scanf("%d%d",&n,&m);
        b=m;
        getchar();c=0;j=-1;k=0;
        map<int,string>mpl,mpr;
        printf("Case %d:\n",i);
        i++;
        while(b--){
            getline(cin,s1);
            s2=s1;
            a=s2.find("push");
            if(a!=string::npos){
                if(c<n){
                        c++;
                        s3=s2;
                        s2.erase(0,9);
                        v=atoi(s2.c_str());
                        if(s3.find("Left")!=string::npos){
                                mpl[j--]=s3;
                            printf("Pushed in left: %d\n",v);
                        }
                        else {
                                mpl[k++]=s3;
                                printf("Pushed in right: %d\n",v);
                        }
                    }
                    else printf("The queue is full\n");
                }
                else{
                    if(c>0){
                            c--;
                            map<int,string>::iterator it;
                        if(s1.find("Left")!=string::npos){
                                it=mpl.begin();
                                s4=it->second;
                                s4.erase(0,9);
                                v=atoi(s4.c_str());
                                printf("Popped from left: %d\n",v);
                                mpl.erase(it);
                        }
                        else{
                                it=mpl.end();
                                it--;
                                s4=it->second;
                                s4.erase(0,9);
                                v=atoi(s4.c_str());
                                printf("Popped from right: %d\n",v);
                                mpl.erase(it);
                            }
                    }
                    else printf("The queue is empty\n");
                }
            }
        }

    return 0;
}

