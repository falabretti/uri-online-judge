import java.util.Scanner;

public class Uri1759 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int n = scan.nextInt();
		String saida = "";
		
		for(int i = 0; i < n; i++) {
			saida = saida.concat("Ho");
			
			if(i == n - 1) saida = saida.concat("!");
			else saida = saida.concat(" ");
		}
		
		System.out.println(saida);
		
		scan.close();
	}
}
