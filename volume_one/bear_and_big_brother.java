import java.util.*;

public class bear_and_big_brother {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int limak = scan.nextInt();
		int bbg = scan.nextInt();
		
		scan.close();
	
		// limak -> triples/year
		// bbg -> doubles/year

		int year = 0;
		while (true) {
			if (limak <= bbg) {
				limak *= 3;
				bbg *= 2;
				year++;
			}
			else if (limak > bbg) {
				System.out.println(year);
				return;
			}
		}
	}
}
