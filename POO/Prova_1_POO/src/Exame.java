public class Exame {
    private String identificador;
    private String medicoResponsavel;
    private String crmDoMedico;
    private String dataDeRealizacao;
    private boolean compareceu;
    private Paciente paciente;

    public Exame(String identificador, String medicoResponsavel, String crmDoMedico, String dataDeRealizacao, boolean compareceu, Paciente paciente){
        this.identificador = identificador;
        this.medicoResponsavel = medicoResponsavel;
        this.crmDoMedico = crmDoMedico;
        this.dataDeRealizacao = dataDeRealizacao;
        this.compareceu = compareceu;
        this.paciente = paciente;
    }
    public Exame(String identificador, String medicoResponsavel, String crmDoMedico, String dataDeRealizacao, Paciente paciente){
        this(identificador,medicoResponsavel,crmDoMedico,dataDeRealizacao,true,paciente);
    }

    public void setIdentificador(String identificador){
        this.identificador = identificador;
    }

    public void setCompareceu(boolean compareceu) {
        this.compareceu = compareceu;
    }

    public void setCrmDoMedico(String crmDoMedico) {
        this.crmDoMedico = crmDoMedico;
    }

    public void setDataDeRealizacao(String dataDeRealizacao) {
        this.dataDeRealizacao = dataDeRealizacao;
    }

    public void setMedicoResponsavel(String medicoResponsavel) {
        this.medicoResponsavel = medicoResponsavel;
    }

    public void setPaciente(Paciente paciente) {
        this.paciente = paciente;
    }

    public String getIdentificador(){
        return this.identificador;
    }

    public String getMedicoResponsavel(){
        return this.medicoResponsavel;
    }

    public String getCrmDoMedico(){
        return this.crmDoMedico;
    }

    public String getDataDeRealizacao(){
        return this.dataDeRealizacao;
    }

    public boolean getCompareceu(){
        return this.compareceu;
    }

    public Paciente paciente(){
        return this.paciente;
    }


}
