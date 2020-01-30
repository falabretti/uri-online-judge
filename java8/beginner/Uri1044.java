import java.util.Scanner;

public class Uri1044 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int a = scan.nextInt();
		int b = scan.nextInt();
		
		if(b > a) {
			int temp = a;
			a = b;
			b = temp;			
		}
		
		if(a % b == 0) {
			System.out.println("Sao Multiplos");
		} else {
			System.out.println("Nao sao Multiplos");
		}
	}
}
