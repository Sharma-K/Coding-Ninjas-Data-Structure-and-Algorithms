int countZeros(int n) {
    // Write your code here
    
    if(n==0)
    {
        return 1;
    }
    if(n<10)
    {
        return 0;
    }
    if(n%10==0)
    {
        int ans= 1+countZeros(n/10);
        return ans;
    }
    else{
      countZeros(n/10);
    }
}
