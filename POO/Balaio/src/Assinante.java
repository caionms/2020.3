public class Assinante {
    private String cpf;
    private String nome;
    private String endereco;
    private String numero;
    private Anuncio[] anuncios;

    //Construtor da classe
    Assinante(String cpf, String nome, String endereco, String numero, Anuncio[] anuncios){
        this.cpf = cpf;
        this.nome = nome;
        this.endereco = endereco;
        this.setNumero(numero);
        this.anuncios = anuncios;
    }
    Assinante(String cpf, String nome, String endereco, String numero){
        this(cpf,nome,endereco,numero,null);
    }

    public void setNumero(String numero) { //adiciona o ddd caso o número não tenha
        if(numero.length() == 9 || numero.length() == 8) {
            this.numero = "71" + numero;
        }
        else{
            this.numero = numero;
        }
    }

    public String consultarAssi(String info){ //testa pelo nome e pelo número com e sem ddd, sem algum for igual retorna os dados
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

    public void setCpf(String cpf){
        this.cpf = cpf;
    }

    public void setNome(String nome){
        this.nome = nome;
    }

    public void setEndereco(String endereco){
        this.endereco = endereco;
    }

    public void setAnuncios(Anuncio[] anuncios){
        this.anuncios = anuncios;
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

    public Anuncio[] getAnuncios() {
        return anuncios;
    }
}
