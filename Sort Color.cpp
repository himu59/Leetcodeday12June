class Solution {
public:
    void sortColors(vector<int>& a) {
        int zero = 0;
        int one = 0;
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i] == 0) zero++;
            if(a[i] == 1) one++;
            
        }
        int x=0,y=0;
        for(int i=0;i<a.size();i++)
        {
            if(x!=zero){
                a[i] = 0;
                x++;
            }
            else if(y != one){
                a[i] = 1;
                y++;
            }
            else {
                a[i] = 2;
            }
        }
    }
};
