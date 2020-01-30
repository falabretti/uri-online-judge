import java.util.Scanner;

public class Uri1067 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int entrada = scan.nextInt();
		
		for(int i = 1; i <= entrada; i++) {
			if(i % 2 != 0) {
				System.out.println(i);
			}
		}
		
		scan.close();
	}
}
