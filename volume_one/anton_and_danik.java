import java.util.*;

public class anton_and_danik {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		scan.nextInt();
		scan.nextLine();
		String line = scan.nextLine();
		char[] arr = line.toCharArray();

		int a = 0, d = 0;
		for (int i = 0; i < arr.length; i++) {
			char c = arr[i];
			if (c == 'A')
				a++;
			else if (c == 'D')
				d++;
		}
		if (a > d)
			System.out.println("Anton");
		else if (a < d)
			System.out.println("Danik");
		else
			System.out.println("Friendship");
		scan.close();
	}
}
