import java.util.Scanner;

public class Uri1072 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int testes = scan.nextInt();
		int totalIn = 0;
		int totalOut = 0;
		
		for(int i = 1; i <= testes; i++) {
			int entrada = scan.nextInt();
			
			if(entrada >= 10 && entrada <= 20) {
				totalIn++;
			} else {
				totalOut++;
			}
		}
		
		System.out.printf("%d in\n", totalIn);
		System.out.printf("%d out\n", totalOut);
		
		scan.close();
	}
}
