import java.util.Scanner;

public class Uri1038 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int codigo = scan.nextInt();
		int quantidade = scan.nextInt();
		double valores[] = {4.0, 4.5, 5.0, 2.0, 1.5};
		
		double total = valores[codigo - 1] * quantidade;
		
		System.out.printf("Total: R$ %.2f\n", total);		
	}
}
