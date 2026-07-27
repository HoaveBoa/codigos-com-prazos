import java.util.Scanner;
import java.util.ArrayList;
public class biblioteca {
   public static void main(String[] args)
    {
       Scanner scanner = new Scanner(System.in);
       System.out.println("Seja bem vindo a biblioteca teste");
       System.out.println("o que deseja fazer?");
       System.out.println("1. Adicionar um novo livro");
       System.out.println("2. Buscar um livro");
       System.out.println("3. pegar livro emprestado");
       System.out.println("4. devolver livro");
       System.out.println("5. Sair");
        int escolha = scanner.nextInt();
        switch (escolha) {
            case 1:
                System.out.println("digite o titulo do livro: ");
                String titulo = scanner.nextLine();
                System.out.println("digite o autor do livro: ");
                String autor = scanner.nextLine();
                System.out.println("digite o ano de lancamento do livro: ");
                int anolancamento = scanner.nextInt();
        
           case 2:
        System.out.println("digite o titulo do livro: ");
        String titulo = scanner.nextLine();

          case 3:
            System.out.println("qual livro deseja pegar?");
            String livro = scanner.nextLine();
            System.out.println("qual seu nome?: ");
            String nome = scanner.nextLine();
            System.out.println("qual seu numero de telefone?)");
            String telefone = scanner.nextLine();
            System.out.println("devolva daqui uma semana");
            

            case 4:
                System.out.println("qual seu nome?: ")
                String nome = scanner.nextLine();
                System.out.println("voce precisa devolver o livro " + livro );
                System.out.println("digite 'devolver' para entregar o livro");
                String devolucao = scanner.nextLine();
                if (devolucao.equals("devolver")) {
                    System.out.println("obrigado por devolver o livro " + livro);
                    System.out.println("volte sempre");
                } else {
                    System.out.println("voce nao devolveu o livro " + livro);
                    System.out.println("por favor, devolva o livro");
                }
                case 5:
                    System.out.println("obrigado pela sua preferencia");
                    break;
        }    
   }  

}
