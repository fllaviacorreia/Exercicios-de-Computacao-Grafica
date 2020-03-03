// #include<gl/glut.h>
// 
// void inicializa(void);
// void display(void);
// void desenha(void);
// 
// //Programa Principal (podemos simplificar...)
// int main(int argc, char** argv){
// 	glutInit(&argc, argv);
// 	 
	// ativa modo de visualização de janela no OpenGL
	// *GLUT_SINGLE = É o modo mais simples possível e significa que os comandos de desenho são feitos na
	// própria janela de exibição. Poderiam ser feitos em outros planos.
	// *GLUT_RGB = ativa modo de cores RGB
// 	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
// 	
// 	glutInitWindowSize(500,500); // Tamanho da janela
// 	glutInitWindowPosition(500,200); // Posição da janela (x,y)
// 	
// 	glutCreateWindow("JanelaExemplo"); //é o comando da biblioteca GLUT que cria a janela.
// 	glutDisplayFunc(desenha); // chamada da função Desenha
// 	inicializa();
// 	glutMainLoop(); //lembrando: o programa em OpenGL fica em loop
// }
// 
// void inicializa(void){
// 	glClearColor(0.0,0.0,0.0,1.0); //Define a cor de fundo da janela - glClearColor(0.0f,0.0f,0.0f,1.0f); // para reforçar que é real
// 	gluOrtho2D (0,400,400,0);
// }
// 
// //Função call-back* chamada para fazer o desenho. *pode ser entendida como uma sub-rotina
// void desenha(void)
// {
// 	glClear(GL_COLOR_BUFFER_BIT); //Limpa a janela (buffer) de visualização
// 	glFlush(); //Executa(ou atualiza) comandos do OpenGL
// 	glColor3f (1.0f, 1.0f, 1.0f); // cor da linha
// 	
// 	glEnable(GL_POINT_SMOOTH); // Suavizar pontos
// 	glPointSize(6); // aumenta tamanho dos pontos
// 	glBegin(GL_POINTS); // para pontos
// 	glVertex2i(200,200);    // coordenadas inicial e final da linha
// 	glVertex2i(150,287); 
// 	glVertex2i(200,374);
// 	glVertex2i(300,374);
// 	glVertex2i(350,287);
// 	glVertex2i(300,200);
// 	
// 	glEnd();
// 	
// 	glBegin(GL_LINE_STRIP); // Linha Aberta
// 	glBegin(GL_LINE_LOOP); // Linha Fechada
// 	glVertex2i(200,200);  // coordenadas inicial e final da linha
// 	glVertex2i(150,287); 
// 	glVertex2i(200,374);
// 	glVertex2i(300,374);
// 	glVertex2i(350,287);
// 	glVertex2i(300,200);
// 
// 	
// 	glEnd();
// 	glFlush();
// }
// 
// OBS. Inicialmente a função Desenha "não faz nada" mas se fosse omitida
// glutCreateWindow("JanelaExemplo"); criaria uma janela que seria aberta e fechada rapidamente
// Inicializa parâmetros rendering (renderização)