#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//1 - Struct representando os discentes(mesma ordem do csv)
struct st_aluno{
    char matricula[13];
    char nome_discente[500];
    int ano_ingresso;
    int periodo_ingresso;
    char tipo_discente[50];
    char status_discente[50];
    char nivel_ensino[50];
    char nome_curso[200];
    char modalidade_educacao[50];
    char nome_unidade[200];
    char nome_unidade_gestora[200];
};

//Função auxiliar necessária para conseguir converter os dados int e deixar a saída das strings mais limpas
void limparAspas(char *str){
    int i = 0, j = 0;
    while(str[i] != '\0'){
        if(str[i] != '"'){ //Se não for aspas, copia o caractere
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0'; //Finaliza a string limpa
}

//2 - Função que lê o arquivo csv(lista de alunos) e organiza em um array de alunos(struct st_alunos)
int organizarDiscentes(FILE *file, struct st_aluno *alunos){
    
    int contador = 0;
    char buffer[2000];
    char *token;

    //Lê o cabeçalho e se não tiver nada informa que não encontrou alunos
    if(fgets(buffer, sizeof(buffer), file) == NULL) return 0;

    //Leitura do arquivo linha por linha
    while(fgets(buffer, sizeof(buffer), file)){
        token = strtok(buffer, ",");
        int coluna = 0;
        //Atribui os valores ao vetor coluna por coluna
        while(token != NULL){
            limparAspas(token);
            switch(coluna++){
                case 0: strcpy(alunos[contador].matricula, token); break;
                case 1: strcpy(alunos[contador].nome_discente, token); break;
                case 2: alunos[contador].ano_ingresso = atoi(token); break;
                case 3: alunos[contador].periodo_ingresso = atoi(token); break;
                case 4: strcpy(alunos[contador].tipo_discente, token); break;
                case 5: strcpy(alunos[contador].status_discente, token); break;
                case 6: strcpy(alunos[contador].nivel_ensino, token); break;
                case 7: strcpy(alunos[contador].nome_curso, token); break;
                case 8: strcpy(alunos[contador].modalidade_educacao, token); break;
                case 9: strcpy(alunos[contador].nome_unidade, token); break;
                case 10: strcpy(alunos[contador].nome_unidade_gestora, token); break;
            }
            token = strtok(NULL, ",");
        }
        contador++;
    }
    return contador;
}

//3 - Função para apresentar os dados de 1 aluno
void imprimirAluno(struct st_aluno aluno){
    printf("Matrícula: %s\n", aluno.matricula);
    printf("Nome do discente: %s\n", aluno.nome_discente);
    printf("Curso: %s\n", aluno.nome_curso);
    printf("Ano de ingresso: %d\n", aluno.ano_ingresso);
    printf("Periodo de ingresso: %d\n", aluno.periodo_ingresso);
    printf("Tipo do discente: %s\n", aluno.tipo_discente);
    printf("Status do discente: %s\n", aluno.status_discente);
    printf("Nivel de ensino: %s\n", aluno.nivel_ensino);
    printf("Modalidade da educacao: %s\n", aluno.modalidade_educacao);
    printf("Unidade: %s\n", aluno.nome_unidade);
    printf("Unidade gestora: %s\n", aluno.nome_unidade_gestora);
}

//4 - Função para gravar os dados do aluno da forma organizada no arquivo
void gravarNoArquivo(const char *nomeArquivo, struct st_aluno *alunos, int qntAlunos){
    FILE *file = fopen(nomeArquivo, "w");
    for(int i = 0; i < qntAlunos; i++){
        fprintf(file, "Matrícula: %s\n", alunos[i].matricula);
        fprintf(file, "Nome do discente: %s\n", alunos[i].nome_discente);
        fprintf(file, "Curso: %s\n", alunos[i].nome_curso);
        fprintf(file, "Ano de ingresso: %d\n", alunos[i].ano_ingresso);
        fprintf(file, "Periodo de ingresso: %d\n", alunos[i].periodo_ingresso);
        fprintf(file, "Tipo do discente: %s\n", alunos[i].tipo_discente);
        fprintf(file, "Status do discente: %s\n", alunos[i].status_discente);
        fprintf(file, "Nivel de ensino: %s\n", alunos[i].nivel_ensino);
        fprintf(file, "Modalidade da educacao: %s\n", alunos[i].modalidade_educacao);
        fprintf(file, "Unidade: %s\n", alunos[i].nome_unidade);
        fprintf(file, "Unidade gestora: %s\n", alunos[i].nome_unidade_gestora);          
    }
    fclose(file);
}

//5 - Funnção principal
int main(){
    
    FILE *file = fopen("dis-csv-discentes-de-graduacao-de-2025_1.csv", "r");

    //Lê o arquivo para achar a quantiade de linhas e alocar a memória para o array
    int qntLinha = 0;
    //Testa se o arquivo existe
    if(file == NULL){
        printf("Arquivo não encotrado");
        return 1;
    }
        char c;
        while((c = fgetc(file)) != EOF){
            if(c == '\n') qntLinha++;
        }
    rewind(file);

    struct st_aluno *alunos = malloc((qntLinha+1) * sizeof(struct st_aluno));

    //Teste de erro de memória
    if(alunos == NULL){
        printf("Erro de memoria!!");
        fclose(file);
        return 1;
    }

    //Lê e organiza os discentes
    int qntAlunos = organizarDiscentes(file, alunos);
    //Imprimi 1 aluno como exemplo
    imprimirAluno(alunos[5]);
    //Grava as informações no arquivo csv
    gravarNoArquivo("discentes.txt", alunos, qntAlunos);
    
    fclose(file);
    file = NULL;
    free(alunos);

    return 0;
}