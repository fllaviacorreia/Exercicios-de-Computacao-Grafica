// /**
//  * Flávia de Jesus correia 25 / 02 / 2020 - Computação Gráfica - Prática 4
//  * Desenhar Polígono regular de 12 Lados (Dodecágono), sendo L = 50
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
//     
//     glColor3f(0.0, 0.0, 1.0);			//colore de azul o desenho
//     
// 	glBegin(GL_POLYGON);
// 		glVertex2f(100,100);
// 		glVertex2f(150,100);
// 		glVertex2f(193.3,125);
// 		glVertex2f(218.3,168.3);
// 		glVertex2f(218.3,218.3);
// 		glVertex2f(193.3,261.6);
// 		glVertex2f(150,286.6);
// 		glVertex2f(100,286.6);
// 		glVertex2f(56.7,261.3);
// 		glVertex2f(31.7,218);
// 		glVertex2f(31.7,168);
// 		glVertex2f(56.7,124.7);
// 	glEnd();
// 	glFlush();
// }
// 
// void Inicializa(){
//     glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	
//     glutInitWindowSize(640,480); 		// Define o tamanho da janela
//     glClearColor(1.0,1.0,1.0,1.0);		// colore o fundo da tela de branco
//     glutInitWindowPosition(10,10);		// Define a posição da janela referente ao monitor
//     glutCreateWindow("Dodecágono Regular");
// 	gluOrtho2D(0,400,400,0);			//aumenta ou diminui o plano ortogonal 2D
// }