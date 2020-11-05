public class Assinante {
    private String cpf;
    private String nome;
    private String endereco;
    private String numero;

    //Construtor da classe
    Assinante(String cpf, String nome, String endereco, String numero){
        this.cpf = cpf;
        this.nome = nome;
        this.endereco = endereco;
        this.numero = numero;
    }

    public String consultarAssi(String info){
        if(info == this.nome){
            String informacao = "";
            if(this.numero.length() == 9 || this.numero.length() == 8){
                informacao = "CPF: " + this.cpf + " Nome: " + this.nome + " Endereço: " + this.endereco + " Número: " + "71"+this.numero;
            }
            else{
                informacao = "CPF: " + this.cpf + " Nome: " + this.nome + " Endereço: " + this.endereco + " Número: " + this.numero;
            }
            return informacao;
        }
        else if(info == this.numero){
            String informacao = "";
            if(this.numero.length() == 9 || this.numero.length() == 8){
                informacao = "CPF: " + this.cpf + " Nome: " + this.nome + " Endereço: " + this.endereco + " Número: " + "71"+this.numero;
            }
            else{
                informacao = "CPF: " + this.cpf + " Nome: " + this.nome + " Endereço: " + this.endereco + " Número: " + this.numero;
            }
            return informacao;
        }
        else{
            return "Assinante não encontrado.";
        }
    }

    public String getCpf(){

        return cpf;
    }

    public String getNome(){

        return nome;
    }

    public String getEndereco(){

        return endereco;
    }
    public String getNumero(){
        if(this.numero.length() == 9 || this.numero.length() == 8) {
            return "71" + numero;
        }
        else{
            return numero;
        }

    }
}
