#include <stdio.h>
#include <string.h>

char toUpperCase(char x);
void initStruct();
void printMorse(char c);

struct Morse {
    char A[3];
    char B[5];
    char C[5];
    char D[4];
    char E[2];
    char F[5];
    char G[4];
    char H[5];
    char I[3];
    char J[5];
    char K[4];
    char L[5];
    char M[3];
    char N[3];
    char O[4];
    char P[5];
    char Q[5];
    char R[4];
    char S[4];
    char T[2];
    char U[4];
    char V[5];
    char W[4];
    char X[5];
    char Y[5];
    char Z[5];

} morse;

int main(int argc, char* argv[]) {
    initStruct();

    for(int o = 1; o < argc; o++){
        for(int i = 0; argv[o][i] != '\0'; i++){
            printMorse(toUpperCase(argv[o][i]));
        }
        printf(" ");
    }
    printf("\n");
    return 0;
}

void printMorse(char c){
    switch (c) {
        case 'A':
            printf("%s ", morse.A);
            break;
        case 'B':
            printf("%s ", morse.B);
            break;
        case 'C':
            printf("%s ", morse.C);
            break;
        case 'D':
            printf("%s ", morse.D);
            break;
        case 'E':
            printf("%s ", morse.E);
            break;
        case 'F':
            printf("%s ", morse.F);
            break;
        case 'G':
            printf("%s ", morse.G);
            break;
        case 'H':
            printf("%s ", morse.H);
            break;
        case 'I':
            printf("%s ", morse.I);
            break;
        case 'J':
            printf("%s ", morse.J);
            break;
        case 'K':
            printf("%s ", morse.K);
            break;
        case 'L':
            printf("%s ", morse.L);
            break;
        case 'M':
            printf("%s ", morse.M);
            break;
        case 'N':
            printf("%s ", morse.N);
            break;
        case 'O':
            printf("%s ", morse.O);
            break;
        case 'P':
            printf("%s ", morse.P);
            break;
        case 'Q':
            printf("%s ", morse.Q);
            break;
        case 'R':
            printf("%s ", morse.R);
            break;
        case 'S':
            printf("%s ", morse.S);
            break;
        case 'T':
            printf("%s ", morse.T);
            break;
        case 'U':
            printf("%s ", morse.U);
            break;
        case 'V':
            printf("%s ", morse.V);
            break;
        case 'W':
            printf("%s ", morse.W);
            break;
        case 'X':
            printf("%s ", morse.X);
            break;
        case 'Y':
            printf("%s ", morse.Y);
            break;
        case 'Z':
            printf("%s ", morse.Z);
            break;
    }
}

void initStruct() {
    strcpy(morse.A, ".-");
    strcpy(morse.B, "-...");
    strcpy(morse.C, "-.-.");
    strcpy(morse.D, "-..");
    strcpy(morse.E, ".");
    strcpy(morse.F, "..-.");
    strcpy(morse.G, "--.");
    strcpy(morse.H, "....");
    strcpy(morse.I, "..");
    strcpy(morse.J, ".---");
    strcpy(morse.K, "-.-");
    strcpy(morse.L, ".-..");
    strcpy(morse.M, "--");
    strcpy(morse.N, "-.");
    strcpy(morse.O, "---");
    strcpy(morse.P, ".--.");
    strcpy(morse.Q, "--.-");
    strcpy(morse.R, ".-.");
    strcpy(morse.S, "...");
    strcpy(morse.T, "-");
    strcpy(morse.U, "..-");
    strcpy(morse.V, "...-");
    strcpy(morse.W, ".--");
    strcpy(morse.X, "-..-");
    strcpy(morse.Y, "-.--");
    strcpy(morse.Z, "--..");
}

char toUpperCase(char x){
    if(x >= 97 && x <= 122){
        return x-32;
    }
    else return x;
}