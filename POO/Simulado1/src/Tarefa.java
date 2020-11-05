public class Tarefa {
    private String descricao;
    private float numeroDeHora;
    private String desenvolvedor;
    private String status;

    Tarefa(String descricao, String desenvolvedor){
        this.descricao = descricao;
        this.numeroDeHora = 0;
        this.desenvolvedor = desenvolvedor;
        this.setStatus(this.desenvolvedor);
    }

    Tarefa(String descricao){
        this.descricao = descricao;
        this.numeroDeHora = 0;
        this.desenvolvedor = "Não instanciado";
        this.setStatus(this.desenvolvedor);
    }

    public enum Statuse {
        Status1("iniciada"),
        Status2("delegada"),
        Status3("finalizada");

        private String sta;

        Statuse(String status){
            this.sta = status;
        }

        public String getStatuse() {
            return sta;
        }
    }

    public void setStatus(String desenvolvedor){
        Statuse mySta;
        if(desenvolvedor == "Não instanciado"){
            mySta = Statuse.Status1;
            this.status = mySta.sta;
        }
        else{
            mySta = Statuse.Status2;
            this.status = mySta.sta;
        }
    }
    public void setStatus(float numeroDeHora){
        Statuse mySta;
        mySta = Statuse.Status3;
        this.status = mySta.sta;
    }

    public void finalizarTarefa(float numeroDeHora){
        this.setStatus(numeroDeHora);
        this.numeroDeHora = numeroDeHora;
    }

    public String getStatus(){
        return this.status;
    }

    public float getNumeroDeHora(){
        return numeroDeHora;
    }
}