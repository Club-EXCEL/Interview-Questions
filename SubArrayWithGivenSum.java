/* We are given an array and a value,we have to find a sub-array whose sum of elements is equal to the given value*/
import java.util.*;
public class FindSubarrayWithGivenSum {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0)
        {
            int currSum = 0,start,end;
            int n=sc.nextInt();
            int arr[]=new int[n];
            int sum=sc.nextInt();
            for(int i=0;i<n;i++)
                arr[i]=sc.nextInt();
            for(start = 0, end = 0; end < arr.length; end++){
                currSum += arr[end];
                if(currSum == sum){
                    break;
                }else if(currSum < sum){
                    continue;
                }else{
                    while(currSum > sum && start < end - 1){
                        currSum -= arr[start++];
                    }
                    if(currSum == sum){
                       break;
                    }
            }
            }
            t--;
            if(currSum!=sum)
                System.out.println("-1");
            else 
                System.out.println((start+1)+" "+(end+1));
        }
    }
}