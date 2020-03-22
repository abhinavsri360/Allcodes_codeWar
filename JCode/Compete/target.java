/* ###########################################################################################################
5364. Create Target Array in the Given Order
User Accepted:4470
User Tried:4661
Total Accepted:4545
Total Submissions:5446
Difficulty:Easy
Given two arrays of integers nums and index. Your task is to create target array under the following rules:

Initially target array is empty.
From left to right read nums[i] and index[i], insert at index index[i] the value nums[i] in target array.
Repeat the previous step until there are no elements to read in nums and index.
Return the target array.

It is guaranteed that the insertion operations will be valid.



Example 1:

Input: nums = [0,1,2,3,4], index = [0,1,2,2,1]
Output: [0,4,1,3,2]
Explanation:
nums       index     target
0            0        [0]
1            1        [0,1]
2            2        [0,1,2]
3            2        [0,1,3,2]
4            1        [0,4,1,3,2]
############################################################################################## */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class target {

    public int[] createTargetArray(int[] nums, int[] index) {
        int[] target = new int[nums.length];

        for (int i = 0; i < nums.length; i++)
            target[i] = Integer.MAX_VALUE;
        int j = 0;
        for (int i = 1; i < index.length; i++) {
            if (target[index[i]] == Integer.MAX_VALUE)
                target[index[i]] = nums[i];
            else {
                while (j < nums.length && target[j] != Integer.MAX_VALUE)
                    j++;
                for (int k = j + i; k > i; k--)
                    target[k] = target[k - 1];
                target[index[i]] = nums[i];
                j = 0;
            }
        }
        return target;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(args[0]);
        System.out.println("Enter nums:");
        int[] nums = new int[n];
        int[] index = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = Integer.parseInt(br.readLine());
        }
        System.out.println("Enter Index:");
        for (int i = 0; i < n; i++) {
            index[i] = Integer.parseInt(br.readLine());
        }
        target t = new target();

        System.out.println(t.createTargetArray(nums, index));
    }
}

