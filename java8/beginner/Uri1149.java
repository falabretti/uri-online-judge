import java.util.Scanner;

public class Uri1149 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int a = -1;
		int n = 0;
		
		while(a < 0) {
			a = scan.nextInt();
		}
		while(n <= 0) {
			n = scan.nextInt();
		}
		
		int soma = a;
		
		for(int i = 1; i <= n - 1; i++) {
			soma += a + i;
		}
		
		System.out.println(soma);
		
		scan.close();
	}
}
