public class Anuncio {
    private String titulo;
    private float preco;
    private boolean ativo;
    private boolean troca;
    private Assinante assinante;
    private Livro[] livros;

    public Anuncio(String titulo, float preco, boolean ativo, Assinante assinante, Livro[] livros){
        this.titulo = titulo;
        this.preco = preco;
        this.ativo = ativo;
        this.setTroca(preco);
        this.assinante = assinante;
        this.livros = livros;
    }
    public Anuncio(String titulo,  boolean ativo, Assinante assinante, Livro[] livros){
        this(titulo,0,ativo,assinante,livros);
    }

    /*public Anuncio(String titulo, float preco, boolean ativo, Assinante assinante){
        this.titulo = titulo;
        this.preco = preco;
        this.ativo = ativo;
        this.setTroca(preco);
        this.assinante = assinante;
        this.livros = null;
    }*/

    public Anuncio(String titulo,float preco ,boolean ativo, Assinante assinante){
        this(titulo,preco,ativo,assinante,null);
    }

    public Anuncio(String titulo,  boolean ativo, Assinante assinante){
        this(titulo,0,ativo,assinante,null);
    }

    public void dadosDoAnuncio(){ //imprime os dados do anuncio
        String informacao = "";
        if(this.troca) { //caso o anuncio seja de troca, não imprime o preço
            informacao = "\nTítulo: " + this.titulo + "\nEstado: " + this.getAtivo()+ "\nTipo: " + this.getTipo();
        }
        else{ //caso o anuncio seja de venda, imprime o preço
            informacao = "\nTítulo: " + this.titulo + "\nPreço: " + this.preco + "\nEstado: " + this.getAtivo() + "\nTipo: " + this.getTipo();
        }
        System.out.println("Dados do Anúncio:" + informacao);
        if(this.livros == null){
            System.out.println("Sem livros.");
        }
        else {
            for (int i = 0; i < this.livros.length; i++) { //imprime os dados de todos os livros
                System.out.println("Livro[" + (i+1) + "]:\n" + this.livros[i].dadosLivro());
            }
        }
        System.out.println("Nome do Assinante: " + this.assinante.getNome()); //imprime o nome do assinante
    }

    public String getTipo(){ //retorna o nome do tipo, dependendo do valor no booleano
        if(this.preco == 0 || troca){
            return "Troca.";
        }
        else{
            return "Venda";
        }
    }

    public String getAtivo(){ //retorna se o anuncio esta ativo ou não, dependendo do valor do booleano
        if(ativo){
            return "Ativo.";
        }
        else{
            return "Desativado.";
        }
    }

    public String getTitulo() {
        return titulo;
    }

    public Assinante getAssinante() {
        return assinante;
    }

    public float getPreco() {
        return preco;
    }

    public Livro[] getLivros() {
        return livros;
    }

    public void setTroca(float preco){ //define o tipo do anuncio(troca ou venda) baseado no preço, caso seja 0 é troca
        if(preco == 0){
            this.troca = true;
        }
        else{
            this.troca = false;
        }
    }

    public void setAtivo(boolean ativo){
        this.ativo = ativo;
    }

    public void setTitulo(String titulo){
        this.titulo = titulo;
    }
    public void setTitulo(String titulo, boolean ativo){
        this.titulo = titulo;
        this.setAtivo(ativo);
    }

    public void setPreco(float preco){
        this.preco = preco;
        if(preco==0){
            this.setTroca(0);
        }
    }
    public void setPreco(float preco, boolean ativo){
        this.preco = preco;
        if(preco==0){
            this.setTroca(0);
        }
        this.setAtivo(ativo);
    }

    public void setTroca(boolean troca){
        this.troca = troca;
    }
    public void setTroca(boolean troca, boolean ativo){
        this.troca = troca;
        this.setAtivo(ativo);
    }

    public void setAssinante(Assinante assinante){
        this.assinante = assinante;
    }
    public void setAssinante(Assinante assinante, boolean ativo){
        this.assinante = assinante;
        this.setAtivo(ativo);
    }

    public void setLivros(Livro[] livros){
        this.livros = livros;
    }
    public void setLivros(Livro[] livros, boolean ativo){
        this.livros = livros;
        this.setAtivo(ativo);
    }
}
