public class Pattern6{
    public static void main(String[] args) {
        int i;
        int j;
        int n = 5;

       for( i = 1; i<=5 ; i++ )
       {
            for(j=1;j<=n;j++){
                if(i*j < 10){
                    System.out.print("0");
                }
                System.out.print(i*j+" ");
            }
            System.out.println(" ");
       }
            
       
        
    }
}