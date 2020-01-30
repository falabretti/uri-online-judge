import java.util.Scanner;

public class Uri1066 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int totalPar = 0;
		int totalImpar = 0;
		int totalPositivo = 0;
		int totalNegativo = 0;
		
		for(int i = 1; i <= 5; i++) {
			int entrada = scan.nextInt();
			
			if(entrada % 2 == 0) {
				totalPar++;
			} else {
				totalImpar++;
			}
			
			if(entrada > 0) {
				totalPositivo++;
			} else if(entrada < 0) {
				totalNegativo++;
			}
		}
		
		System.out.printf("%d valor(es) par(es)\n", totalPar);
		System.out.printf("%d valor(es) impar(es)\n", totalImpar);
		System.out.printf("%d valor(es) positivo(s)\n", totalPositivo);
		System.out.printf("%d valor(es) negativo(s)\n", totalNegativo);
		
		scan.close();
	}
}
