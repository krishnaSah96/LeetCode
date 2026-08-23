class Solution {
public:
    bool checkDivisibility(int n) {

        bool result = false;
        int sum = 0;
        int product = 1;
        int  final_sum;
        int temp = n;
         

         while ( temp> 0){
            int digit = temp% 10;
            sum = sum + digit;
            product =product * digit ;

            temp = temp/10;


         }


        final_sum = sum + product;

        if ( n % final_sum == 0){
            result= true;
        
        }else{
            result= false;
        }
        return result;
    }
};