/* ============================================================================
 **
 ** Author: Jacob Payne
 ** Author: Shannon Jones
 **
 ** CIS 367 Project 1
 ** Winter 2013
 **
 ** 3D drawing of the Weighted Companion Cube from
 ** Valve's Portal video game series
 **
 ** ========================================================================= */

#include	<stdlib.h>
#include	<C:\MinGW\include\GL\freeglut.h>
#include	<math.h>

/* Display lists for objects */
GLuint face;
GLuint heart;
GLuint corner;
GLuint middle;
GLuint line;
GLdouble radius;


/* =======================================
 * Function called to update rendering
 * ======================================= */
void DisplayFunc(void)
{
	/* Clear the buffer, clear the matrix */
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	//gl
	// ********************************************
	// draw the left face and all included objects
	glPushMatrix();
		glLoadIdentity();
		glTranslatef(0, 0, -50);
		glRotatef(-90, 0, 1, 0);
		glCallList(face);

		// Place heart
		glPushMatrix();
			// move the heart out in front of the cube face and center it
			glTranslatef(0, -1.5, 5.2);
			glRotatef(45, 0, 0, 1);
			glCallList(heart);
		glPopMatrix();

		// Bottom left corner
		glPushMatrix();
			// move the corner out in front of the cube face
			glTranslatef(-5, -5, 5.2);
			glCallList(corner);
		glPopMatrix();

		// Top left corner
		glPushMatrix();
			// move the corner out in front of the cube face
			glTranslatef(-5, 5, 5.2);
			glRotatef(270, 0, 0, 1);
			glCallList(corner);
		glPopMatrix();

		// Bottom right corner
		glPushMatrix();
			// move the corner out in front of the cube face
			glTranslatef(5, -5, 5.2);
			glRotatef(90, 0, 0, 1);
			glCallList(corner);
		glPopMatrix();

		// Top right corner
		glPushMatrix();
			// move the corner out in front of the cube face
			glTranslatef(5, 5, 5.2);
			glRotatef(180, 0, 0, 1);
			glCallList(corner);
		glPopMatrix();

		// top tiny middle cube
		glPushMatrix();
			// move the tiny middle cube out in front of the cube face
			glTranslatef(-0.5, 4, 5.2);
			glCallList(middle);
		glPopMatrix();

		// bottom tiny middle cube
		glPushMatrix();
			// move the tiny middle cube out in front of the cube face
			glTranslatef(-0.5, -5, 5.2);
			glCallList(middle);
		glPopMatrix();

		// left tiny middle cube
		glPushMatrix();
			// move the tiny middle cube out in front of the cube face
			glTranslatef(-5, -0.5, 5.2);
			glCallList(middle);
		glPopMatrix();

		// right tiny middle cube
		glPushMatrix();
			// move the tiny middle cube out in front of the cube face
			glTranslatef(4, -0.5, 5.2);
			glCallList(middle);
		glPopMatrix();

		// horizontal line to the right of the heart
		glPushMatrix();
			glLineWidth(5);
			// move the line out in front of the cube face
			glTranslatef(0, 0, 5.1);
			glCallList(line);
		glPopMatrix();

		// vertical line on top of the heart
		glPushMatrix();
			glLineWidth(5);
			// move the line out in front of the cube face
			glTranslatef(0, 0, 5.1);
			glRotatef(90, 0, 0, 1);
			glCallList(line);
		glPopMatrix();

		// horizontal line to the left of the heart
		glPushMatrix();
			glLineWidth(5);
			// move the line out in front of the cube face
			glTranslatef(-5, 0, 5.1);
			glCallList(line);
		glPopMatrix();

		// vertical line underneath the heart
		glPushMatrix();
		glLineWidth(5);
			// move the line out in front of the cube face
			glTranslatef(0, 0, 5.1);
			glRotatef(-90, 0, 0, 1);
			glCallList(line);
		glPopMatrix();

	glPopMatrix(); // end of left face display lists



	// **********************************************
	// draw the right face and all included objects
		glPushMatrix();
			glLoadIdentity();
			glTranslatef(0, 0, -50);
			glRotatef(90, 0, 1, 0);
			glCallList(face);

			// Place heart
			glPushMatrix();
				// move the heart out in front of the cube face and center it
				glTranslatef(0, -1.5, 5.2);
				glRotatef(45, 0, 0, 1);
				glCallList(heart);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Bottom left corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(-5, -5, 5.2);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Top left corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(-5, 5, 5.2);
				glRotatef(270, 0, 0, 1);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Bottom right corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(5, -5, 5.2);
				glRotatef(90, 0, 0, 1);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Top right corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(5, 5, 5.2);
				glRotatef(180, 0, 0, 1);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// top tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(-0.5, 4, 5.2);
				glCallList(middle);
			glPopMatrix();

			// bottom tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(-0.5, -5, 5.2);
				glCallList(middle);
			glPopMatrix();

			// left tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(-5, -0.5, 5.2);
				glCallList(middle);
			glPopMatrix();

			// right tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(4, -0.5, 5.2);
				glCallList(middle);
			glPopMatrix();

			// horizontal line to the right of the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(0, 0, 5.1);
				glCallList(line);
			glPopMatrix();

			// vertical line on top of the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(0, 0, 5.1);
				glRotatef(90, 0, 0, 1);
				glCallList(line);
			glPopMatrix();

			// horizontal line to the left of the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(-5, 0, 5.1);
				glCallList(line);
			glPopMatrix();

			// vertical line underneath the heart
			glPushMatrix();
			glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(0, 0, 5.1);
				glRotatef(-90, 0, 0, 1);
				glCallList(line);
			glPopMatrix();

		glPopMatrix(); // end of right face display lists


		// *******************************************
		// draw the top face and all included objects
		glPushMatrix();
			glLoadIdentity();
			glTranslatef(0, 0, -50);
			glRotatef(-90, 1, 0, 0);
			glCallList(face);

			// Place heart
			glPushMatrix();
				// move the heart out in front of the cube face and center it
				glTranslatef(0, -1.5, 5.2);
				glRotatef(45, 0, 0, 1);
				glCallList(heart);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Bottom left corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(-5, -5, 5.2);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Top left corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(-5, 5, 5.2);
				glRotatef(270, 0, 0, 1);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Bottom right corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(5, -5, 5.2);
				glRotatef(90, 0, 0, 1);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Top right corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(5, 5, 5.2);
				glRotatef(180, 0, 0, 1);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// top tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(-0.5, 4, 5.2);
				glCallList(middle);
			glPopMatrix();

			// bottom tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(-0.5, -5, 5.2);
				glCallList(middle);
			glPopMatrix();

			// left tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(-5, -0.5, 5.2);
				glCallList(middle);
			glPopMatrix();

			// right tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(4, -0.5, 5.2);
				glCallList(middle);
			glPopMatrix();

			// horizontal line to the right of the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(0, 0, 5.1);
				glCallList(line);
			glPopMatrix();

			// vertical line on top of the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(0, 0, 5.1);
				glRotatef(90, 0, 0, 1);
				glCallList(line);
			glPopMatrix();

			// horizontal line to the left of the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(-5, 0, 5.1);
				glCallList(line);
			glPopMatrix();

			// vertical line underneath the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(0, 0, 5.1);
				glRotatef(-90, 0, 0, 1);
				glCallList(line);
			glPopMatrix();

		glPopMatrix(); // end of top face display lists


		// *******************************************
		// draw the back face and all included objects
		glPushMatrix();
			glLoadIdentity();
			glTranslatef(0, 0, -50);
			glRotatef(180, 1, 0, 0);
			glCallList(face);

			// Place heart
			glPushMatrix();
				// move the heart out in front of the cube face and center it
				glTranslatef(0, -1.5, 5.2);
				glRotatef(45, 0, 0, 1);
				glCallList(heart);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Bottom left corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(-5, -5, 5.2);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Top left corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(-5, 5, 5.2);
				glRotatef(270, 0, 0, 1);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Bottom right corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(5, -5, 5.2);
				glRotatef(90, 0, 0, 1);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Top right corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(5, 5, 5.2);
				glRotatef(180, 0, 0, 1);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// top tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(-0.5, 4, 5.2);
				glCallList(middle);
			glPopMatrix();

			// bottom tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(-0.5, -5, 5.2);
				glCallList(middle);
			glPopMatrix();

			// left tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(-5, -0.5, 5.2);
				glCallList(middle);
			glPopMatrix();

			// right tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(4, -0.5, 5.2);
				glCallList(middle);
			glPopMatrix();

			// horizontal line to the right of the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(0, 0, 5.1);
				glCallList(line);
			glPopMatrix();

			// vertical line on top of the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(0, 0, 5.1);
				glRotatef(90, 0, 0, 1);
				glCallList(line);
			glPopMatrix();

			// horizontal line to the left of the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(-5, 0, 5.1);
				glCallList(line);
			glPopMatrix();

			// vertical line underneath the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(0, 0, 5.1);
				glRotatef(-90, 0, 0, 1);
				glCallList(line);
			glPopMatrix();

		glPopMatrix(); // end of back face display lists


		// *******************************************
		// draw the bottom face and all included objects
		glPushMatrix();
			glLoadIdentity();
			glTranslatef(0, 0, -50);
			glRotatef(90, 1, 0, 0);
			glCallList(face);

			// Place heart
			glPushMatrix();
				// move the heart out in front of the cube face and center it
				glTranslatef(0, -1.5, 5.2);
				glRotatef(45, 0, 0, 1);
				glCallList(heart);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Bottom left corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(-5, -5, 5.2);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Top left corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(-5, 5, 5.2);
				glRotatef(270, 0, 0, 1);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Bottom right corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(5, -5, 5.2);
				glRotatef(90, 0, 0, 1);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Top right corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(5, 5, 5.2);
				glRotatef(180, 0, 0, 1);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// top tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(-0.5, 4, 5.2);
				glCallList(middle);
			glPopMatrix();

			// bottom tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(-0.5, -5, 5.2);
				glCallList(middle);
			glPopMatrix();

			// left tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(-5, -0.5, 5.2);
				glCallList(middle);
			glPopMatrix();

			// right tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(4, -0.5, 5.2);
				glCallList(middle);
			glPopMatrix();

			// horizontal line to the right of the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(0, 0, 5.1);
				glCallList(line);
			glPopMatrix();

			// vertical line on top of the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(0, 0, 5.1);
				glRotatef(90, 0, 0, 1);
				glCallList(line);
			glPopMatrix();

			// horizontal line to the left of the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(-5, 0, 5.1);
				glCallList(line);
			glPopMatrix();

			// vertical line underneath the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(0, 0, 5.1);
				glRotatef(-90, 0, 0, 1);
				glCallList(line);
			glPopMatrix();

		glPopMatrix(); // end of bottom face display lists


		// *******************************************
		// draw the front face and all included objects
		glPushMatrix();
			glLoadIdentity();
			glTranslatef(0, 0, -50);
			glCallList(face);

			// Place heart
			glPushMatrix();
				// move the heart out in front of the cube face and center it
				glTranslatef(0, -1.5, 5.2);
				glRotatef(45, 0, 0, 1);
				glCallList(heart);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Bottom left corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(-5, -5, 5.2);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Top left corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(-5, 5, 5.2);
				glRotatef(270, 0, 0, 1);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Bottom right corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(5, -5, 5.2);
				glRotatef(90, 0, 0, 1);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// Top right corner
			glPushMatrix();
				// move the corner out in front of the cube face
				glTranslatef(5, 5, 5.2);
				glRotatef(180, 0, 0, 1);
				glCallList(corner);
				glColor3ub(153, 153, 153);
			glPopMatrix();

			// top tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(-0.5, 4, 5.2);
				glCallList(middle);
			glPopMatrix();

			// bottom tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(-0.5, -5, 5.2);
				glCallList(middle);
			glPopMatrix();

			// left tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(-5, -0.5, 5.2);
				glCallList(middle);
			glPopMatrix();

			// right tiny middle cube
			glPushMatrix();
				// move the tiny middle cube out in front of the cube face
				glTranslatef(4, -0.5, 5.2);
				glCallList(middle);
			glPopMatrix();

			// horizontal line to the right of the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(0, 0, 5.1);
				glCallList(line);
			glPopMatrix();

			// vertical line on top of the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(0, 0, 5.1);
				glRotatef(90, 0, 0, 1);
				glCallList(line);
			glPopMatrix();

			// horizontal line to the left of the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(-5, 0, 5.1);
				glCallList(line);
			glPopMatrix();

			// vertical line underneath the heart
			glPushMatrix();
				glLineWidth(5);
				// move the line out in front of the cube face
				glTranslatef(0, 0, 5.1);
				glRotatef(-90, 0, 0, 1);
				glCallList(line);
			glPopMatrix();

		glPopMatrix(); // end of front face display lists

	glFlush();
	glutSwapBuffers();
} // END DisplayFunc



