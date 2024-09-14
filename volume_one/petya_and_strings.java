import java.util.*;

public class petya_and_strings {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String str1 = scan.nextLine();
		String str2 = scan.nextLine();
		scan.close();

		str1 = str1.toLowerCase();
		str2 = str2.toLowerCase();
		for (int i = 0; i < str1.length(); i++) {
			if (str1.charAt(i) != str2.charAt(i)) {
				if (str1.charAt(i) > str2.charAt(i)) {
					System.out.println(1);
					return ;
				}
				else if (str1.charAt(i) < str2.charAt(i)) {
					System.out.println(-1);
					return ;
				}
			}	
		}
		System.out.println(0);
	}	
}
