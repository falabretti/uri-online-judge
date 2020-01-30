import java.util.Scanner;

public class Uri1178 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		double x = scan.nextDouble();
		
		for(int i = 0; i < 100; i++) {
			System.out.printf("N[%d] = %.4f\n", i, x);
			x /= 2;
		}
		
		scan.close();
	}
}
