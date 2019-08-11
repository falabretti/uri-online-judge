import java.util.Scanner;

public class Uri1160 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int testes = scan.nextInt();
		
		for(int i = 1; i <= testes; i++) {
			int popA = scan.nextInt();
			int popB = scan.nextInt();
			double taxA = scan.nextDouble();
			double taxB = scan.nextDouble();
			int anos = 0;
			
			while(popA <= popB && anos <= 100) {
				popA += popA * (taxA / 100);
				popB += popB * (taxB / 100);
				anos++;
			}
			if(anos > 100) System.out.println("Mais de 1 seculo.");
			else System.out.printf("%d anos.\n", anos);
		}
		
		scan.close();
	}
}
