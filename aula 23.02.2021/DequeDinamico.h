struct cliente{
	int codigo;
	char nome[50];
	int idade;
	char cpf[11];
};

typedef struct deque Deque;
Deque* cria_Deque();

void libera_Deque(Deque* dq);
int tamanho_Deque(Deque* dq);
int  Deque_vazio (Deque* dq);
int Deque_cheio(Deque* dq);
void consultadinamico_Deque(Deque* dq);
void consultafinal_Deque(Deque* dq);
int insereinicio_Deque(Deque* dq,struct cliente cli);
int inserefinal_Deque (Deque* dq,struct cliente cli);
int removeinicio_Deque (Deque* dq);
int removefinal_Deque (Deque* dq);