import java.util.Scanner;

public class Uri1071 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int x = scan.nextInt();
		int y = scan.nextInt();
		int menor, maior;
		int total = 0;
		
		if(x < y) {
			menor = x;
			maior = y;
		} else {
			menor = y;
			maior = x;
		}
		
		for(int i = menor + 1; i <= maior - 1; i++) {
			if(i % 2 != 0) {
				total += i;
			}
		}
		
		System.out.println(total);
		
		scan.close();
	}
}
