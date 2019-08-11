import java.util.Scanner;

public class Uri1133 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int x = scan.nextInt();
		int y = scan.nextInt();
		int menor, maior;
		
		if(x < y) {
			menor = x;
			maior = y;
		} else {
			menor = y;
			maior = x;
		}
		
		for(int i = menor + 1; i < maior; i++) {
			if(i % 5 == 2 || i % 5 == 3) System.out.println(i);
		}
		
		scan.close();
	}
}
