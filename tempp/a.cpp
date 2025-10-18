#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <limits>

using namespace std;

// Estrutura para representar um local de entrega
struct Local {
    int id;
    string nome;
    int coordenadaX;
    int coordenadaY;
    
    Local(int _id, string _nome, int _x, int _y) 
        : id(_id), nome(_nome), coordenadaX(_x), coordenadaY(_y) {}
};

// Estrutura para representar um veículo
struct Veiculo {
    int id;
    string nome;
    double capacidadeMaxima; // em kg
    
    Veiculo(int _id, string _nome, double _capacidade) 
        : id(_id), nome(_nome), capacidadeMaxima(_capacidade) {}
};

// Enumeração para status do pedido
enum StatusPedido {
    PENDENTE,
    EM_ENTREGA,
    ENTREGUE
};

// Estrutura para representar um pedido
struct Pedido {
    int id;
    int localEntregaId;
    double peso; // em kg
    StatusPedido status;
    
    Pedido(int _id, int _localId, double _peso) 
        : id(_id), localEntregaId(_localId), peso(_peso), status(PENDENTE) {}
};

// Classe principal do sistema de logística
class SistemaLogistica {
private:
    vector<Local> locais;
    vector<Veiculo> veiculos;
    vector<Pedido> pedidos;
    int proximoIdLocal;
    int proximoIdVeiculo;
    int proximoIdPedido;

public:
    // Construtor
    SistemaLogistica() : proximoIdLocal(1), proximoIdVeiculo(1), proximoIdPedido(1) {}
    
    // Função para cadastrar um novo local
    void cadastrarLocal() {
        string nome;
        int x, y;
        
        cout << "\n=== CADASTRO DE LOCAL ===" << endl;
        cout << "Nome do local: ";
        cin.ignore();
        getline(cin, nome);
        cout << "Coordenada X: ";
        cin >> x;
        cout << "Coordenada Y: ";
        cin >> y;
        
        locais.push_back(Local(proximoIdLocal++, nome, x, y));
        cout << "Local cadastrado com sucesso! ID: " << (proximoIdLocal - 1) << endl;
    }
    
    // Função para cadastrar um novo veículo
    void cadastrarVeiculo() {
        string nome;
        double capacidade;
        
        cout << "\n=== CADASTRO DE VEÍCULO ===" << endl;
        cout << "Nome do veículo: ";
        cin.ignore();
        getline(cin, nome);
        cout << "Capacidade máxima (kg): ";
        cin >> capacidade;
        
        veiculos.push_back(Veiculo(proximoIdVeiculo++, nome, capacidade));
        cout << "Veículo cadastrado com sucesso! ID: " << (proximoIdVeiculo - 1) << endl;
    }
    
    // Função para cadastrar um novo pedido
    void cadastrarPedido() {
        int localId;
        double peso;
        
        cout << "\n=== CADASTRO DE PEDIDO ===" << endl;
        
        // Mostrar locais disponíveis
        if (locais.empty()) {
            cout << "Nenhum local cadastrado! Cadastre um local primeiro." << endl;
            return;
        }
        
        cout << "Locais disponíveis:" << endl;
        for (const auto& local : locais) {
            cout << "ID: " << local.id << " - " << local.nome 
                 << " (" << local.coordenadaX << ", " << local.coordenadaY << ")" << endl;
        }
        
        cout << "ID do local de entrega: ";
        cin >> localId;
        
        // Verificar se o local existe
        bool localExiste = false;
        for (const auto& local : locais) {
            if (local.id == localId) {
                localExiste = true;
                break;
            }
        }
        
        if (!localExiste) {
            cout << "Local não encontrado!" << endl;
            return;
        }
        
        cout << "Peso do pedido (kg): ";
        cin >> peso;
        
        pedidos.push_back(Pedido(proximoIdPedido++, localId, peso));
        cout << "Pedido cadastrado com sucesso! ID: " << (proximoIdPedido - 1) << endl;
    }
    
    // Função para converter status em string
    string statusParaString(StatusPedido status) {
        switch (status) {
            case PENDENTE: return "Pendente";
            case EM_ENTREGA: return "Em Entrega";
            case ENTREGUE: return "Entregue";
            default: return "Desconhecido";
        }
    }
    
