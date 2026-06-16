class Solution {
public:
    bool pos(vector<int> & position,int n, int m, int md){
        int c=1;
        int f=position[0];
        for(int i=1;i<n;i++){
            if(position[i]-f>=md){
                c++;
                if(c==m){
                    return true;
                }
                f=position[i];
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size();
        int l=0, r=position[n-1]-position[0];
        int a=-1;
        while(l<=r){
            int md=l+(r-l)/2;
            if(pos(position,n,m,md)){
                a=md;
                l=md+1;
            }
            else{
                r=md-1;
            }
        }
        return a;
    }
};
