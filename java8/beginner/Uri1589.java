import java.util.Scanner;

public class Uri1589 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int testes = scan.nextInt();
		
		while(testes-- > 0) {
			int r1 = scan.nextInt();
			int r2 = scan.nextInt();
			
			System.out.println(r1 + r2);
		}
		
		scan.close();
	}
}
