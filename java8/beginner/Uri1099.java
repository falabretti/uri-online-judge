import java.util.Scanner;

public class Uri1099 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int testes = scan.nextInt();		
		
		for(int i = 1; i <= testes; i++) {
			int n1 = scan.nextInt();
			int n2 = scan.nextInt();
			int menor, maior;
			
			if(n1 < n2) {
				menor = n1;
				maior = n2;
			} else {
				menor = n2;
				maior = n1;
			}
			
			int soma = 0;
			
			for(int j = menor + 1; j < maior; j++) {
				if(j % 2 != 0) {
					soma += j;
				}
			}
			
			System.out.println(soma);
		}
		
		scan.close();
	}
}
