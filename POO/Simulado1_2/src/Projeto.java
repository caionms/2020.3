public class Projeto {
    private String nome;
    private String nomeDoCliente;
    private Tarefa[] tarefas;
    private float valorHora;

    //construtores sem tarefa
    public Projeto(String nome, String nomeDoCliente, int numeroDeTarefas, float valorHora) { //agregação forte
        this.nome = nome;
        this.nomeDoCliente = nomeDoCliente;
        this.tarefas = new Tarefa[numeroDeTarefas];
        this.valorHora = valorHora;
    }

    public Projeto(String nome, String nomeDoCliente, float valorHora) {
        this(nome, nomeDoCliente, 100, valorHora);
    }

    //construtores com 1 tarefa
    public Projeto(String nome, String nomeDoCliente, int numeroDeTarefas, float valorHora, String descricao, String desenvolvedor) {
        this.nome = nome;
        this.nomeDoCliente = nomeDoCliente;
        this.tarefas = new Tarefa[numeroDeTarefas];
        this.valorHora = valorHora;
        this.tarefas[0] = new Tarefa(descricao, desenvolvedor);
    }
    public Projeto(String nome, String nomeDoCliente, float valorHora, String descricao, String desenvolvedor) {
        this(nome,nomeDoCliente,100,valorHora,descricao,desenvolvedor);
    }
    public Projeto(String nome, String nomeDoCliente, int numeroDeTarefas, float valorHora, String descricao) {
        this.nome = nome;
        this.nomeDoCliente = nomeDoCliente;
        this.tarefas = new Tarefa[numeroDeTarefas];
        this.valorHora = valorHora;
        this.tarefas[0] = new Tarefa(descricao);
    }
    public Projeto(String nome, String nomeDoCliente, float valorHora, String descricao) {
        this(nome,nomeDoCliente,100,valorHora,descricao);
    }

    /*
    public boolean adicionarTarefa(String descricao, float numeroDeHoras, String desenvolvedor, String status){
        for (int i = 0; i < this.tarefas.length; i++) {
            if (this.tarefas[i] == null) {
                if (status.equals("iniciada")) {
                    this.tarefas[i] = new Tarefa(descricao);
                } else if (status.equals("delegada")) {
                    this.tarefas[i] = new Tarefa(descricao, desenvolvedor);
                } else {
                    this.tarefas[i] = new Tarefa(descricao, numeroDeHoras, desenvolvedor, status);
                }
                return true;
            }
        }
        return false;
    }
    */
    public boolean adicionarTarefa(String descricao, String desenvolvedor) {
        for (int i = 0; i < this.tarefas.length; i++) {
            if (this.tarefas[i] == null) {
                this.tarefas[i] = new Tarefa(descricao, desenvolvedor);
                return true;
            }
        }
        return false;
    }

    public boolean adicionarTarefa(String descricao) {
        for (int i = 0; i < this.tarefas.length; i++) {
            if (this.tarefas[i] == null) {
                this.tarefas[i] = new Tarefa(descricao);
                return true;
            }
        }
        return false;
    }

    public boolean testeProjetoFinalizado() {
        for (int i = 0; i < this.tarefas.length; i++) {
            if (this.tarefas[i] == null) {
                return true;
            } else if (!this.tarefas[i].getStatus().equals("finalizada")) {
                return false;
            }
        }
        return true;
    }

    public String valorDoProjeto(String nome) {
        float valor = 0;
        if (this.nome.equals(nome)) {
            if (this.testeProjetoFinalizado()) {
                valor = this.totalHoras() * this.valorHora;
                String informacao = "Projeto " + this.nome + ", Cliente " + this.nomeDoCliente + ", Valor R$ " + valor;
                System.out.println(informacao);
                return informacao;
            } else {
                String informacao = "Projeto não finalizado";
                System.out.println(informacao);
                return informacao;
            }
        }
        String informacao = "Projeto não encontrado";
        System.out.println(informacao);
        return informacao;
    }

    public float totalHoras() {
        float qtd = 0;
        for (int i = 0; i < this.tarefas.length; i++) {
            if (this.tarefas[i] == null) {
                break;
            }
            qtd += this.tarefas[i].getNumeroDeHoras();
        }
        return qtd;
    }

    public Tarefa[] getTarefas() {
        return tarefas;
    }
}
