   int sumOfDigit(int n)
    {
        int sum =0;
        while(n>0){
            sum=sum+n%10;
            n=n/10;
        }
        return sum;
    }
    int singleDigit(int n) {
        if(n<10) return n;
        int sum =n;
        while(sum>=10)
        {
            sum = sumOfDigit(sum);
        }
        return sum;
    }
