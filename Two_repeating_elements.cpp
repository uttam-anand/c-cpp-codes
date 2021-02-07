class Solution
{
    vector<int> singleNumber(vector<int>nums)
    {
       long long int diff = 0;
        for(auto i: nums)
        	diff = i ^ diff;
        // Get its last set bit
        diff &= -diff;
        // Pass 2 :
        vector<int> rets = {0, 0}; // this vector stores the two numbers we will return
        for (int num : nums)
        {
            if ((num & diff) == 0) // the bit is not set
            {
            	// cout<<num<<"\n";
                rets[0] ^= num;
            }
            else // the bit is set
            {
                rets[1] ^= num;
            }
        }
        if(rets[0] > rets[1])
        	swap(rets[0], rets[1]);
        return rets;
    }
};
