import java.util.Scanner;

public class Uri1172 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int[] x = new int[10];
		
		for(int i = 0; i < 10; i++) {
			int entrada = scan.nextInt();
			
			if(entrada <= 0) entrada = 1;
			
			x[i] = entrada;
			
			System.out.printf("X[%d] = %d\n", i, x[i]);
		}
		
		scan.close();
	}
}
