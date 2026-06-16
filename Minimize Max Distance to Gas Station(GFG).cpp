class Solution {
  public:
    bool solve(double m, vector<int> & stations,int k){
        int c=0;
        for(int i=1;i<stations.size();i++){
            c+=(stations[i]-stations[i-1]-0.000001)/m;
        }
        return(c<=k);
    }
    
    
    double minMaxDist(vector<int> &stations, int K) {
        // Code here
        double a=-1;
        double l=0.000001,r=1e9;
        while(l<=r){
            double m=(l+r)/(double)2.00;
            if(solve(m,stations,K)){
                a=m;
                r=m-0.000001;
                
            }
            else{
                l=m+0.000001;
            }
        }
        return a;
    }
};
