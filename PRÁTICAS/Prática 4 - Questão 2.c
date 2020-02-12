// /**
//  * Fl�via de Jesus correia 12 / 02 / 2020 - Computa��o Gr�fica - Pr�tica 4
//  * Desenhar um pent�gono usando a fun��o GL_POLYGON
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
//     glColor3f(0.0, 0.0,1.0);			//colore a linha de azul
// 	glBegin(GL_POLYGON);
// 		glVertex2i(200,200);
// 		glVertex2i(400,200);
// 		glVertex2i(500,300);
// 		glVertex2i(400,400);
// 		glVertex2i(200,400);
// 		
// 		
// 	glEnd();
// 	glFlush();
// }
// 
// void Inicializa(){
//     glutInitWindowSize(640,480); 		// Define o tamanho da janela
//     glClearColor(0.0,0.0,0.0,1.0);		// colore o fundo da tela de preto
//     glutInitWindowPosition(10,10);		// Define a posi��o da janela referente ao monitor
//     glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	
//     glutCreateWindow("Pent�gono Regular");
// 	gluOrtho2D(0,600,600,0);			//aumenta ou diminui o plano ortogonal 2D
// }