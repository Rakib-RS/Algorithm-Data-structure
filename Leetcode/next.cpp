class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int temp,i,j,ch=0,a,b,n,index =-1;
        vector<int>vc;
        vc = nums;
        n = nums.size();
        for(i = n-1;i>0;i--){
        for(j = i-1;j>=0;j--){
            if(vc[j]<vc[i]&&j>index){
                index = j;
                a = i;
                b = j;
                ch = 1;
               
            }
        }
       
    }
    if(ch){
        temp = vc[a];
        vc[a] = vc[b];
        vc[b] = temp;
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
        nums = vc;
    }
};
