class Solution {
public:
    string checkCoupon(int n, int x, int y, vector<int>& prices) {
        int total=x ; 
        int MRP = 0;
        for(int i=0; i<prices.size(); i++){
            if(x>y) {
                prices[i]-=y;
                total+=prices[i];
            }
        }
        for(int i=0; i<prices.size(); i++) {
            MRP += prices[i];
        }
        if(total<MRP) {
            return "COUPON" ;
        } else {
            return "NO COUPON";
        }
    }
};

