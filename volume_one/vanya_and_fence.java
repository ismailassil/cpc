import java.util.*;

public class vanya_and_fence {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int n = scan.nextInt();
		int h = scan.nextInt();

		int width = 0;
		for (int i = 0; i < n; i++) {
			int input = scan.nextInt();
			if (input > h)
				width += 2;
			else
				width++;
		}
		System.out.println(width);
		scan.close();
	}
}