import java.util.Scanner;

public class Uri1064 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int quantidade = 0;
		double total = 0;
		
		for(int i = 1; i <= 6; i++) {
			double entrada = scan.nextDouble();
			
			if(entrada > 0) {
				quantidade++;
				total += entrada;
			}
		}
		
		double media = total / quantidade;
		System.out.printf("%d valores positivos\n", quantidade);
		System.out.printf("%.1f\n", media);
		
		scan.close();
	}
}