/* =======================================
 * Function called when the window is created or resized
 * ======================================= */
void ReshapeFunc(int width, int height)
{
	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();
	gluPerspective(20, width / (float) height, 5, 75);
	glViewport(0, 0, width, height);

	glMatrixMode(GL_MODELVIEW);
	glutPostRedisplay();
} // END ReshapeFunc



/* =======================================
 * Function called when a key is hit
 * ======================================= */
void KeyboardFunc(unsigned char key, int x, int y)
{
	if ('q' == key || 'Q' == key || 27 == key)
		exit(0);
} // END KeyboardFunc



/* =======================================
 * Initialize display lists for render function
 * ======================================= */
void init()
{
	heart = glGenLists(1);
	face = glGenLists(1);
	corner = glGenLists(1);
	middle = glGenLists(1);
	line = glGenLists(1);

    // =======================================
	/* Companion cube face display list */
	glNewList(face, GL_COMPILE);
		glBegin(GL_QUADS);
			glColor3ub(143, 143, 143);
			glVertex3f(-5, -5,  5);
			glVertex3f(-5,  5,  5);
			glVertex3f( 5,  5,  5);
			glVertex3f( 5, -5,  5);
			glColor3ub(143, 143, 143);
		glEnd();
	glEndList();


     // =======================================
	/* Heart display list */
	glNewList(heart, GL_COMPILE);
		// draw the square center of the heart
		glBegin(GL_QUADS);
			glColor3ub(255, 153, 153);
			glVertex3f(0, 0, 0);
			glVertex3f(2, 0, 0);
			glVertex3f(2, 2, 0);
			glVertex3f(0, 2, 0);
			glColor3ub(153, 153, 153);
		glEnd();

		// draw the left top semi-circle of the heart
		glBegin(GL_TRIANGLE_FAN);
			glColor3ub(255, 153, 153);

				radius = 1;

				// draw a whole circle and only the top edge
				// will show over the top of the box
				for(int j = 0; j < 360; j++)
				{
					float theta = j * (M_PI/180.0f);

					float x = (float)radius * cos(theta)+1;
					float y = (float)radius * sin(theta)+2;
					glVertex3f(x, y, 0);
				}
		glEnd();

		// draw a whole circle and only the top edge
		// will show over the top of the box
		glBegin(GL_TRIANGLE_FAN);
			glColor3ub(255, 153, 153);

			radius = 1;

			for(int j = 0; j < 360; j++)
			{
				float theta = j * (M_PI/180.0f);

				float x = (float)radius * cos(theta)+2;
				float y = (float)radius * sin(theta)+1;
				glVertex3f(x, y, 0);
			}
		glEnd();

	glEndList();


	// =======================================
	// corner piece for companion cube
	glNewList(corner, GL_COMPILE);

		/* front face */
		glBegin(GL_QUAD_STRIP);
			glColor3ub(204, 204, 204);
			glVertex3f(3, 1, 1);
			glVertex3f(3, 0, 1);
			glVertex3f(1, 1, 1);
			glVertex3f(0, 0, 1);
			glVertex3f(1, 3, 1);
			glVertex3f(0, 3, 1);
		glEnd();

		/* back face */
		glBegin(GL_QUAD_STRIP);
			glColor3ub(210, 210, 210);
			glVertex3f(3, 1, 0);
			glVertex3f(3, 0, 0);
			glVertex3f(1, 1, 0);
			glVertex3f(0, 0, 0);
			glVertex3f(1, 3, 0);
			glVertex3f(0, 3, 0);
		glEnd();

		/* top face */
		glBegin(GL_QUAD_STRIP);
			glColor3ub(198, 198, 198);
			glVertex3f(3, 1, 0);
			glVertex3f(3, 1, 1);
			glVertex3f(1, 1, 0);
			glVertex3f(1, 1, 1);
			glVertex3f(1, 3, 0);
			glVertex3f(1, 3, 1);
			glVertex3f(0, 3, 0);
			glVertex3f(0, 3, 1);
		glEnd();

		/* bottom face */
		glBegin(GL_QUAD_STRIP);
			glColor3ub(214, 214, 214);
			glVertex3f(3, 1, 0);
			glVertex3f(3, 1, 1);
			glVertex3f(3, 0, 0);
			glVertex3f(3, 0, 1);
			glVertex3f(0, 0, 0);
			glVertex3f(0, 0, 1);
			glVertex3f(0, 3, 0);
			glVertex3f(0, 3, 1);
		glEnd();

		/* triangle fans face */
		glBegin(GL_TRIANGLE_FAN);
			glColor3ub(204, 204, 204);
			glVertex3f(1, 1, 1);
			glVertex3f(3, 1, 1);
			glVertex3f(2.75, 1.75, 1);
			glVertex3f(2, 2, 1);
			glVertex3f(1.75, 2.75, 1);
			glVertex3f(1, 3, 1);
		glEnd();

		/* Quads in between corner fan and cube face  */
		glBegin(GL_QUAD_STRIP);
			glColor3ub(214, 214, 214);
			glVertex3f(3, 1, 0);
			glVertex3f(3, 1, 1);
			glVertex3f(2.75, 1.75, 0);
			glVertex3f(2.75, 1.75, 1);
			glVertex3f(2, 2, 0);
			glVertex3f(2, 2, 1);
			glVertex3f(1.75, 2.75, 0);
			glVertex3f(1.75, 2.75, 1);
			glVertex3f(1, 3, 0);
			glVertex3f(1, 3, 1);
		glEnd();
	glEndList();


	// =======================================
	/* draw tiny middle cube */
	glNewList(middle, GL_COMPILE);
		/* Quads in between corner fan and cube face  */
		/* front face middle cube */
		glBegin(GL_QUADS);
		glColor3ub(204, 204, 204);
			glVertex3f(0, 0, .5);
			glVertex3f(0, 1, .5);
			glVertex3f(1, 1, .5);
			glVertex3f(1, 0, .5);
		glEnd();

		/* back face middle cube */
		glBegin(GL_QUADS);
			glColor3ub(214, 214, 214);
			glVertex3f(0, 0, 0);
			glVertex3f(1, 0, 0);
			glVertex3f(1, 1, 0);
			glVertex3f(0, 1, 0);
		glEnd();

		/* top face middle cube */
		glBegin(GL_QUADS);
			glColor3ub(198, 198, 198);
			glVertex3f(1, 1, .5);
			glVertex3f(1, 1, 0);
			glVertex3f(0, 1, 0);
			glVertex3f(0, 1, .5);
		glEnd();

		/* bottom face middle cube */
		glBegin(GL_QUADS);
			glColor3ub(210, 210, 210);
			glVertex3f(0, 0, 0);
			glVertex3f(0, 0, .5);
			glVertex3f(1, 0, .5);
			glVertex3f(1, 0, 0);
		glEnd();

		/* right face middle cube */
		glBegin(GL_QUADS);
			glColor3ub(200, 200, 200);
			glVertex3f(1, 0, 0);
			glVertex3f(1, 1, 0);
			glVertex3f(1, 1, .5);
			glVertex3f(1, 0, .5);
		glEnd();

		/* left face middle cube */
		glBegin(GL_QUADS);
			glColor3ub(208, 208, 208);
			glVertex3f(0, 0, 0);
			glVertex3f(0, 1, 0);
			glVertex3f(0, 1, .5);
			glVertex3f(0, 0, .5);
		glEnd();
	glEndList();


	// =======================================
	// line used to form cross across center of each cube face
	glNewList(line, GL_COMPILE);
		glBegin(GL_LINES);
			glColor3ub(255, 135, 250);
			glVertex3f(0, 0, 0);
			glVertex3f(4, 0, 0);
		glEnd();
	glEndList();

} // END init



/* =======================================
 * Main function
 * ======================================= */

int		main(int argc, char **argv)
{
	/* Creation of the window */
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Companion Cube: CIS 367 Proj 1");

	/* OpenGL settings */
	glClearColor(0, 0, 0, 0);
	glEnable(GL_DEPTH_TEST);

	init();

	/* Declaration of the callbacks */
	glutDisplayFunc(DisplayFunc);
	glutReshapeFunc(ReshapeFunc);
	glutKeyboardFunc(KeyboardFunc);

	/* Loop */
	glutMainLoop();

	/* Never reached */
	return 0;
} // END main

/* ========================================================================= */
