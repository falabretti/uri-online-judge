import java.util.Scanner;

public class Uri1041 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		float x = scan.nextFloat();
		float y = scan.nextFloat();
		
		String saida = "";
		
		if(x > 0 && y > 0) {
			saida = "Q1";
		} else if(x < 0 && y > 0) {
			saida = "Q2";
		} else if(x < 0 && y < 0) {
			saida = "Q3";
		} else if(x > 0 && y < 0) {
			saida = "Q4";
		} else if(x == 0 && y == 0) {
			saida = "Origem";
		} else if(x == 0) {
			saida = "Eixo Y";
		} else if(y == 0) {
			saida = "Eixo X";
		}
		
		System.out.println(saida);
	}
}
