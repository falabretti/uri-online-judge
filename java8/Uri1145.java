import java.util.Scanner;

public class Uri1145 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int x = scan.nextInt();
		int y = scan.nextInt();
		
		for(int i = 1; i <= y; i++) {
			
			System.out.print(i);
			
			if(i % x == 0 || i == y) System.out.println();
			else System.out.print(" ");			
		}
		
		scan.close();
	}
}
