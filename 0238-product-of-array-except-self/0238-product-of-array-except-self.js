var productExceptSelf = function(nums) {
   let n = nums.length;
    let pre = new Array(n); // Initialize the array for prefix products
    let newa = new Array(n); // Initialize the array for suffix products
    let result = new Array(n); //
    pre[0]=1;
    newa[n-1]=1;
     for (let i = 1; i < n; i++) {
        pre[i] = pre[i - 1] * nums[i - 1];
    }
     for (let i = n - 2; i >= 0; i--) {
        newa[i] = newa[i + 1] * nums[i + 1];
    }
     for (let i = 0; i < n; i++) {
        result[i] = pre[i] * newa[i];
    }
    return result;
}
