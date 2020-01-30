import java.util.Scanner;

public class Uri1116 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int testes = scan.nextInt();
		
		for(int i = 1; i <= testes; i++) {
			
			int x = scan.nextInt();
			int y = scan.nextInt();
			
			if(y == 0) {
				System.out.println("divisao impossivel");
				continue;
			}
			
			double resultado = (double) x / y;
			System.out.printf("%.1f\n", resultado);			
		}
		
		scan.close();
	}
}
