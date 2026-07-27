import java.util.Scanner;
public class maercado {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int quantidade;
        double preço;
        double total;
        String produto;
        int senha1;
        int senha2;

        System.out.print("oq vc quer comprar?: ");
        produto = scanner.nextLine();
        System.out.print("quantos(as) " + produto + " vc quer?: ");
        quantidade = scanner.nextInt();
        System.out.print("qual o preço do(a) " + produto + " ?: ");
        preço = scanner.nextDouble();
        total = quantidade * preço;
        System.out.printf("o total deu: %.2f R$%n", total);
        System.out.println("digite a senha do seu cartão: ");
        senha1 = scanner.nextInt();
        System.out.println("confirme a sua senha: ");
        senha2 = scanner.nextInt();

        while (senha1 != senha2){
            System.out.println("senhas diferentes, tente novamente.");

            System.out.println("digite a senha do seu cartão: ");  
            senha1 = scanner.nextInt();

            System.out.println("confirme a sua senha: ");
            senha2 = scanner.nextInt();
        }
        System.out.println("pagamento aprovado, obrigado e volte sempre");
        
        scanner.close();
    }
}
