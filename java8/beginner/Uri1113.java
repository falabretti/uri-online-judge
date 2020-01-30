import java.util.Scanner;

public class Uri1113 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		while(true) {
			int x = scan.nextInt();
			int y = scan.nextInt();
			
			if(x == y) {
				break;
			}
			
			String saida = null;
			
			if(x < y) {
				saida = "Crescente";
			} else {
				saida = "Decrescente";
			}
			
			System.out.println(saida);
		}
		
		scan.close();
	}
}
