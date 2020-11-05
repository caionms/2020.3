public class Array {
    private double[] vetor;
    private int qtdElementos;

    //Construtor
    Array(double[] vetor){
        this.vetor = vetor;
        this.qtdElementos = this.vetor.length;
    }
    Array(int tamanho){
        this.vetor = new double[tamanho];
        this.qtdElementos = 0;
    }

    public void novaTemperatura(double temp){ //modificar pra boolean
        if(this.qtdElementos < this.vetor.length){
            this.vetor[this.qtdElementos] = temp;
            this.qtdElementos++;
        }
        else{
            System.out.println("O vetor está cheio!");
        }
    }

    public void removerElemento(double temp){ //modificar pra boolean
        for (int i = 0; i < this.qtdElementos; i++) {
            if(this.vetor[i] == temp){
                this.vetor[i] = 0;
                for(int u=i;u<this.qtdElementos-1;u++){
                    this.vetor[u] = this.vetor[u+1];
                }
                this.vetor[this.qtdElementos-1] = 0;
                this.qtdElementos--;
                break;
            }
        }
    }

    public double maiorElemento(){
        double maior = this.vetor[0];
        for (int i = 1; i < this.qtdElementos; i++) {
            if(this.vetor[i] > maior){
                maior = this.vetor[i];
            }
        }
        return maior;
    }

    public double menorElemento(){
        double menor = this.vetor[0];
        for (int i = 1; i < this.qtdElementos; i++) {
            if(this.vetor[i] < menor){
                menor = this.vetor[i];
            }
        }
        return menor;
    }

    public double amplitudeTermica(){
        double amplitude = this.maiorElemento() - this.menorElemento();
        return amplitude;
    }

    public double mediaTemperatura(){
        double media = 0;
        for (int i = 0; i < this.qtdElementos; i++) {
            media += this.vetor[i];
        }
        media /= this.qtdElementos;
        return media;
    }

    public void ordenarVetor(){
        double aux = 0;
        for(int i=0;i<this.qtdElementos-1;i++){
            int menor = i;
            for(int j=i+1;j<this.qtdElementos;j++){
                if(this.vetor[j] < this.vetor[menor]){
                    menor = j;
                }
            }
            aux = this.vetor[i];
            this.vetor[i] = this.vetor[menor];
            this.vetor[menor] = aux;
        }
    }

    public void imprimirVetor(){
        for (int i = 0; i < this.qtdElementos; i++) {
            System.out.println(this.vetor[i]);
            if(i != this.qtdElementos-1){
                System.out.println(" - ");
            }
        }
    }

    public double[] getVetor() {
        return vetor;
    }

    public int getQtdElementos() {
        return qtdElementos;
    }
}
