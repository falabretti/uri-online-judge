import java.util.Scanner;
import java.util.Arrays;

public class Uri1042 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int a = scan.nextInt();
		int b = scan.nextInt();
		int c = scan.nextInt();
		
		int lista [] = {a, b, c};
		Arrays.sort(lista);
		
		for(int i = 0; i < 3; i++) {
			System.out.println(lista[i]);
		}
		
		System.out.println();
		System.out.println(a);
		System.out.println(b);
		System.out.println(c);
	}
}
