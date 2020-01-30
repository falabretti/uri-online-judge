import java.util.Scanner;

public class Uri1101 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		while(true) {
			int x = scan.nextInt();
			int y = scan.nextInt();
			
			if(x <= 0 || y <= 0) {
				break;
			}
			
			int menor, maior;
			
			if(x < y) {
				menor = x;
				maior = y;
			} else {
				menor = y;
				maior = x;
			}
			
			int soma = 0;
			
			for(int i = menor; i <= maior; i++ ) {
				System.out.print(i + " ");
				soma += i;
			}			
			
			System.out.printf("Sum=%d\n", soma);
			
		}
		
		scan.close();
	}
}
