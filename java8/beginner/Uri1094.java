import java.util.Scanner;

public class Uri1094 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int testes = scan.nextInt();
		int total = 0;
		int totalCoelhos = 0;
		int totalRatos = 0;
		int totalSapos = 0;
		
		for(int i = 1; i <= testes; i++) {
			int quantidade = scan.nextInt();
			String tipo = scan.next().intern();
			
			if(tipo == "C") totalCoelhos += quantidade;
			if(tipo == "R") totalRatos += quantidade;
			if(tipo == "S") totalSapos += quantidade;
			total += quantidade;
		}
		
		System.out.printf("Total: %d cobaias\n", total);
		System.out.printf("Total de coelhos: %d\n", totalCoelhos);
		System.out.printf("Total de ratos: %d\n", totalRatos);
		System.out.printf("Total de sapos: %d\n", totalSapos);
		System.out.printf("Percentual de coelhos: %.2f %%\n", totalCoelhos * 100.0 / total);
		System.out.printf("Percentual de ratos: %.2f %%\n", totalRatos * 100.0 / total);
		System.out.printf("Percentual de sapos: %.2f %%\n", totalSapos * 100.0 / total);
		
		scan.close();
	}
}
