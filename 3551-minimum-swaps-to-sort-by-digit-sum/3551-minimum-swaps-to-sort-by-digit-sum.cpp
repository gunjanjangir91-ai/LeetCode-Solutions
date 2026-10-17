class Solution {
public:
int digitsum(int num)
{
    int sum = 0;
    while(num>0)
    {
        sum+=num%10;
        num/=10; 
    }
    return sum;
}
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>> arr;
        for (int i=0;i<n;i++)
        {
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end(),[&](pair<int,int> a,pair<int,int> b){
            int sumA = digitsum(a.first);
            int sumB = digitsum(b.first);
            if (sumA!=sumB)
            {
                return sumA<sumB;
            }
            return a.first<b.first;
        });
        vector<bool> visited(n,false);
        int swaps = 0;
        for (int i=0;i<n;i++)
        {
            if (visited[i] || arr[i].second == i)
            {
                continue;
            }
            int j = i;
            int cyclecount = 0;
            while(!visited[j])
            {
                visited[j] = true;
                j = arr[j].second;
                cyclecount++;
            }
            swaps+= cyclecount-1;
        }
        return swaps;
    }
};