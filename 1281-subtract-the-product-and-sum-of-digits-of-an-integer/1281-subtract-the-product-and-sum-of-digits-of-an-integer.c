int subtractProductAndSum(int n){
    
    int rem ,res,sum=0,product=1;
    while(n>0){
        rem=n%10;
        sum = sum +rem;
        product =product*rem;

        n=n/10;
    }
      res=( product-sum);
      return res;
}