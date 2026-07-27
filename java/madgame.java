import java.util.Scanner;

    public class madgame{
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            String adjetivo1;
            String nome1;
            String verbo1;
            String adjetivo2;
            String adjetivo3;

            System.out.print("era um dia (adjetivo) "  );
            adjetivo1 = scanner.nextLine();
            System.out.print("ate que (nome) " );
            nome1 = scanner.nextLine();
            System.out.print("ele estava (verbo) " );
            verbo1 = scanner.nextLine();
            System.out.print("entao ele sentiu (adjetivo) " );
            adjetivo2 = scanner.nextLine();
            System.out.print("e depois ficou (adjetivo) " );
            adjetivo3 = scanner.nextLine();

            System.out.println("sua historia é :");
            System.out.println("era um dia " + adjetivo1 );
            System.out.println("ate que " + nome1);
            System.out.println("estava " + verbo1);
            System.out.println("entao ele(a) sentiu " + adjetivo2);
            System.out.println("e depois ficou " + adjetivo3);
            scanner.close();

        }

    }