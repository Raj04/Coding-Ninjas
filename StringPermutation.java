import java.util.Scanner;

public class runner {
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String input = s.nextLine();
		solution.permutations(input);
	}
}
public class solution {

	public static void permutations(String input){
		// Write your code here
		permutations("", input);
	}
  public static void permutations(String candidate, String remaining)
	{
		if (remaining.length() == 0) {
			System.out.println(candidate);
		}

		for (int i = 0; i < remaining.length(); i++)
		{
			String newCandidate = candidate + remaining.charAt(i);

			String newRemaining = remaining.substring(0, i) +
								  remaining.substring(i + 1);

			permutations(newCandidate, newRemaining);
		}
	}
}

