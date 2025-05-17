/*
 * Given a binary array nums, return the maximum number of consecutive 1's in the array.
 * 
   Example 1:
   Input: nums = [1,1,0,1,1,1]
   Output: 3
   Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
   Example 2:
   
   Input: nums = [1,0,1,1,0,1]
   Output: 2
 */

#include <stdio.h>
int main() {
   int i,n,count=0;
   printf("enter the limit : ");
   scanf("%d",&n);
   int ar[n];
   printf("enter the array values in 0's or 1's : \n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&ar[i]);
   }
   int maxcount=0;
   for(i=0;i<n;i++)
   {
       if(ar[i]==1)
       {
           count++;
           if(maxcount<count)
           {
               maxcount=count;
           }
        else{
               count=0;
       }
       }
   }
   printf("%d",count);
   
}
