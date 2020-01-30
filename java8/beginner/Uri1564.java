import java.util.Scanner;

public class Uri1564 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		while(scan.hasNext()) {
			int n = scan.nextInt();
			
			if(n != 0) System.out.println("vai ter duas!");
			else System.out.println("vai ter copa!");
		}
		
		scan.close();
	}
}
