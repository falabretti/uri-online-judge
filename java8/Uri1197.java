import java.util.Scanner;

public class Uri1197 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		while(scan.hasNext()) {
			int v = scan.nextInt();
			int t = scan.nextInt();
			
			System.out.println(v * t * 2);
		}
			
		scan.close();
	}
}
