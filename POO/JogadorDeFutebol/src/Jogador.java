public class Jogador {
    private String nome;
    private String posicao;
    private int anoDeNascimento;
    private String nacionalidade;
    private int altura;
    private int peso;

    //Construtor (entrada com todas as informações)
    Jogador(String nome, String posicao, int anoDeNascimento, String nacionalidade, int altura, int peso){
        this.nome = nome;
        this.posicao = posicao;
        this.anoDeNascimento = anoDeNascimento;
        this.nacionalidade = nacionalidade;
        this.altura = altura;
        this.peso = peso;
    }

    public String getNome(){
        return nome;
    }

    public String getPosicao(){
        return posicao;
    }

    public int getAnoDeNascimento(){
        return anoDeNascimento;
    }

    public String getNacionalidade(){
        return nacionalidade;
    }

    public int getAltura(){
        return altura;
    }

    public int getPeso(){
        return peso;
    }

    public String retornarValores(){
        String resul = getNome() + " " + getNacionalidade() + " " + getPosicao() + " " + getAltura() + " " + getAnoDeNascimento() + " " + getPeso();
        return resul;
    }

    public int calcularIdade(){
        int idade = 2020-getAnoDeNascimento();
        return idade;
    }

    public void tempoParaAposentar(){
        int aposentadoria=0;
        if(getPosicao() == "Volante" || getPosicao() == "Meio-Campo"){
            aposentadoria = 38 - calcularIdade();
        }
        else if(getPosicao() == "Defensor"){
            aposentadoria = 40 - calcularIdade();
        }
        else if(getPosicao() == "Atacante"){
            aposentadoria = 35 - calcularIdade();
        }
        System.out.println("Faltam " + aposentadoria + " anos para " + getNome() + " se aposentar.");
    }
}
