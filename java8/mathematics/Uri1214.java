import java.util.Scanner;

public class Uri1214 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int testes = scan.nextInt();
		
		for(int i = 1; i <= testes; i++) {
			int qnt = scan.nextInt();
			
			int[] notas = new int[qnt];			
			int soma = 0;
			
			for(int j = 0; j < qnt; j++) {
				notas[j] = scan.nextInt();
				soma += notas[j];
			}
			double media = soma / (double) qnt;
			
			int acima = 0;
			
			for(int j = 0; j < qnt; j++) {
				if(notas[j] > media) acima++;
			}
			
			double percentual = (100.0 * acima) / qnt;
			
			System.out.printf("%.3f%%\n", percentual);										
		}
		
		scan.close();
	}
}
