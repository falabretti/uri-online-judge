import java.util.Scanner;

public class Uri1198 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		while(scan.hasNext()) {
			long hashmat = scan.nextLong();
			long oponente = scan.nextLong();
			
			System.out.println(Math.abs(hashmat - oponente));
		}
		
		scan.close();
	}
}
