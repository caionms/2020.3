public class Projeto {
    private String nome;
    private String nomeDoCliente;
    private Tarefa[] tarefa;
    private float valorDeHora;
    private int qtdTarefas;
    //construtor vetor zerado
    Projeto(String nome, String nomeDoCliente, float valorDeHora, int qtdTarefas){
        this.nome = nome;
        this.nomeDoCliente = nomeDoCliente;
        this.tarefa = new Tarefa[qtdTarefas];
        this.valorDeHora = valorDeHora;
    }
    Projeto(String nome, String nomeDoCliente, float valorDeHora){
        this(nome,nomeDoCliente,valorDeHora,100);
    }
    //construtor 1 tarefa no vetor
    Projeto(String nome, String nomeDoCliente, float valorDeHora, int qtdTarefas, String descricao){
        this.nome = nome;
        this.nomeDoCliente = nomeDoCliente;
        this.tarefa = new Tarefa[qtdTarefas];
        this.tarefa[0] = new Tarefa(descricao);
        this.valorDeHora = valorDeHora;
    }
    Projeto(String nome, String nomeDoCliente, float valorDeHora, String descricao){
        this(nome,nomeDoCliente,valorDeHora,100,descricao);
    }

    public void adicionarTarefa(String descricao, String desenvolvedor){
        for(int i=0;i<this.tarefa.length;i++){
            if(this.tarefa[i]==null){
                this.tarefa[i] = new Tarefa(descricao,desenvolvedor);
                return;
            }
        }
        System.out.println("Projeto cheio.");
        return;
    }
    public void adicionarTarefa(String descricao){
        for(int i=0;i<this.tarefa.length;i++){
            if(this.tarefa[i]==null){
                this.tarefa[i] = new Tarefa(descricao);
                return;
            }
        }
        System.out.println("Projeto cheio.");
        return;
    }
    public boolean testeProjetoFinalizado(){
        for(int i=0;i<this.tarefa.length;i++){
            if(this.tarefa[i]==null){
                break;
            }
            else if(this.tarefa[i].getStatus()=="iniciada" || this.tarefa[i].getStatus()=="delegada"){
                return false;
            }
        }
        return true;
    }
    public float valorTrabalhos(){
        float valorTotal = 0;
        for(int i=0;i<this.tarefa.length;i++){
            if(this.tarefa[i]!=null){
                valorTotal += this.tarefa[i].getNumeroDeHora();
            }
        }
        return valorTotal;
    }
    public void valorProjeto(String nome){
        if(this.nome == nome){
            if(this.testeProjetoFinalizado()){
                System.out.println("Projeto "+this.nome+", Cliente "+this.nomeDoCliente+", Valor "+this.valorTrabalhos()*this.valorDeHora);
            }
            else{
                System.out.println("Projeto não finalizado.");
            }
        }
        else{
            System.out.println("Projeto não encontrado.");
        }
        return;
    }
    public Tarefa getTarefa(int i){
        return this.tarefa[i];
    }
}