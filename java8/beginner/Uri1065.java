import java.util.Scanner;

public class Uri1065 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int quantidade = 0;
		
		for(int i = 1; i <= 5; i++) {
			int entrada = scan.nextInt();
			
			if(entrada % 2 == 0) {
				quantidade++;
			}
		}
		
		System.out.printf("%d valores pares\n", quantidade);
		
		scan.close();
	}
}
