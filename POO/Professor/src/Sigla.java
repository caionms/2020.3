public class Sigla {
    private String sigla;

    //Construtor
    Sigla(String sigla){
        this.sigla = sigla;
    }
    Sigla(int id){
        this.setSigla(id);
    }

    public void setSigla(int depa){ //definir a Sigla pelo número
        if(depa == 1){
            this.sigla = "DCC";
        }
        else if(depa == 2){
            this.sigla = "DMT";
        }
        else if(depa == 3){
            this.sigla = "DFI";
        }
        else if(depa == 4){
            this.sigla = "DMU";
        }
    }

    public void setSigla(String sigla){ //definir sigla pela própria sigla
        this.sigla = sigla;
    }

    public String getSigla() {
        return sigla;
    }
}
