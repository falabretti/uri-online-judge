import java.util.Scanner;

public class Uri1541 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		while(true) {
			int a = scan.nextInt();
			
			if(a == 0) break;
			
			int b = scan.nextInt();
			int c = scan.nextInt();
			
			int area = a * b;
			int terreno = area * 100 / c;
			
			int saida = (int) Math.sqrt(terreno);
			
			System.out.println(saida);
		}
		
		scan.close();
	}
}
