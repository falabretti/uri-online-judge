import java.util.Scanner;

public class Uri1144 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int linhas = scan.nextInt();
		
		for(int i = 1; i <= linhas; i++) {
			System.out.println(i +
					" " + (int) Math.pow(i, 2) +
					" " + (int) Math.pow(i, 3));
			System.out.println(i +
					" "+ ((int) Math.pow(i, 2) + 1) +
					" " + ((int) Math.pow(i, 3) + 1));
		}
		
		scan.close();
	}
}
