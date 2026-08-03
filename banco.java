import java.util.Scanner;

public class banco {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        double saldo = 20;
        double saldoenvio;
        double investimento;

        String nome;
        String cpf;

        int senhaacesso;
        int senhaenvio;
        int senhaDigitada;

        boolean continuar = true;

        // Cadastro
        System.out.println("Olá, seja bem-vindo à família Dedmoney, o banco da DedSec");
        System.out.print("Por favor, nos diga seu nome: ");
        nome = scanner.nextLine();

        System.out.print("Olá " + nome + ", crie uma senha de acesso: ");
        senhaacesso = scanner.nextInt();

        System.out.print("Crie uma senha de envio: ");
        senhaenvio = scanner.nextInt();

        System.out.println("Muito obrigado por ter escolhido nosso banco!");
        System.out.println();

        // Menu
        while (continuar) {

            System.out.println("---------------------------------");
            System.out.println("Seu saldo atual é de R$" + saldo);
            System.out.println("O que deseja fazer?");
            System.out.println("1 - Enviar para alguém");
            System.out.println("2 - Investimentos");
            System.out.println("3 - Fechar banco");

            int opcao = scanner.nextInt();
            scanner.nextLine();

            switch (opcao) {

                case 1:

                    System.out.print("Digite o CPF ou ID da pessoa: ");
                    cpf = scanner.nextLine();

                    System.out.print("Quanto deseja enviar? ");
                    saldoenvio = scanner.nextDouble();

                    while (saldoenvio > saldo) {
                        System.out.println("Saldo insuficiente.");
                        System.out.print("Digite outro valor: ");
                        saldoenvio = scanner.nextDouble();
                    }

                    System.out.print("Digite sua senha de envio: ");
                    senhaDigitada = scanner.nextInt();

                    while (senhaDigitada != senhaenvio) {
                        System.out.println("Senha incorreta.");
                        System.out.print("Digite novamente: ");
                        senhaDigitada = scanner.nextInt();
                    }

                    saldo -= saldoenvio;

                    System.out.println("Dinheiro enviado para " + cpf + " com sucesso!");
                    System.out.println("Saldo restante: R$" + saldo);
                    break;

                case 2:

                    System.out.print("Quanto deseja investir? ");
                    investimento = scanner.nextDouble();

                    while (investimento > saldo) {
                        System.out.println("Saldo insuficiente.");
                        System.out.print("Digite outro valor: ");
                        investimento = scanner.nextDouble();
                    }

                    saldo -= investimento;

                    double rendimento = investimento * 0.05;
                    investimento += rendimento;

                    saldo += investimento;

                    System.out.println("Seu investimento rendeu R$" + rendimento);
                    System.out.println("Saldo atual: R$" + saldo);

                    break;

                case 3:

                    System.out.println("Tchauzinho. Até a próxima!");
                    continuar = false;
                    break;

                default:

                    System.out.println("Opção inválida.");
                    break;
            }

            System.out.println();
        }

        scanner.close();
    }
}