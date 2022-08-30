vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector <int> ans;
        bool in=false;
        bool tim=false;
        
        for (int i=0;i<nums1.size(); i++)
        { 
            tim=false;
            in =false;
            for (int j=0;j<nums2.size();j++)
            {
                if(nums2[j]==nums1[i])
                    tim=true;
               
                if (nums2[j]>nums1[i] && tim==true)
                {
                    ans.push_back(nums2[j]);
                    in= true;
                    break;
                }
            }
            if (in==false)
                ans.push_back(-1);
        }
        return ans;
        
    }
