import java.util.Scanner;

public class Uri1180 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int n = scan.nextInt();
		
		int menor = 0;
		int pos = 0;
		
		for(int i = 0; i < n; i++) {
			int x = scan.nextInt();
			if(i == 0) menor = x;
			
			if(x < menor) {
				menor = x;
				pos = i;
			}
		}
		
		System.out.printf("Menor valor: %d\n", menor);
		System.out.printf("Posicao: %d\n", pos);
		
		scan.close();
	}
}
