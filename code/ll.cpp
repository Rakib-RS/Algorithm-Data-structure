#include<bits/stdc++.h>
using namespace std;
struct Point{
    double x;
    double y;
};
class LagranzesInterpolation{
    double result;
    int i,j;
    double term;
    public :
     double findvalue(Point f[],double x,int n){
        result =0;
        for(i=0;i<n;i++){
            term =f[i].y*1.0;
            for(j=0;j<n;j++){
                if(i!=j){
                    term=term*(x-f[j].x)/double(f[i].x-f[j].x);
                }
            }
            result+=term;
        }
        return result;

    }


};
int main(){
    LagranzesInterpolation ob;
    Point f[100];
    int n,i;
    double x,y,ans;
    cout<<"Enter how many data is given?: ";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x>>y;
        f[i].x=x;
        f[i].y=y;

    }
    cout<<endl<<"enter the x: ";
    cin>>x;
    ans=ob.findvalue(f,x,n);
    printf("The value of f(2.1) : %.8f\n",ans);

    return 0;
}
