public class Main{
        public static void main(String[] args){
            Destinatario d1 = new Destinatario("Charli","Rua St Efigenia");
            Cartao c1 = new Cartao(d1,"Necah","Vem x1 lixo",30);
            c1.mostrarCartao();
            c1.atualizarHorario("1220");
            c1.mostrarCartao();
            Cartao c2 = new Cartao("Neto","Rua b","Carlos","teu cu é meu","treze horas e doze minutos",250.30);
            c2.mostrarCartao();
        }
}
