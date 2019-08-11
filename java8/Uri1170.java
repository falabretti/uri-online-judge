import java.util.Scanner;

public class Uri1170 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int testes = scan.nextInt();
		
		for(int i = 1; i <= testes; i++) {
			double comida = scan.nextDouble();
			
			int dias = 0;
			while(comida > 1) {
				comida /= 2;
				dias++;
			}
			
			System.out.printf("%d dias\n", dias);
		}
		
		scan.close();
	}
}
