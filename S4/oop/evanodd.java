/**
    CODE BY AJAY O S
    program to use to find hopw may odd or evan in the numbers
     */
class evanodd {
	public static void main(String args[]) {
		double numbers[] = {40, 25, 36, 58 ,45 ,85};
        int even=0,odd=0;
        for(int i=0; i< numbers.length; i++) {
            if(numbers[i] %2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
        System.out.println("NO OF NUMBERS = " + numbers.length);
        System.out.println("NO OF EVAN NUMBERS = " + even);
        System.out.println("NO OF ODD NUMBERS = " + odd);
	}
}
