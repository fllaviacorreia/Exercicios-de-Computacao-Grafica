// /**
//  * Flávia de Jesus correia 06 / 02 / 2020 - Computação Gráfica - Prática 3
//  * Desenhar um pentágono regular com A( x = 200, y = 200) L = 100, (A = ponto inicial)
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
//     glColor3f(0.0, 0.0, s1.0);			//colore a linha de azul
//     glLineWidth(2);						// engrossa a linha
// 
// 	glBegin(GL_LINE_LOOP);				//liga as coordenadas , fechando o fim com o inicio
// 		glVertex2f(200, 200);	//ponto A
// 	    glVertex2f(100, 260); 	//ponto B
// 	    glVertex2f(160, 370);	//ponto C
// 	    glVertex2f(240, 370);	//ponto D
// 	    glVertex2f(300, 260);	//ponto E
// 	glEnd();
// 	
// 	glPointSize(6);
// 	glBegin(GL_POINTS);				
// 		glVertex2f(200, 200);	//ponto A
// 	    glVertex2f(100, 260); 	//ponto B
// 	    glVertex2f(160, 370);	//ponto C
// 	    glVertex2f(240, 370);	//ponto D
// 	    glVertex2f(300, 260);	//ponto E
// 	glEnd();		
// 	glFlush();
// }
// 
// void Inicializa(){
//     glutInitWindowSize(640,480); 		// Define o tamanho da janela
//     glClearColor(0.0,0.0,0.0,1.0);		// colore o fundo da tela de preto
//     glutInitWindowPosition(10,10);		// Define a posição da janela referente ao monitor
//     glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	
//     glutCreateWindow("Pentágono Regular");
// 	gluOrtho2D(0,600,600,0);			//aumenta ou diminui o plano ortogonal 2D
// }