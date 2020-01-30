import java.util.Scanner;

public class Uri1164 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int testes = scan.nextInt();
		
		for(int i = 1; i <= testes; i++) {
			int entrada = scan.nextInt();
			int soma = 0;
			
			for(int j = 1; j < entrada; j++) {
				if(entrada % j == 0) soma += j;
				if(soma > entrada) break;
			}
			
			if(entrada == soma) System.out.printf("%d eh perfeito\n", entrada);
			else System.out.printf("%d nao eh perfeito\n", entrada);
		}
		
		scan.close();
	}
}
