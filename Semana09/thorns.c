    #include <stdio.h>

    #define MAX_LENGTH 50

    int highest(int a, int b);
    int max_score(char path[], int length, int iterador, int memo[]);

    int main(){
        int num_testes, length;
        int path_memo[MAX_LENGTH];
        char path[MAX_LENGTH + 1];

        scanf("%d", &num_testes);

        for(int i = 0; i < num_testes; i++){
            scanf("%d", &length);
            scanf(" %s", path);

            for(int j = 0; j < length; j++)
                path_memo[j] = -1;

            printf("%d\n", max_score(path, length, 0, path_memo));
        }

        return 0;
    }

    int highest(int a, int b){
        if(a > b)
            return a;
        return b;
    }

    int max_score(char path[], int length, int iterador, int memo[]){
        if(path[iterador] == '*' || iterador >= length)
            return 0;

        if(memo[iterador] != -1)
            return memo[iterador];

        if(path[iterador] == '@')
            memo[iterador] = 1 + (highest(max_score(path, length, iterador + 1, memo), max_score(path, length, iterador + 2, memo)));
        else
            memo[iterador] = (highest(max_score(path, length, iterador + 1, memo), max_score(path, length, iterador + 2, memo)));
        
        return memo[iterador];
    }