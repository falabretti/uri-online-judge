import java.util.Scanner;

public class Uri1142 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int linhas = scan.nextInt();
		
		for(int i = 1, cont = 1; cont <= linhas; i++) {
			
			if(i % 4 == 0) { 
				System.out.println("PUM");
				cont++;
			}
			else System.out.printf("%d ", i);
		}
		
		scan.close();
	}
}
