import java.util.*;

public class team {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();

		int yes = 0;
		for (int i = 0; i < n; i++) {
			int petya = scan.nextInt();
			int vasya = scan.nextInt();
			int tonya = scan.nextInt();
			if (petya + vasya + tonya > 1)
				yes++;
		}

		System.out.println(yes);
		scan.close();
	}
}
