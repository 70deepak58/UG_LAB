#include<math.h>
#include<GL/glut.h>  
/*
Three linker to be added in DevCpp
File->New->Projects->consoleapplication     

Projects->right_click(Project option)->parameres->linkers


-lopengl32
-lfreeglut
-lglu32

*/

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);        // set display-window color to white
	glMatrixMode(GL_PROJECTION);             // set projection parameters
	gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void lineSegment(void)
{
//	glClear(GL_COLOR_BUFFER_BIT);            // clear display window
//	glColor3f(0.0, 0.4, 0.2);                // set line segment color to green
//		glBegin(GL_LINES);                       // specify line-segment geometry
//			glVertex2f(100, 100);
//			glVertex2f(400, 400);
//		glEnd();
//	glFlush();                               // process all OpenGL routines as quickly as possible	
//				
}

int main(int argc, char ** argv)
{
	glutInit(&argc, argv);                        // initialize GLUT
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  // set display mode
	glutInitWindowPosition(50, 100);              // set top-left display window position
	glutInitWindowSize(800, 600);                 // set display window width and height
	glutCreateWindow("A Line");                    // creat display window
	
	init();                                       // execute initialization procedure
	glutDisplayFunc(lineSegment);                 //Send graphics to display window
	glutMainLoop();                               // display everything and wait
}