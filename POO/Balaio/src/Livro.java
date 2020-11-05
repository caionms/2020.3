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
        this.setMateria(materia);
        this.edicao = edicao;
        this.ano = ano;
        this.anoPublicacao = anoPublicacao;
    }

    //Overloading (sem ano)
    public Livro(String titulo, String isbn, String materia, String edicao, String ano){
        this(titulo, isbn, materia, edicao, ano,"2019");
    }

    public enum Materiase { //enum com todas as matérias aceitas
        POT("Português"),
        MAT("Matemática"),
        CIE("Ciências"),
        HIS("História"),
        GEO("Geografia"),
        ING("Inglês"),
        ESP("Espanhol");

        private String mat;

        Materiase(String materia){
            this.mat = materia;
        }

        public String getMateriase() {
            return mat;
        }
    }

    public void setMateria(String materia){ //atribui a matéria caso ela esteja presente no enum
        Materiase myMat;
        if(materia == "Matemática"){
            myMat = Materiase.MAT;
            this.materia = myMat.mat;
        }
        else if(materia == "Português"){
            myMat = Materiase.POT;
            this.materia = myMat.mat;
        }
        else if(materia == "Ciências"){
            myMat = Materiase.CIE;
            this.materia = myMat.mat;
        }
        else if(materia == "História"){
            myMat = Materiase.HIS;
            this.materia = myMat.mat;
        }
        else if(materia == "Geografia"){
            myMat = Materiase.GEO;
            this.materia = myMat.mat;
        }
        else if(materia == "Inglês"){
            myMat = Materiase.ING;
            this.materia = myMat.mat;
        }
        else if(materia == "Espanhol"){
            myMat = Materiase.ESP;
            this.materia = myMat.mat;
        }
        else{
            this.materia = null;
        }
    }

    public String consultarLivro(String info){ //testa se o titulo ou o isbn combina, caso sim retorna os dados
        String informacao = "Titulo: " + this.titulo + " ISBN: " + this.isbn + " Matéria: " + this.materia + " Edição: " + this.edicao + " Ano: " + this.ano + " Ano de Publicação: " + this.anoPublicacao;
        if(info == this.titulo || info == this.isbn){
            return informacao;
        }
        else{
            return "Livro não encontrado.";
        }
    }

    public String dadosLivro(){ //retorna apenas os dados do livro
        String informacao = "Titulo: " + this.titulo + " ISBN: " + this.isbn + " Matéria: " + this.materia + " Edição: " + this.edicao + " Ano: " + this.ano + " Ano de Publicação: " + this.anoPublicacao;
        return informacao;
    }

    public void setTitulo(String titulo){
        this.titulo = titulo;
    }

    public void setIsbn(String isbn){
        this.isbn = isbn;
    }

    public void setEdicao(String edicao){
        this.edicao = edicao;
    }

    public void setAno(String ano){
        this.ano = ano;
    }

    public void setAnoPublicacao(String anoDePublicacao){
        this.anoPublicacao = anoDePublicacao;
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
