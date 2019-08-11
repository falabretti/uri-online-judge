import java.util.Scanner;

public class Uri1075 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int entrada = scan.nextInt();
		
		for(int i = 1; i <= 10000; i++) {
			if(i % entrada == 2) {
				System.out.println(i);
			}
		}
		
		scan.close();
	}
}
