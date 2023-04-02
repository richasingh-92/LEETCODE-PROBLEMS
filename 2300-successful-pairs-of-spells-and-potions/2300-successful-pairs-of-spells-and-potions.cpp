class Solution {
public:
   vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) 
   {
       
       int n=spells.size();
       int m=potions.size();
       vector<int> pairs(n, 0);
       sort(potions.begin(),potions.end());
       for(int i=0;i<n;i++)
       {
           int sp=spells[i];
           int left=0;
           int right=m-1;  // for second array
           while(left<=right)
           {
               int mid=left + (right-left)/2;
               long long product= (long long )sp* (long long)potions[mid];
               if(product>=success)
               {
                   right=mid-1;
                   
               }
               else 
               {
                   left=mid+1;
               }
           }
          pairs[i]=m-left;
       }
       return pairs;
       
       
   }
};


       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       