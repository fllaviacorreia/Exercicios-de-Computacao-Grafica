// /**
//  * Flávia de Jesus correia 06 / 02 / 2020 - Computação Gráfica - Prática 3
//  * Desenhar um hexágono regular
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
//     glLineWidth(2);						// engrossa a linha
// 
// 	glBegin(GL_LINE_LOOP);				//liga as coordenadas , fechando o fim com o inicio
// 		glVertex2f(250, 250);
// 	    glVertex2f(200, 337); 
// 	    glVertex2f(250, 424);
// 	    glVertex2f(350, 424);
// 	    glVertex2f(400, 337);
//   	    glVertex2f(350, 250);
// 	glEnd();
// 	
// 	glPointSize(6);
// 	glBegin(GL_POINTS);				
// 		glVertex2f(250, 250);
// 	    glVertex2f(200, 337); 
// 	    glVertex2f(250, 424);
// 	    glVertex2f(350, 424);
// 	    glVertex2f(400, 337);
//   	    glVertex2f(350, 250);
// 	glEnd();		
// 	glFlush();
// }
// 
// void Inicializa(){
//     glutInitWindowSize(640,480); 		// Define o tamanho da janela
//     glClearColor(0.0,0.0,0.0,1.0);		// colore o fundo da tela de preto
//     glutInitWindowPosition(10,10);		// Define a posição da janela referente ao monitor
//     glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	
//     glutCreateWindow("Hexágono Regular");
// 	gluOrtho2D(0,600,600,0);			//aumenta ou diminui o plano ortogonal 2D
// }