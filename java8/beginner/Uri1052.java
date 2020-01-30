import java.util.Scanner;

public class Uri1052 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		String meses[] = {"January", "February", "March", "April",
				"May", "June", "July", "August",
				"September", "October", "November", "December"};
		
		int entrada = scan.nextInt();
		
		System.out.println(meses[entrada - 1]);
	}
}
