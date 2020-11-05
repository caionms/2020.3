public class Tarefa {
    private String descricao;
    private float numeroDeHoras;
    private String desenvolvedor;
    private String status;

    public Tarefa(String descricao, float numeroDeHoras, String desenvolvedor, String status){
        this.descricao = descricao;
        this.numeroDeHoras = numeroDeHoras;
        this.desenvolvedor = desenvolvedor;
        this.status = status;
    }
    public Tarefa(String descricao, String desenvolvedor){
        this.descricao = descricao;
        this.numeroDeHoras = 0;
        this.desenvolvedor = desenvolvedor;
        this.status = "delegada";
    }
    public Tarefa(String descricao){
        this.descricao = descricao;
        this.numeroDeHoras = 0;
        this.desenvolvedor = "";
        this.status = "iniciada";
    }

    public boolean finalizarTarefa(float numeroDeHoras, String descricao){
        if(this.descricao.equals(descricao)) {
            this.numeroDeHoras = numeroDeHoras;
            this.status = "finalizada";
            return true;
        }
        else{
            return false;
        }
    }

    public void setDescricao(String descricao){
        this.descricao = descricao;
    }

    public void setNumeroDeHoras(float numeroDeHoras){
        this.numeroDeHoras = numeroDeHoras;
    }

    public void setDesenvolvedor(String desenvolvedor){
        this.desenvolvedor = desenvolvedor;
        this.setStatus("delegada");
    }

    public void setStatus(String status) {
        this.status = status;
    }

    public String getDescricao(){
        return this.descricao;
    }

    public float getNumeroDeHoras() {
        return this.numeroDeHoras;
    }

    public String getDesenvolvedor() {
        return this.desenvolvedor;
    }

    public String getStatus() {
        return this.status;
    }
}
