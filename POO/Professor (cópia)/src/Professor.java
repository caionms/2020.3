public class Professor {
    private String nome;
    private String nomeDepartamento;
    private String dataAdmissao;
    private String numRegistro;

    Professor(String nome, String nomeDepartamento, String dataAdmissao, String numRegistro){
        this.nome = nome;
        this.setDepartamento(nomeDepartamento);
        this.dataAdmissao = dataAdmissao;
        this.numRegistro = numRegistro;
    }

    Professor(String nome, String nomeDepartamento, String numRegistro){
        this.nome = nome;
        this.setDepartamento(nomeDepartamento);
        this.dataAdmissao = "01/01/2009";
        this.numRegistro = numRegistro;
    }

    Professor(String nome, int idDepartamento, String dataAdmissao, String numRegistro){
        this.nome = nome;
        this.setDepartamento(idDepartamento);
        this.dataAdmissao = dataAdmissao;
        this.numRegistro = numRegistro;
    }

    Professor(String nome, int idDepartamento, String numRegistro){
        this.nome = nome;
        this.setDepartamento(idDepartamento);
        this.dataAdmissao = "01/01/2009";
        this.numRegistro = numRegistro;
    }

    public enum Departamentoe {
        DCC("Departamento de Ciência da Computação"),
        DMT("Departamento de Matemática"),
        DFI("Departamento de Física"),
        DMU("Departamento de Música");

        private String dep;

        Departamentoe(String departamento){
            this.dep = departamento;
        }

        public String getDepartamentoe() {
            return dep;
        }
    }

    public void setDepartamento(String dep){
        this.nomeDepartamento = dep;
    }

    public void setDepartamento(int depa){
        Departamentoe myDep;
        if(depa == 1){
            myDep = Departamentoe.DCC;
            this.nomeDepartamento = myDep.dep;
        }
        else if(depa == 2){
            myDep = Departamentoe.DMT;
            this.nomeDepartamento = myDep.dep;
        }
        else if(depa == 3){
            myDep = Departamentoe.DFI;
            this.nomeDepartamento = myDep.dep;
        }
        else if(depa == 4){
            myDep = Departamentoe.DMU;
            this.nomeDepartamento = myDep.dep;
        }
    }

    public void imprimir(){
        System.out.println("Nome: " + getNome() + " Departamento: " + getNomeDepartamento() + " Admissão :" + getDataAdmissao() + " Resgistro: " + getNumRegistro());
    }

    public String getNome() {
        return nome;
    }

    public String getNomeDepartamento() {
        return nomeDepartamento;
    }

    public String getDataAdmissao() {
        return dataAdmissao;
    }

    public String getNumRegistro() {
        return numRegistro;
    }
}

