import java.util.Scanner;

public class Uri1078 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int entrada = scan.nextInt();
		
		for(int i = 1; i <= 10; i++) {
			System.out.printf("%d x %d = %d\n", i, entrada, i * entrada);
		}
		
		scan.close();
	}
}
