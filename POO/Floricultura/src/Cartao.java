public class Cartao {
    private Destinatario dest;
    private String emissario;
    private String mensagem;
    private String horarioDeEntrega;
    private double custo;

    //Construtor
    public Cartao(Destinatario dest, String emissario, String mensagem, String horarioDeEntrega, double custo){
        this.dest = dest;
        this.emissario = emissario;
        this.mensagem = mensagem;
        this.horarioDeEntrega = horarioDeEntrega;
        this.custo = custo;
    }
    public Cartao(String nome, String endereco, String emissario, String mensagem, String horarioDeEntrega, double custo){
        this.dest = new Destinatario(nome, endereco);
        this.emissario = emissario;
        this.mensagem = mensagem;
        this.horarioDeEntrega = horarioDeEntrega;
        this.custo = custo;
    }
    public Cartao(Destinatario dest, String emissario, String mensagem, double custo){
        this.dest = dest;
        this.emissario = emissario;
        this.mensagem = mensagem;
        this.horarioDeEntrega = "0000";
        this.custo = custo;
    }
    public Cartao(String nome, String endereco, String emissario, String mensagem, double custo){
        this.dest = new Destinatario(nome, endereco);
        this.emissario = emissario;
        this.mensagem = mensagem;
        this.horarioDeEntrega = "0000";
        this.custo = custo;
    }

    public void atualizarHorario(String horarioDeEntrega){
        this.horarioDeEntrega = horarioDeEntrega;
    }

    public void mostrarCartao(){
        if(this.horarioDeEntrega.length() == 4){
            System.out.println("Nome do destinatário: " + this.dest.getNome() + " / Endereço do destinatário: " + this.dest.getEndereco() + " / Nome do emissário: " + this.emissario + " / Mensagem: " + this.mensagem + " / Horário de Entrega: " + this.horarioDeEntrega.substring(0,2) + ":" + this.horarioDeEntrega.substring(2) + "h / Custo: " + this.custo);
        }
        else{
            System.out.println("Nome do destinatário: " + this.dest.getNome() + " / Endereço do destinatário: " + this.dest.getEndereco() + " / Nome do emissário: " + this.emissario + " / Mensagem: " + this.mensagem + " / Horário de Entrega: " + this.horarioDeEntrega + " / Custo: " + this.custo);
        }
    }

    public Destinatario getDest() {
        return dest;
    }

    public String getEmissario() {
        return emissario;
    }

    public String getMensagem() {
        return mensagem;
    }

    public String getHorarioDeEntrega() {
        return horarioDeEntrega;
    }

    public double getCusto() {
        return custo;
    }
}
