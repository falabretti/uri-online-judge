import java.util.Scanner;

public class Uri1073 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int entrada = scan.nextInt();
		
		for(int i = 2; i <= entrada; i += 2) {
			System.out.printf("%d^2 = %.0f\n", i, Math.pow(i, 2));
		}
		
		scan.close();
	}
}
