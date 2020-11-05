import java.util.ArrayList;

public class Agenda {
    private String nomeDoDono;
    private String endereco;
    private ArrayList<Contato> contatos = new ArrayList<Contato>();

    public Agenda(String nomeDoDono, String endereco){
        this.nomeDoDono = nomeDoDono;
        this.endereco = endereco;
        this.contatos = new ArrayList<Contato>();
    }

    public Agenda(String nomeDoDono, String endereco, ArrayList<Contato> contatos){
        this.nomeDoDono = nomeDoDono;
        this.endereco = endereco;
        this.contatos = contatos;
    }

    public void adicionarContato(Contato c){
        contatos.add(c);
    }

    public void adicionarContato(String nome, String telefone){
        Contato c = new Contato(nome,telefone);
        contatos.add(c);
    }

    //contatos.get(i) retorna um objeto contato
    public String listarContatos(){
        String informacao = "";
        for(int i=0;i<contatos.size();i++){
            informacao += "Contato " + (i+1) + ": \n" + "\tNome: " +  contatos.get(i).getNome() + "\tTelefone: " + contatos.get(i).getTelefone() + "\n";
        }
        return informacao;
    }

    public boolean removerContato(String nomeoutelefone){
        for(int i=0;i<contatos.size();i++){
            if(contatos.get(i).getNome().equalsIgnoreCase(nomeoutelefone)||contatos.get(i).getTelefone().equalsIgnoreCase(nomeoutelefone)){
                contatos.remove(contatos.get(i));
                return true;
            }
        }
        return false;
    }

    public boolean alterarNome(String telefone, String novoNome){
        for(int i=0;i<contatos.size();i++){
            if(contatos.get(i).getTelefone().equalsIgnoreCase(telefone)){
                contatos.get(i).setNome(novoNome);
                return true;
            }
        }
        return false;
    }

    public int qtdDeContatos(){
        return contatos.size();
    }

    public ArrayList<Contato> getContatos(){
        return this.contatos;
    }

    public String getNomeDoDono() {
        return nomeDoDono;
    }

    public String getEndereco() {
        return endereco;
    }
}
