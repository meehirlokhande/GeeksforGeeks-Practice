https://www.geeksforgeeks.org/problems/majority-element-1587115620/1?page=1&sortBy=submissions

// solution-1 code is correct but giving time complexity o(n^2)

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        int strict=abs(size/2);
        for(int i=0;i<size;i++)
        {
            int count=0;
            int hold=a[i];
            for(int j=0;j<size;j++)
            {
                if(hold==a[j])
                {
                    count++;
                }
            }
            if(count>strict){
                return hold;
            }
            
            
        }
        return -1;
        
        
        
    }
};
