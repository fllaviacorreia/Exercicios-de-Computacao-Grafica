/**
 * Fl�via de Jesus correia 26 / 02 / 2020 - Computa��o Gr�fica - Pr�tica 4
 * Construir Pir�mide Regular. Condi��es:
 � 								Lados iguais;
 �								L = 150;
 �								Fundo branco;
 �								Linhas azuis.
 */

#include <GL/glut.h>
#include <stdio.h>

void Inicializa();
void Desenha();

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    Inicializa();
	glutDisplayFunc(Desenha);
	glutMainLoop();
}

void Desenha(){
    glClear(GL_COLOR_BUFFER_BIT);
    
    glColor3f(1.0, 0.0, 0.0);			//colore de preto o desenho
    
	glBegin(GL_TRIANGLES);			// primeiro quadrado
		glVertex2f(100,100);
		glVertex2f(25,267.71);
		glVertex2f(175,267.71);
	glEnd();
	
	glFlush();
}

void Inicializa(){
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	
    glutInitWindowSize(640,520); 		// Define o tamanho da janela
    glClearColor(1,1,1,1);		// colore o fundo da tela de branco
    glutInitWindowPosition(10,10);		// Define a posi��o da janela referente ao monitor
    glutCreateWindow("Cubo Regular");	//Define um t�tulo para o frame
	gluOrtho2D(0,400,400,0);			//aumenta ou diminui o plano ortogonal 2D
}