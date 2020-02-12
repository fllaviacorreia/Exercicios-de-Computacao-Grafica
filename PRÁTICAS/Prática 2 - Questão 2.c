// /**
//  * Flávia de Jesus correia 06 / 02 / 2020 - Computação Gráfica - Prática 2
//  * Criar um ponto nas coordenadas X = 150 e Y = 200;
//  * Desenhar outro ponto nas coordenadas 200x300 e liga-los com uma linha 
//  */
// 
// #include <GL/glut.h>
// #include <stdio.h>
// 
// void Inicializa();
// void Desenha();
// 
// int main(int argc, char *argv[])
// {
//     glutInit(&argc, argv);
//     Inicializa();
// 	glutDisplayFunc(Desenha);
// 	glutMainLoop();
// }
// 
// void Desenha(){
//     glClear(GL_COLOR_BUFFER_BIT);	
//     glClearColor(0.0, 1.0, 0.0, 0.0);	
//     glPointSize(10);			 		// aumenta tamanho dos pontos
//     glColor3f(1.0, 0.0, 0.0);			// colore o ponto de vermelho
//     glEnable(GL_POINT_SMOOTH); 			// suaviza os pontos
//     glBegin(GL_POINTS); 				// para pontos
//        glVertex2f(150,200); 			// coordenadas inicial e final da linha
//        glVertex2f(200, 300); 			// coordenadas inicial e final da linha
// 	glEnd(); 
// 	
//     glColor3f(0.0, 0.0, 1.0);			//colore a linha de azul
//     glBegin(GL_LINES);
//      	glVertex2f(150, 200);
// 		glVertex2f(200, 300); 
//     glEnd();	
//     glFlush();
// }
// 
// void Inicializa(){
//     glutInitWindowSize(640,480); 		// Define o tamanho da janela
//     glClearColor(0.0,0.0,0.0,1.0);		// colore o fundo da tela de preto
//     glutInitWindowPosition(10,10);		// Define a posição da janela referente ao monitor
//     glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	
//     glutCreateWindow("Pontos e Linhas");
// 	gluOrtho2D(0,600,600,0);			//aumenta ou diminui o plano ortogonal 2D
// }