import java.util.*;

public class beautiful_matrix {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int r = 0, c = 0;
		boolean flag = false;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				int input = scan.nextInt();
				if (input == 1) {
					r = i;
					c = j;
					flag = true;
					break ;
				}
			}
			if (flag)
				break;
		}
		System.out.println((Math.abs((r + 1) - 3) + Math.abs((c + 1) - 3)));
		scan.close();
	}
}