    // Função para listar todos os dados
    void listarDados() {
        cout << "\n=== LISTAGEM DE DADOS ===" << endl;
        
        // Listar locais
        cout << "\n--- LOCAIS ---" << endl;
        if (locais.empty()) {
            cout << "Nenhum local cadastrado." << endl;
        } else {
            for (const auto& local : locais) {
                cout << "ID: " << local.id << " | Nome: " << local.nome 
                     << " | Coordenadas: (" << local.coordenadaX << ", " << local.coordenadaY << ")" << endl;
            }
        }
        
        // Listar veículos
        cout << "\n--- VEÍCULOS ---" << endl;
        if (veiculos.empty()) {
            cout << "Nenhum veículo cadastrado." << endl;
        } else {
            for (const auto& veiculo : veiculos) {
                cout << "ID: " << veiculo.id << " | Nome: " << veiculo.nome 
                     << " | Capacidade: " << veiculo.capacidadeMaxima << " kg" << endl;
            }
        }
        
        // Listar pedidos
        cout << "\n--- PEDIDOS ---" << endl;
        if (pedidos.empty()) {
            cout << "Nenhum pedido cadastrado." << endl;
        } else {
            for (const auto& pedido : pedidos) {
                // Encontrar nome do local
                string nomeLocal = "Local não encontrado";
                for (const auto& local : locais) {
                    if (local.id == pedido.localEntregaId) {
                        nomeLocal = local.nome;
                        break;
                    }
                }
                
                cout << "ID: " << pedido.id << " | Local: " << nomeLocal 
                     << " | Peso: " << pedido.peso << " kg | Status: " 
                     << statusParaString(pedido.status) << endl;
            }
        }
    }
    
