import java.util.*;

public class magnet {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();

		int group = 0, last = 0;
		for (int i = 0; i < n; i++) {
			int input = scan.nextInt();
			if (input == 10) {
				if (last == 1 || last == 0)
					group++;
			}
			else if (input == 1) {
				if (last == 10 || last == 0)
					group++;
			}
			last = input;
		}
		System.out.println(group);
		scan.close();
	}
}
