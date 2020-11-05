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
        this.setNumero(numero);
    }

    public void setNumero(String numero) {
        if(numero.length() == 9 || numero.length() == 8) {
            this.numero = "71" + numero;
        }
        else{
            this.numero = numero;
        }
    }

    public String consultarAssi(String info){
        if(info == this.nome){
            String informacao = "";
            informacao = "CPF: " + this.cpf + " Nome: " + this.nome + " Endereço: " + this.endereco + " Número: " + this.numero;
            return informacao;
        }
        else if((info.length() == 9 || info.length() == 8)&&("71"+info).equals(this.numero)){
            String informacao = "";
            informacao = "CPF: " + this.cpf + " Nome: " + this.nome + " Endereço: " + this.endereco + " Número: " + this.numero;
            return informacao;
        }
        else if((info.length() == 11 || info.length() == 10)&&(info.equals(this.numero))){
            String informacao = "";
            informacao = "CPF: " + this.cpf + " Nome: " + this.nome + " Endereço: " + this.endereco + " Número: " + this.numero;
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

        return numero;
    }
}
