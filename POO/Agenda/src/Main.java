public class Main {
    public static void main(String[] args){
        Agenda a1 = new Agenda("Caio","Rua B");
        a1.adicionarContato("Marcos","12333");
        Contato c1 = new Contato("Ray","324242");
        a1.adicionarContato(c1);
        a1.adicionarContato("duda","6921");
        System.out.println(a1.listarContatos());
        a1.alterarNome("12333","Necah");
        System.out.println(a1.listarContatos());
        a1.removerContato("duda");
        a1.removerContato("12333");
        System.out.println(a1.listarContatos());
        System.out.println(a1.qtdDeContatos());

    }
}
