import java.util.Scanner;

public class Uri1177 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int intervalo = scan.nextInt();
		int valor = 0;
		
		for(int i = 0; i < 1000; i++) {
			System.out.printf("N[%d] = %d\n", i, valor);
			valor++;
			
			if(valor == intervalo) valor = 0;
		}
		
		scan.close();
	}
}
