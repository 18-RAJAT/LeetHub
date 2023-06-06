class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        int difference=arr[1]-arr[0];
        if(arr.size()==2)
        {
            return true;
        }
        for(int i=2;i<arr.size();++i)
        {
              if((arr[i]-arr[i-1])!=difference)
              {
                  return false;
              }
        }
        return true;
    }
};