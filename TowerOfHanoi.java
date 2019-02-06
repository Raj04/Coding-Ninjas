import java.util.Scanner;

public class runner {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		solution.towerOfHanoi(n, 'a', 'b', 'c');
	}
}



public class solution {
  
  public static void towerOfHanoi(int n, char source, char intermediate, char destination){
    
    if(n>=1){
      towerOfHanoi(n-1,source,destination,intermediate);
      System.out.println(source+" "+destination);
      towerOfHanoi(n-1,intermediate,source,destination);
    }
  }
}
