#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    // Coordenadas iniciais para os navios (valores definidos manualmente)
    int x_horizontal = 2, y_horizontal = 4; // Começa em (2,4)
    int x_vertical = 6, y_vertical = 1;     // Começa em (6,1)

    // Vetores para armazenar as coordenadas dos navios
    int navio_horizontal[TAMANHO_NAVIO][2];
    int navio_vertical[TAMANHO_NAVIO][2];

    // Posiciona navio horizontalmente (mesma linha, colunas diferentes)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        navio_horizontal[i][0] = x_horizontal;
        navio_horizontal[i][1] = y_horizontal + i;
    }

    // Posiciona navio verticalmente (mesma coluna, linhas diferentes)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        navio_vertical[i][0] = x_vertical + i;
        navio_vertical[i][1] = y_vertical;
    }

    // Exibe coordenadas dos navios
    printf("=== Coordenadas dos Navios no Tabuleiro ===\n\n");

    printf("Navio Horizontal (posição inicial: (%d, %d)):\n", x_horizontal, y_horizontal);
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        printf("Parte %d: (%d, %d)\n", i + 1, navio_horizontal[i][0], navio_horizontal[i][1]);
    }

    printf("\nNavio Vertical (posição inicial: (%d, %d)):\n", x_vertical, y_vertical);
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        printf("Parte %d: (%d, %d)\n", i + 1, navio_vertical[i][0], navio_vertical[i][1]);
    }

    import random

def criar_tabuleiro(tamanho=10):
    return [[0 for _ in range(tamanho)] for _ in range(tamanho)]

def exibir_tabuleiro(tabuleiro):
    for linha in tabuleiro:
        print(' '.join(str(celula) for celula in linha))

def posicionar_navio(tabuleiro, tamanho, direcao, diagonal=False):
    max_linha = len(tabuleiro)
    max_coluna = len(tabuleiro[0])

    tentativas = 0
    while tentativas < 100:
        linha = random.randint(0, max_linha - 1)
        coluna = random.randint(0, max_coluna - 1)
        coords = []

        for i in range(tamanho):
            r = linha + i if direcao in ['v', 'd1'] else linha - i if direcao == 'd2' else linha
            c = coluna + i if direcao in ['h', 'd1'] else coluna - i if direcao == 'd2' else coluna

            if 0 <= r < max_linha and 0 <= c < max_coluna and tabuleiro[r][c] == 0:
                coords.append((r, c))
            else:
                break

        if len(coords) == tamanho:
            for r, c in coords:
                tabuleiro[r][c] = 3
            return True

        tentativas += 1
    return False

def posicionar_todos_navios(tabuleiro):
    navios = [
        (4, 'h'),   # horizontal
        (3, 'v'),   # vertical
        (3, 'd1'),  # diagonal principal
        (2, 'd2')   # diagonal secundária
    ]
    for tamanho, direcao in navios:
        sucesso = posicionar_navio(tabuleiro, tamanho, direcao, diagonal=(direcao.startswith('d')))
        if not sucesso:
            print(f"Falha ao posicionar navio de tamanho {tamanho} na direção {direcao}")

   # Execução
tabuleiro = criar_tabuleiro()
posicionar_todos_navios(tabuleiro)
print("🧭 Tabuleiro Aventureiro (10x10):")
exibir_tabuleiro(tabuleiro)

    }

    def criar_matriz_vazia(tamanho):
    return [[0 for _ in range(tamanho)] for _ in range(tamanho)]

def exibir_matriz(matriz):
    for linha in matriz:
        print(" ".join(str(valor) for valor in linha))

def habilidade_cone(tamanho):
    matriz = criar_matriz_vazia(tamanho)
    meio = tamanho // 2
    for i in range(meio + 1):
        for j in range(meio - i, meio + i + 1):
            matriz[i][j] = 1
    return matriz

def habilidade_cruz(tamanho):
    matriz = criar_matriz_vazia(tamanho)
    meio = tamanho // 2
    for i in range(tamanho):
        matriz[i][meio] = 1
        matriz[meio][i] = 1
    return matriz

def habilidade_octaedro(tamanho):
    matriz = criar_matriz_vazia(tamanho)
    meio = tamanho // 2
    for i in range(tamanho):
        for j in range(tamanho):
            if abs(i - meio) + abs(j - meio) <= meio:
                matriz[i][j] = 1
    return matriz

# 🧪 Testando as habilidades com matriz 5x5
tamanho = 5

print("🧿 Habilidade: CONE")
exibir_matriz(habilidade_cone(tamanho))
print("\n➕ Habilidade: CRUZ")
exibir_matriz(habilidade_cruz(tamanho))
print("\n🔷 Habilidade: OCTAEDRO")
exibir_matriz(habilidade_octaedro(tamanho))

    // habilidadee em cone 
    0 0 1 0 0
    0 1 1 1 0
    1 1 1 1 1
    0 0 0 0 0
    0 0 0 0 0

    // habilidade em octaedro
    0 0 1 0 0
    0 1 1 1 0
    1 1 1 1 1
    0 1 1 1 0
    0 0 1 0 0

    // habilidade em cruz
    0 0 1 0 0
    0 0 1 0 0
    1 1 1 1 1
    0 0 1 0 0
    0 0 1 0 0
    
    return 0;
}
