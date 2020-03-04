// /**
//  * Fl�via de Jesus correia 26 / 02 / 2020 - Computa��o Gr�fica - Pr�tica 5
//  * Desenhar cubo regular com lado L = 100. Fundo amarelo e linhas pretas
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
//      glutInit(&argc, argv);
//      Inicializa();
// 		glutDisplayFunc(Desenha);
// 		glutMainLoop();
// }
// 
// void Desenha(){
//     glClear(GL_COLOR_BUFFER_BIT);
//     
//     glColor3f(1.0, 1.0, 0.0);			//colore de preto o desenho
//     
// 	glBegin(GL_LINES);			// primeiro quadrado
// 		glVertex2i(100,100);
// 		glVertex2i(200,100);
// 		
// 		glVertex2i(200,100);
// 		glVertex2i(200,200);
// 		
// 		glVertex2i(200,200);
// 		glVertex2i(100,200);
// 		
// 		glVertex2i(100,200);
// 		glVertex2i(100,100);
// 	glEnd();
// 	
// 	glBegin(GL_LINES);			// segundo quadrado
// 		glVertex2i(50,150);
// 		glVertex2i(150,150);
// 		
// 		glVertex2i(150,150);
// 		glVertex2i(150,250);
// 		
// 		glVertex2i(150,250);
// 		glVertex2i(50,250);
// 		
// 		glVertex2i(50,250);
// 		glVertex2i(50,150);
// 	glEnd();
// 	
// 	glBegin(GL_LINES);			// ligando os quadrados
// 		glVertex2i(100,100);
// 		glVertex2i(50,150);
// 		
// 		glVertex2i(200,100);
// 		glVertex2i(150,150);
// 		
// 		glVertex2i(200,200);
// 		glVertex2i(150,250);
// 		
// 		glVertex2i(100,200);
// 		glVertex2i(50,250);
// 	glEnd();
// 
// 	
// 	
// 	glFlush();
// }
// 
// void Inicializa(){
// 	   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	
//     glutInitWindowSize(640,520); 		// Define o tamanho da janela
//     glClearColor(1,1,0,1);		// colore o fundo da tela de branco
//     glutInitWindowPosition(10,10);		// Define a posi��o da janela referente ao monitor
//     glutCreateWindow("Cubo Regular");	//Define um t�tulo para o frame
// 	   gluOrtho2D(0,400,400,0);			//aumenta ou diminui o plano ortogonal 2D
// }