import java.util.Scanner;

public class Uri1060 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int quantidade = 0;
		
		for(int i = 1; i <= 6; i++) {
			double entrada = scan.nextDouble();
			
			if(entrada > 0) {
				quantidade++;
			}
		}
		
		System.out.printf("%d valores positivos\n", quantidade);
		scan.close();
	}
}
