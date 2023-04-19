/**
    CODE BY AJAY O S
    program to use to find sum of 10 even numbers
     */
class firstevannumbers {
    public  static void main(String args[]) {
        double sum=0, n=10;
        for(int i = 0; i< n; i++) {
            if(i%2==0) {
                sum+=i;
            }
        }
        System.out.println("THE SUM OF 10 EVEN NUMBERS = " + sum);
    }

}
