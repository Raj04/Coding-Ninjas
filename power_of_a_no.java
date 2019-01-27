/*package whatever //do not write package name here */

import java.io.*;

class GFG {
    
    public static int to_power(int number,int power){
        if(power==1){
            return number;
        }
        int total=number*to_power(number,power-1);
        return total;
    }
    
	public static void main (String[] args) {
	    System.out.println(to_power(3,5));
	}
}
