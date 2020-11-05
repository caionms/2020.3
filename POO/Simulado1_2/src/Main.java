public class Main {
    public static void main(String[] args){
        Projeto p1 = new Projeto("Projeto1","Caio",3,10,"Descrição 1");
        p1.valorDoProjeto("Projeto1");
        p1.getTarefas()[0].finalizarTarefa(4,"Descrição 1");
        p1.valorDoProjeto("Projeto1");
        p1.adicionarTarefa("Descrição 2","Necah");
        p1.valorDoProjeto("Projeto1");
        System.out.println(p1.getTarefas()[0].finalizarTarefa(3,"Descrição"));
        p1.valorDoProjeto("Projeto1");
        System.out.println(p1.getTarefas()[1].finalizarTarefa(3,"Descrição 2"));
        p1.valorDoProjeto("Projeto1");
        p1.valorDoProjeto("Projeto");
    }
}
