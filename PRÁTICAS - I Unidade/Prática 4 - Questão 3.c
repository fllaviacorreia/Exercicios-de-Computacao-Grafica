// /**
//  * Fl�via de Jesus correia 25 / 02 / 2020 - Computa��o Gr�fica - Pr�tica 4
//  * Desenhar Oct�gono Regular usando a fun��o GL_POLYGON de Lado L = 75
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
// 		glVertex2i(47,153);
// 		glVertex2i(100,100);
// 		glVertex2i(175,100);
// 		glVertex2i(228,153);
// 		glVertex2i(228,228);
// 		glVertex2i(175,281);
// 		glVertex2i(100,281);
// 		glVertex2i(47,228);
// 	glEnd();
// 	glFlush();
// }
// 
// void Inicializa(){
//     glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	
//     glutInitWindowSize(640,480); 		// Define o tamanho da janela
//     glClearColor(1.0,1.0,1.0,1.0);		// colore o fundo da tela de branco
//     glutInitWindowPosition(10,10);		// Define a posi��o da janela referente ao monitor
//     glutCreateWindow("Oct�gono Regular");
// 	gluOrtho2D(0,400,400,0);			//aumenta ou diminui o plano ortogonal 2D
// }