class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        

//bitonic array is the array where elements first increasesand then decreseses in shape of mountain
//FIND THE PEAK ELEMENT

       int start=0;
        int end=arr.length-1;

        while(start<end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]>arr[mid+1])
            {
                //u e in decreasing part of an array
                //this may be the answer,but look at left
                //this is why end!=mid-1
                end=mid;
            }
            else
            {
                //u re in ascending part of an array
                start=mid+1;//because we know that mid+1 element >mid element

            }
        }
       
        return start;//or return end
    }
    

}