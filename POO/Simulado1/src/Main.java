public class Main {
    public static void main(String[] args) {
        Tarefa t1 = new Tarefa("teste descri 1","Caio desenvolvedor");
        Projeto p1 = new Projeto("Projeto X","Necah cliente",10,"descri proj 0");
        p1.adicionarTarefa("deescrição 2", "pablo desenvolvedor");
        p1.getTarefa(1).finalizarTarefa(30);
        p1.valorProjeto("Projeto X");
        p1.getTarefa(0).finalizarTarefa(10);
        p1.valorProjeto("Projeto X");
    }
}
