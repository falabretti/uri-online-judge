
public class Uri1098 {

	public static void main(String[] args) {
										
		for(double i = 0; i <= 2; i += 0.2) {
			double valor = i + 1;
			for(double j = valor; j <= valor + 2; j++) {
				
				if(i == (int) i || (i > 1.9 && i < 2.1)) {
					System.out.printf("I=%.0f J=%.0f\n", i, j);
					continue;
				}
				
				System.out.printf("I=%.1f J=%.1f\n", i, j);
				//System.out.println(i + " " + j);
			}
		}
	}
}
