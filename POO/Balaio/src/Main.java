public class Main {
    public static void main(String[] args){
        Livro l1 = new Livro("The Gamer1","123","Matemática","1","6");
        Livro l2 = new Livro("The Gamer2","1234","Português","2","2","2020");
        Livro l3 = new Livro("The Gamer3","1235","Inglês","3","1","1993");
        Livro l4 = new Livro("The Gamer4","1236","Espanhol","4","6","2005");
        Livro[] vetor = {l1,l2,l3,l4};
        String teste = "The Gamer";
        System.out.println(l1.consultarLivro(teste));
        Assinante a1 = new Assinante("08916400457","Nickolas Henrique","Avenida Santa Rita","991736842", null);
        String teste2 = "991736842";
        System.out.println(a1.consultarAssi(teste2));
        Anuncio an1 = new Anuncio("Venda e Trocas", 500,true, a1,vetor);
        an1.dadosDoAnuncio();
        an1.setTroca(0);
        an1.dadosDoAnuncio();
        an1.setTitulo("Venda e Trocas - FECHADO", false);
        an1.dadosDoAnuncio();
        Anuncio an2 = new Anuncio("Venda e Trocas2", 300,false, a1,null);
        an2.dadosDoAnuncio();
    }
}
