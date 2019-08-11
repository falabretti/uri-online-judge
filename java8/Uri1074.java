import java.util.Scanner;

public class Uri1074 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int teste = scan.nextInt();
		String saida = null;
		
		for(int i = 1; i <= teste; i++) {
			int entrada = scan.nextInt();
			
			if(entrada == 0) {
				saida = "NULL";
			} else {
				if(entrada % 2 == 0) {
					if(entrada > 0) {
						saida = "EVEN POSITIVE";
					} else {
						saida = "EVEN NEGATIVE";
					}
				} else {
					if(entrada > 0) {
						saida = "ODD POSITIVE";
					} else {
						saida = "ODD NEGATIVE";
					}
				}
			}
			
			System.out.println(saida);
		}
		
		scan.close();
	}
}
