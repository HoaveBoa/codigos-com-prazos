import java.util.Scanner;
public class xaba{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("fala teu nome rapaz: ");
        String nome = scanner.nextLine();
        System.out.printf("ola " + nome);
        System.out.println(" seu nome começa com " + nome.charAt(0));
        System.out.print("voce tem quantos anos? ");
         String idade = scanner.nextLine();
        System.out.printf("entao voce tem %d anos", Integer.parseInt(idade));
        scanner.close();
    }
}
