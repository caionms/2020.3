public class Main {
    public static void main(String[] args){
        double[] temp = {20,50,10,60,40,30};
        Array a1 = new Array(temp);
        a1.novaTemperatura(39);
        a1.novaTemperatura(41);
        a1.imprimirVetor();
        System.out.println("Temperatura máxima: " + a1.maiorElemento() + " - Temperatura mínima: " + a1.menorElemento() + " - Amplitude térmica: " + a1.amplitudeTermica() + " - Média: " + a1.mediaTemperatura());
        a1.ordenarVetor();
        a1.imprimirVetor();
        a1.removerElemento(30);
        a1.imprimirVetor();
        a1.novaTemperatura(41);
        a1.imprimirVetor();
        a1.ordenarVetor();
        a1.imprimirVetor();
        Array a2 = new Array(5);
        a2.novaTemperatura(39);
        a2.novaTemperatura(41);
        a2.novaTemperatura(39);
        a2.novaTemperatura(41);
        a2.novaTemperatura(39.55);
        a2.novaTemperatura(2.5);
        a2.imprimirVetor();
        System.out.println("Temperatura máxima: " + a2.maiorElemento() + " - Temperatura mínima: " + a2.menorElemento() + " - Amplitude térmica: " + a2.amplitudeTermica() + " - Média: " + a2.mediaTemperatura());
        a2.ordenarVetor();
        a2.imprimirVetor();
        a2.removerElemento(39);
        a2.imprimirVetor();
    }
}
