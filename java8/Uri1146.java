import java.util.Scanner;

public class Uri1146 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		while(true) {
			int fim = scan.nextInt();
			
			if(fim == 0) break;
			
			String saida = "";
			
			for(int i = 1; i <= fim; i++) {
				saida = saida.concat(String.valueOf(i));
				
				if(i != fim) saida = saida.concat(" ");
			}
			System.out.println(saida);
		}
		
		scan.close();
	}
}
