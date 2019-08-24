public class new2 {

        public static void main(String[] args) {

            int sum = 0;;

            for(int i=1;i<10;i++){
                if(i%3 == 1){
                    //System.out.println("step by step sum inner loop is: "+sum);
                    continue;
                }
                sum+=i;
                System.out.println("step by step sum outer loop is: "+sum);
            }
            System.out.println("sum is: "+sum);
        }

}
