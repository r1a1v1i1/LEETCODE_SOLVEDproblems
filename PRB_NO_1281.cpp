//1281. Subtract the Product and Sum of Digits of an Integer



class Solution{
public:
    int subtractProductAndSum(int n){
    int sum=0;
    int prod=1;

    while(n!=0){    
        int digit=n%10;

        sum=sum+digit;
        prod=prod*digit;
        n=n/10;
    }
    int result=prod-sum;
    return result;
    }
};