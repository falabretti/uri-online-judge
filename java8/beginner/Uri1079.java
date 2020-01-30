import java.util.Scanner;

public class Uri1079 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int testes = scan.nextInt();
		
		for(int i = 1; i <= testes; i++) {
			double nota1 = scan.nextDouble();
			double nota2 = scan.nextDouble();
			double nota3 = scan.nextDouble();
			
			double media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10.0;
			
			System.out.printf("%.1f\n", media);
		}
		
		scan.close();
	}
}
