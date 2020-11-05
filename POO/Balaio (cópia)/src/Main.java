public class Main {
    public static void main(String[] args){
        Livro l1 = new Livro("The Gamer","123","Manga","3","6");
        String teste = "The Gamer";
        System.out.println(l1.consultarLivro(teste));
        Assinante a1 = new Assinante("08916400457","Nickolas Henrique","Avenida Santa Rita","991736842");
        String teste2 = "991736842";
        System.out.println(a1.consultarAssi(teste2));
    }
}
