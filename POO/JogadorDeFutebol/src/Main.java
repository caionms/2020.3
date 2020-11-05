public class Main {

    public static void main(String[] args){
        Jogador j1 = new Jogador("Kimmich","Volante",1995,"Alemão",176,73);
        System.out.println(j1.retornarValores());
        System.out.println("Kimmich tem " + j1.calcularIdade() + " anos.");
        j1.tempoParaAposentar();
    }

}
