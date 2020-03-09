class Hello {
    public int[] twoSum(int[] nums, int target) {
        int[] a;
        int i = 0, j = 0;
        a = new int[2];
        boolean flag = true;
        for (i = 0; i < nums.length; i++) {
            for (j = i + 1; j < nums.length; j++) {
                if (nums[i] + nums[j] == target) {
                    flag = false;
                    break;
                }
            }
            if (flag == false)
                break;
        }
        if (flag == false) {
            a[0] = i;
            a[1] = j;
            return a;
        } else
            throw new IllegalArgumentException("No such Target Present");
    }

    public static void main(String[] args) {
        int[] a, b;
        a = new int[4];
        b = new int[2];
        a[0] = 2;
        a[1] = 7;
        a[2] = 11;
        a[3] = 15;
        Hello h = new Hello();
        b = h.twoSum(a, 19);
        System.out.println(b);
    }
}
