import java.util.Scanner;

public class Uri1115 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		while(true) {
			
			int x = scan.nextInt();
			int y = scan.nextInt();
			
			if(x == 0 || y == 0) {
				break;
			}
			
			String saida = null;
			
			if(x > 0 && y > 0) saida = "primeiro";
			if(x < 0 && y > 0) saida = "segundo";
			if(x < 0 && y < 0) saida = "terceiro";
			if(x > 0 && y < 0) saida = "quarto";
			
			System.out.println(saida);
		}
		
		scan.close();
	}
}
