public class Livro {
    private String titulo;
    private String isbn;
    private String materia;
    private String edicao;
    private String ano;
    private String anoPublicacao;

    //Construtor de classe com todas as informações
    public Livro(String titulo, String isbn, String materia, String edicao, String ano, String anoPublicacao){
        this.titulo = titulo;
        this.isbn = isbn;
        this.materia = materia;
        this.edicao = edicao;
        this.ano = ano;
        this.anoPublicacao = anoPublicacao;
    }

    //Overloading (sem ano)
    public Livro(String titulo, String isbn, String materia, String edicao, String ano){
        this( titulo, isbn, materia, edicao, ano,"2019");
    }

    public String consultarLivro(String info){
        String informacao = "Titulo: " + this.titulo + " ISBN: " + this.isbn + " Matéria: " + this.materia + " Edição: " + this.edicao + " Ano: " + this.ano + " Ano de Publicação: " + this.anoPublicacao;
        if(info == this.titulo || info == this.isbn){
            return informacao;
        }
        else{
            return "Livro não encontrado.";
        }
    }

    public String getTitulo() {
        return titulo;
    }

    public String getIsbn(){
        return isbn;
    }

    public String getMateria(){
        return materia;
    }

    public String getEdicao(){
        return edicao;
    }

    public String getAno(){
        return ano;
    }

    public String getAnoPublicacao(){
        return anoPublicacao;
    }
}
