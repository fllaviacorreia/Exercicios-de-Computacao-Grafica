// /**
//  * Flávia de Jesus correia 06 / 02 / 2020 - Computação Gráfica - Prática 3
//  * Desenhar um hexágono utilizando GL_LINE_STRIP e GL__LINE_LOOP
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
//     glColor3f(0.0, 0.0, 1.0);			//colore a linha de azul
//     glLineWidth(500.0);					// engrossa a linha
// 	glBegin(GL_LINE_STRIP);				//liga as coordenadas , mas não fecha o fim com o inicio
// 		glVertex2f(50, 80);
// 	    glVertex2f(0, 150); 
// 	    glVertex2f(50, 200);
// 	    glVertex2f(100, 200);
// 	    glVertex2f(150, 150);
//   	    glVertex2f(100, 80);
// 	glEnd();
// 	
// 		
// 	glBegin(GL_LINE_LOOP);				//liga as coordenadas , fechando o fim com o inicio
// 		glVertex2f(250, 80);
// 	    glVertex2f(200, 150); 
// 	    glVertex2f(250, 200);
// 	    glVertex2f(300, 200);
// 	    glVertex2f(350, 150);
//   	    glVertex2f(300, 80);
// 	glEnd();	
// 	glFlush();
// }
// 
// void Inicializa(){
//     glutInitWindowSize(640,480); 		// Define o tamanho da janela
//     glClearColor(0.0,0.0,0.0,1.0);		// colore o fundo da tela de preto
//     glutInitWindowPosition(10,10);		// Define a posição da janela referente ao monitor
//     glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	
//     glutCreateWindow("Pontos");
// 	gluOrtho2D(0,400,400,0);			//aumenta ou diminui o plano ortogonal 2D
// }