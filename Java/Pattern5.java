public class Pattern5{
    public static void main(String[] args) {
        int i;
        int j;
        int n = 5;
        int count = 1;
       for( i = 1; i<=5 ; i++ )
       {
            for(j=1;j<=n;j++){
                // count is single digit
                if(count < 10){
                    System.out.print("0");
                }
                System.out.print(count+" ");
                count++;
            }
            System.out.println(" ");

       }
            
       
        
    }
}