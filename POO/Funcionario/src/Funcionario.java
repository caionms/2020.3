public class Funcionario {
    private String nome;
    private String endereco;
    private String telefone;
    private int salario;
    private String dataAdmissao;
    private String dataDemissao;

    Funcionario(String nome, String endereco, String telefone, int salario, String dataAdmissao, String dataDemissao){
        this.nome = nome;
        this.endereco = endereco;
        this.telefone = telefone;
        this.salario = salario;
        this.dataAdmissao = dataAdmissao;
        this.dataDemissao = dataDemissao;
    }

    Funcionario(String nome, String endereco, String telefone, int salario, String dataAdmissao){
        this.nome = nome;
        this.endereco = endereco;
        this.telefone = telefone;
        this.salario = salario;
        this.dataAdmissao = dataAdmissao;
    }

    Funcionario(String nome, String endereco, String telefone, String dataAdmissao){
        this.nome = nome;
        this.endereco = endereco;
        this.telefone = telefone;
        this.salario = 1045;
        this.dataAdmissao = dataAdmissao;
    }

    Funcionario(String nome, String endereco, String telefone, int salario){
        this.nome = nome;
        this.endereco = endereco;
        this.telefone = telefone;
        this.salario = salario;
        this.dataAdmissao = "dia de hoje";
    }

    Funcionario(String nome, String endereco, String telefone){
        this.nome = nome;
        this.endereco = endereco;
        this.telefone = telefone;
        this.salario = 1045;
        this.dataAdmissao = "dia de hoje";
    }

    public void demitirFuncionario(String dataDemissao){
        this.dataDemissao = dataDemissao;
    }

    public void demitirFuncionario(){
        this.dataDemissao = "dia de hoje";
    }

    public void promoverFuncionario(int percentualPromocao){
        this.salario = (this.salario * (100+percentualPromocao))/100;
    }

    public void promoverFuncionario(){
        this.salario = (this.salario * 103)/100;
    }

    public void imprimir(){
        String info = "Nome: " + this.nome + " Endereço: " + this.endereco + " Telefone: " + this.telefone + " Salário: " + this.salario + " Data de Admissão: " + this.dataAdmissao + " Data de Demissão: " + this.getDataDemissao();
        System.out.println(info);
    }

    public String getNome() {
        return nome;
    }

    public String getEndereco() {
        return endereco;
    }

    public String getTelefone() {
        return telefone;
    }

    public int getSalario() {
        return salario;
    }

    public String getDataAdmissao() {
        return dataAdmissao;
    }

    public String getDataDemissao() {
        return dataDemissao;
    }
}

