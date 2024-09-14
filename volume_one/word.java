import java.util.*;

public class word {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String word = scan.nextLine();
		scan.close();

		int upcase = 0;
		for (int i = 0; i < word.length(); i++) {
			if (word.charAt(i) >= '\u0041' && word.charAt(i) <= '\u005A')
				upcase++;
		}
		if (upcase <= word.length() - upcase)
			System.out.println(word.toLowerCase());
		else
			System.out.println(word.toUpperCase());
	}	
}
