import java.util.Scanner;
import java.util.*;

public class gravity_flip {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		List<Integer> set = new LinkedList<>();
		int n = scan.nextInt();
		for (int i = 0; i < n; i++) {
			int input = scan.nextInt();
			set.add(input);
		}
		set.sort((s1, s2) -> s1.compareTo(s2));
		for (int i = 0; i < n; i++) {
			System.out.print(set.get(i));
			if (i + 1 != n)
				System.out.print(" ");
		}
		scan.close();
	}
}