    // Função para calcular distância euclidiana entre dois pontos
    double calcularDistancia(int x1, int y1, int x2, int y2) {
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
    
    // Função para encontrar o local por ID
    Local* encontrarLocal(int id) {
        for (auto& local : locais) {
            if (local.id == id) {
                return &local;
            }
        }
        return nullptr;
    }
    
    // Função para simular entrega com roteamento
    void simularEntrega() {
        cout << "\n=== SIMULAÇÃO DE ENTREGA ===" << endl;
        
        if (veiculos.empty()) {
            cout << "Nenhum veículo cadastrado!" << endl;
            return;
        }
        
        if (pedidos.empty()) {
            cout << "Nenhum pedido cadastrado!" << endl;
            return;
        }
        
        // Mostrar veículos disponíveis
        cout << "Veículos disponíveis:" << endl;
        for (const auto& veiculo : veiculos) {
            cout << "ID: " << veiculo.id << " - " << veiculo.nome 
                 << " (Capacidade: " << veiculo.capacidadeMaxima << " kg)" << endl;
        }
        
        int veiculoId;
        cout << "Selecione o ID do veículo: ";
        cin >> veiculoId;
        
        // Encontrar o veículo
        Veiculo* veiculoSelecionado = nullptr;
        for (auto& veiculo : veiculos) {
            if (veiculo.id == veiculoId) {
                veiculoSelecionado = &veiculo;
                break;
            }
        }
        
        if (!veiculoSelecionado) {
            cout << "Veículo não encontrado!" << endl;
            return;
        }
        
        // Filtrar pedidos pendentes que cabem no veículo
        vector<int> pedidosViaveis;
        double pesoTotal = 0;
        
        for (int i = 0; i < pedidos.size(); i++) {
            if (pedidos[i].status == PENDENTE && 
                pesoTotal + pedidos[i].peso <= veiculoSelecionado->capacidadeMaxima) {
                pedidosViaveis.push_back(i);
                pesoTotal += pedidos[i].peso;
            }
        }
        
        if (pedidosViaveis.empty()) {
            cout << "Nenhum pedido viável para este veículo!" << endl;
            return;
        }
        
        cout << "\nPedidos selecionados para entrega:" << endl;
        for (int idx : pedidosViaveis) {
            Local* local = encontrarLocal(pedidos[idx].localEntregaId);
            cout << "Pedido ID: " << pedidos[idx].id << " - Local: " 
                 << (local ? local->nome : "Desconhecido") 
                 << " - Peso: " << pedidos[idx].peso << " kg" << endl;
        }
        
        // Algoritmo de roteamento simples - vizinho mais próximo
        cout << "\n=== ROTA CALCULADA ===" << endl;
        
        // Posição inicial (depósito) - assumindo coordenadas (0, 0)
        int posAtualX = 0, posAtualY = 0;
        double distanciaTotal = 0;
        
        vector<bool> visitado(pedidosViaveis.size(), false);
        vector<int> rota;
        
        cout << "Iniciando no depósito (0, 0)" << endl;
        
        // Algoritmo do vizinho mais próximo
        for (int i = 0; i < pedidosViaveis.size(); i++) {
            int proximoIdx = -1;
            double menorDistancia = numeric_limits<double>::max();
            
            // Encontrar o pedido não visitado mais próximo
            for (int j = 0; j < pedidosViaveis.size(); j++) {
                if (!visitado[j]) {
                    int pedidoIdx = pedidosViaveis[j];
                    Local* local = encontrarLocal(pedidos[pedidoIdx].localEntregaId);
                    
                    if (local) {
                        double distancia = calcularDistancia(posAtualX, posAtualY, 
                                                           local->coordenadaX, local->coordenadaY);
                        if (distancia < menorDistancia) {
                            menorDistancia = distancia;
                            proximoIdx = j;
                        }
                    }
                }
            }
            
            if (proximoIdx != -1) {
                visitado[proximoIdx] = true;
                int pedidoIdx = pedidosViaveis[proximoIdx];
                Local* local = encontrarLocal(pedidos[pedidoIdx].localEntregaId);
                
                if (local) {
                    cout << "-> " << local->nome << " (" << local->coordenadaX 
                         << ", " << local->coordenadaY << ") - Distância: " 
                         << fixed << setprecision(2) << menorDistancia << endl;
                    
                    distanciaTotal += menorDistancia;
                    posAtualX = local->coordenadaX;
                    posAtualY = local->coordenadaY;
                    rota.push_back(pedidoIdx);
                    
                    // Atualizar status do pedido
                    pedidos[pedidoIdx].status = ENTREGUE;
                }
            }
        }
        
        cout << "\nDistância total percorrida: " << fixed << setprecision(2) 
             << distanciaTotal << " unidades" << endl;
        cout << "Peso total transportado: " << pesoTotal << " kg" << endl;
        cout << "Entrega simulada com sucesso!" << endl;
    }
    
    // Função para exibir o menu principal
    void exibirMenu() {
        cout << "\n========================================" << endl;
        cout << "   SISTEMA DE LOGÍSTICA DE ENTREGA" << endl;
        cout << "========================================" << endl;
        cout << "1. Cadastrar Local" << endl;
        cout << "2. Cadastrar Veículo" << endl;
        cout << "3. Cadastrar Pedido" << endl;
        cout << "4. Listar Dados" << endl;
        cout << "5. Simular Entrega" << endl;
        cout << "0. Sair" << endl;
        cout << "========================================" << endl;
        cout << "Escolha uma opção: ";
    }
    
    // Função principal para executar o sistema
    void executar() {
        int opcao;
        
        cout << "Bem-vindo ao Sistema de Logística de Entrega!" << endl;
        
        do {
            exibirMenu();
            cin >> opcao;
            
            switch (opcao) {
                case 1:
                    cadastrarLocal();
                    break;
                case 2:
                    cadastrarVeiculo();
                    break;
                case 3:
                    cadastrarPedido();
                    break;
                case 4:
                    listarDados();
                    break;
                case 5:
                    simularEntrega();
                    break;
                case 0:
                    cout << "Encerrando o sistema. Obrigado!" << endl;
                    break;
                default:
                    cout << "Opção inválida! Tente novamente." << endl;
                    break;
            }
            
            if (opcao != 0) {
                cout << "\nPressione Enter para continuar...";
                cin.ignore();
                cin.get();
            }
            
        } while (opcao != 0);
    }
};

// Função principal
int main() {
    SistemaLogistica sistema;
    sistema.executar();
    return 0;
}