bool isPalindrome(int x) {
        if(x<0)
        return false;
        int number=x;
        long rev=0;
        while(number>0){
         rev = (rev*10) + (number%10);
        number=number/10;
        }
        if(x==rev)
        return true;
        else
        return false;
