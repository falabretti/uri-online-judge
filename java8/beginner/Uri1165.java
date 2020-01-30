import java.util.Scanner;

public class Uri1165 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int testes = scan.nextInt();
		
		for(int i = 1; i <= testes; i++) {
			int entrada = scan.nextInt();
			
			int total = 0;
			for(int j = 2; j <= entrada / 2; j++) {
				if(entrada % j == 0) {
					total++;
					break;
				}
			}
			
			if(total == 0 && entrada != 1) System.out.printf("%d eh primo\n", entrada);
			else System.out.printf("%d nao eh primo\n", entrada);
		}
		
		scan.close();
	}
}
