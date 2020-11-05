public class Professor {
    private String nome;
    private Departamento dep;
    private String dataAdmissao;
    private String numRegistro;

    Professor(String nome, String siglaDepartamento, String dataAdmissao, String numRegistro){
        this.nome = nome;
        this.dep = new Departamento(siglaDepartamento); //cria um objeto departamento pela sigla
        this.dataAdmissao = dataAdmissao;
        this.numRegistro = numRegistro;
    }

    Professor(String nome, String siglaDepartamento, String numRegistro){
        this.nome = nome;
        this.dep = new Departamento(siglaDepartamento); //cria um objeto departamento pela sigla
        this.dataAdmissao = "01/01/2009";
        this.numRegistro = numRegistro;
    }

    Professor(String nome, int idDepartamento, String dataAdmissao, String numRegistro){
        this.nome = nome;
        this.dep = new Departamento(idDepartamento); //cria um objeto departamento pelo número
        this.dataAdmissao = dataAdmissao;
        this.numRegistro = numRegistro;
    }

    Professor(String nome, int idDepartamento, String numRegistro){
        this.nome = nome;
        this.dep = new Departamento(idDepartamento); //cria um objeto departamento pelo número
        this.dataAdmissao = "01/01/2009";
        this.numRegistro = numRegistro;
    }

    public void imprimir(){
        System.out.println("Nome: " + getNome() + " | Departamento: " + getDadosDepartamento() + " | Admissão: " + getDataAdmissao() + " | Resgistro: " + getNumRegistro());
    }

    public void mudarDepartamento(String sigla){//usa a sigla para alterar o departamento
        this.dep.setDepartamentoNome(sigla);
        this.dep.setSigla(sigla);
        this.dep.setDepartamentoNumero(sigla);
    }

    public void mudarDepartamento(int id){//usa o número para alterar o departamento
        this.dep.setDepartamentoNome(id);
        this.dep.setSigla(id);
        this.dep.setNumero(id);
    }

    public String getNome() {
        return nome;
    }

    public String getDadosDepartamento() { //retorna uma string com os dados do departamento
        return "Nome do Departamento: " + this.dep.getNome() + " / Número do Departamento: " + this.dep.getNumero()  + " / Sigla do Departamento: " + this.dep.getSigla().getSigla();
    }

    public String getDataAdmissao() {
        return dataAdmissao;
    }

    public String getNumRegistro() {
        return numRegistro;
    }
}
