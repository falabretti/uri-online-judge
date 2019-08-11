import java.math.BigInteger;
import java.util.Scanner;

public class Uri1169 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int testes = scan.nextInt();
		
		for(int i = 1; i <= testes; i++) {
			int casas = scan.nextInt();
			
			long graos = 1;
			long soma = 1;
			
			for(int j = 2; j <= casas; j++) {
				graos *= 2;
				soma += graos;
				System.out.println(soma + graos);
			}	
			System.out.println(soma);
			
			
			
			long gramas = soma / 12;
			long kg = gramas / 1000;
			
			System.out.printf("%d kg\n", kg);
		}
		
		scan.close();
	}
}
