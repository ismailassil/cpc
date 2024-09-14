import java.util.*;

public class boys_or_girl {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String username = scan.nextLine();

		Set<Character> list = new HashSet<>();
		for (int i = 0; i < username.length(); i++) {
			list.add(username.charAt(i));
		}
		if (list.size() % 2 == 0)
			System.out.println("CHAT WITH HER!");
		else
			System.out.println("IGNORE HIM!");

		scan.close();
	}	
}
