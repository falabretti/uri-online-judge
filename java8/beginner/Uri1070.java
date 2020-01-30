import java.util.Scanner;

public class Uri1070 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int entrada = scan.nextInt();
		
		for(int i = 1; i <= 6; entrada++) {
			if(entrada % 2 != 0) {
				System.out.println(entrada);
				i++;
			}
		}
		
		scan.close();
	}
}
