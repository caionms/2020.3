public class Paciente {
    private String nome;
    private String cpf;
    private String endereco;
    private String email;
    private Exame[] exames;
    private int qtdElem;

    public Paciente(String nome, String cpf, String endereco, String email){
        this.nome = nome;
        this.cpf = cpf;
        this.endereco = endereco;
        this.email = email;
        this.exames = new Exame[100]; //assumi 100 como padrão, pois não está especificado na prova
        this.qtdElem = 0;
    }

    public Paciente(String nome, String cpf){
        this.nome = nome;
        this.cpf = cpf;
        this.exames = new Exame[100]; //assumi 100 como padrão, pois não está especificado na prova
        this.qtdElem = 0;
    }

    public String imprimirFichaPaciente(){ //imprime a ficha do paciente
        String informacao = "";
        informacao = "Ficha do paciente: \nNome: " + this.nome + "\nCpf: " + this.cpf;
        if(this.examesComparecidos()){
            informacao += "\nLista de exames:";
            for(int i=0;i<this.qtdElem;i++){
                if(this.exames[i].getCompareceu()){
                    informacao += "\nIdentificador: " + this.exames[i].getIdentificador() + "\nMédico responsável: " + this.exames[i].getMedicoResponsavel() + "\nCRM do médico: " + this.exames[i].getCrmDoMedico() + "\nData de realização: " + this.exames[i].getDataDeRealizacao();
                }
            }
        }
        else{
            informacao += "\nNão marcou ou não compareceu a nenhum exame.";
        }
        return informacao;
    }

    public String imprimirFichaPaciente(String crm){ //imprime a ficha do paciente com os exames do médico do crm passado
        String informacao = "";
        informacao = "Ficha do paciente: \nNome: " + this.nome + "\nCpf: " + this.cpf;
        if(this.exameCrm(crm)){
            informacao += "\nLista de exames com o médico de CRM " + crm + ":";
            for(int i=0;i<this.qtdElem;i++){
                if(this.exames[i].getCompareceu() && this.exames[i].getCrmDoMedico() == crm){
                    informacao += "\nIdentificador: " + this.exames[i].getIdentificador() + "\nMédico responsável: " + this.exames[i].getMedicoResponsavel() + "\nCRM do médico: " + this.exames[i].getCrmDoMedico() + "\nData de realização: " + this.exames[i].getDataDeRealizacao();
                }
            }
        }
        else{
            informacao += "\nNenhum atendimento até o momento";
        }
        return informacao;
    }

    public boolean exameCrm(String crm){ //adicionei esse método para testar com mais eficiencia se existe algum exame com o crm passado
        if(this.examesComparecidos()){
            for(int i=0;i<this.qtdElem;i++){
                if(this.exames[i].getCompareceu() && this.exames[i].getCrmDoMedico() == crm){
                    return true;
                }
            }
        }
        return false;
    }

    public boolean examesComparecidos(){ //testa se existe pelo menos 1 exame comparecido
        if(this.qtdElem == 0){ //paciente não fez nenhum exame
            return false;
        }
        else if(this.qtdElem == 1){
            if(this.exames[0].getCompareceu()==false) {//paciente tem 1 exame mas não compareceu
                return false;
            }
        }
        for(int i=0;i<this.qtdElem;i++){
            if(this.exames[i].getCompareceu()==true){ //paciente compareceu a pelo menos 1 exame
                return true;
            }
        }
        return false; //paciente não compareceu a nenhum exame
    }
    //caso não exista um exame com mesmo identificador e exista espaço no vetor, adiciona o novo exame passando compareceu
    public boolean adicionarNovoExame(String identificador, String medicoResponsavel, String crmDoMedico, String dataDeRealizacao, boolean compareceu, Paciente paciente){
        if(this.qtdElem == 100){
            return false;
        }
        else if(this.testeIdentificador(identificador)){
            this.exames[this.qtdElem] = new Exame(identificador,medicoResponsavel,crmDoMedico,dataDeRealizacao,compareceu,paciente);
            this.qtdElem++;
            return true;
        }
        return false;
    }

    //caso não exista um exame com mesmo identificador e exista espaço no vetor, adiciona o novo exame, sem passar compareceu
    public boolean adicionarNovoExame(String identificador, String medicoResponsavel, String crmDoMedico, String dataDeRealizacao, Paciente paciente){
        if(this.qtdElem == 100){
            return false;
        }
        else if(this.testeIdentificador(identificador)){
            this.exames[this.qtdElem] = new Exame(identificador,medicoResponsavel,crmDoMedico,dataDeRealizacao,true,paciente);
            this.qtdElem++;
            return true;
        }
        return false;
    }

    public boolean testeIdentificador(String identificador){
        for(int i=0;i<this.qtdElem;i++){
            if(this.exames[i].getIdentificador() == identificador){
                return false;
            }
        }
        return true;
    }

    public String getNome(){
        return this.nome;
    }

    public String getCpf() {
        return cpf;
    }

    public String getEndereco() {
        return endereco;
    }

    public String getEmail() {
        return email;
    }

    public Exame[] getExames(){
        return exames;
    }

    public int getQtdElem(){
        return qtdElem;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public void setExames(Exame[] exames) {
        this.exames = exames;
    }

    public void setQtdElem(int qtdElem) {
        this.qtdElem = qtdElem;
    }
}
