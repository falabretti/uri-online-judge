
public class Uri1097 {

	public static void main(String[] args) {
		
		for(int i = 1; i <= 9; i += 2) {
			int valor = i + 6;
			for(int j = valor; j >= valor - 2; j--) {
				System.out.printf("I=%d J=%d\n", i, j);
			}
		}
	}
}
