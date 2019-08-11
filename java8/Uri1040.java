import java.util.Scanner;

public class Uri1040 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		float n1 = scan.nextFloat();
		float n2 = scan.nextFloat();
		float n3 = scan.nextFloat();
		float n4 = scan.nextFloat();
		
		float media = (float) ((n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10.0);

		System.out.printf("Media: %.1f\n", media);

		if (media >= 7) {
			System.out.println("Aluno aprovado.");
		} else if (media < 5) {
			System.out.println("Aluno reprovado.");
		} else {
			System.out.println("Aluno em exame.");

			float notaExame = scan.nextFloat();

			float mediaFinal = (float) ((notaExame + media) / 2.0);

			System.out.printf("Nota do exame: %.1f\n", notaExame);
			if (mediaFinal >= 5) {
				System.out.println("Aluno aprovado.");
			} else {
				System.out.println("Aluno reprovado.");
			}
			System.out.printf("Media final: %.1f\n", mediaFinal);
		}
	}
}
