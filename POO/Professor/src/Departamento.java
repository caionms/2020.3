public class Departamento {
    private String nome;
    private int numero;
    private Sigla sigla;

    //Construtor
    Departamento(String sigla){
        this.setDepartamentoNome(sigla);
        this.setDepartamentoNumero(sigla);
        this.sigla = new Sigla(sigla);
    }
    Departamento(int numero){
        this.setDepartamentoNome(numero);
        this.numero = numero;
        this.sigla = new Sigla(numero);	
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

    public void setDepartamentoNome(String Sigla){ //define o nome do departamento através da sigla
        Departamentoe myDep;
        if(Sigla == "DCC"){
            myDep = Departamentoe.DCC;
            this.nome = myDep.dep;
        }
        else if(Sigla == "DMT"){
            myDep = Departamentoe.DMT;
            this.nome = myDep.dep;
        }
        else if(Sigla == "DFI"){
            myDep = Departamentoe.DFI;
            this.nome = myDep.dep;
        }
        else if(Sigla == "DMU"){
            myDep = Departamentoe.DMU;
            this.nome = myDep.dep;
        }
        else{
            this.nome = Sigla; //Esse caso é para a questão 4, onde o usuário pode inserir uma string para ser o nome do departamento
        }
    }

    public void setDepartamentoNome(int depa){ //define o nome do departamento através do número
        Departamentoe myDep;
        if(depa == 1){
            myDep = Departamentoe.DCC;
            this.nome = myDep.dep;
        }
        else if(depa == 2){
            myDep = Departamentoe.DMT;
            this.nome = myDep.dep;
        }
        else if(depa == 3){
            myDep = Departamentoe.DFI;
            this.nome = myDep.dep;
        }
        else if(depa == 4){
            myDep = Departamentoe.DMU;
            this.nome = myDep.dep;
        }
    }

    public void setDepartamentoNumero(String sigla){ //define o número do departamento através da sigla
        if(sigla == "DCC"){
            this.numero = 1;
        }
        else if(sigla == "DMT"){
            this.numero = 2;
        }
        else if(sigla == "DFI"){
            this.numero = 3;
        }
        else if(sigla == "DMU"){
            this.numero = 4;
        }
    }

    public void setSigla(String sigla){ //definir a sigla pela própria sigla
        this.sigla.setSigla(sigla);
    }

    public void setSigla(int id){ //definir a sigla pelo número
        this.sigla.setSigla(id);
    }

    public void setNumero(int numero) { //definir o número pelo prórpio número
        this.numero = numero;
    }

    public String getNome() {
        return nome;
    }

    public int getNumero() {
        return numero;
    }

    public Sigla getSigla() {
        return sigla;
    }
}
