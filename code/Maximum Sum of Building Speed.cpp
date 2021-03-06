#include<bits/stdc++.h>
using namespace std;
int a[3*5*10000];
void merge(int a[],int l,int m,int r){
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	for(i=0;i<n1;i++)
		L[i]=a[i+l];
	for(j=0;j<n2;j++)
		R[j]=a[j+m+1];
	i=j=0;
	k=l;
	while(i<n1&&j<n2){
		if(L[i]<=R[j]){
			a[k]=L[i];
			i++;
		}
		else{
            		a[k] = R[j];
           		 j++;
       		 }
        	k++;
	}
	 while (i < n1){
		a[k] = L[i];
		i++;
		k++;
    	}
    	 while (j < n2){
		a[k] = R[j];
		j++;
		k++;
    }
}
void mergeSort(int a[], int l, int r){
	 if (l < r){
		int m = l+(r-l)/2;
		mergeSort(a, l, m);
		mergeSort(a, m+1, r);

		merge(a, l, m, r);
	}
}
int main(){
	int i,j,k,n,sum=0;
	cin>>n;
	for(i=0;i<2*n;i++){
		scanf("%d",&a[i]);
	}
	mergeSort(a,0,2*n-1);
	for(i=0;i<2*n;i+=2)
		sum+=a[i];
	cout<<sum<<endl;
	return 0;
}
