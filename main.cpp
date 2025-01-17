#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void drawFilledRectangle(float x1, float y1, float x2, float y2) {
    glColor3f(0.0, 0.5, 0.95); // Set the rectangle color
    glBegin(GL_POLYGON);
    glVertex2f(x1, y1); // Bottom-left corner
    glVertex2f(x2, y1); // Bottom-right corner
    glVertex2f(x2, y2); // Top-right corner
    glVertex2f(x1, y2); // Top-left corner
    glEnd();
}

void drawFilledStar(float x, float y, float outerSize, float innerSize) {
    glColor3f(1.0, 1.0, 0.0); // Set the star color
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // Center of the star

    // Draw the star's points
    for (int i = 0; i <= 10; i++) {
        float angle = i * (2.0f * M_PI / 10.0f); // Divide circle into 10 parts
        float radius = (i % 2 == 0) ? outerSize : innerSize; // Alternate between outer and inner radius
        float x1=radius * cos(angle);
        float y1=radius * sin(angle);
        glVertex2f(x+x1, y+y1);
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw the filled rectangle
    drawFilledRectangle(150, 500, 600, 200); // Rectangle with pixel coordinates

    // Draw the filled stars with pixel coordinates
    drawFilledStar(570, 450, 20, 8); // Star 1
    drawFilledStar(525, 410, 20, 8); // Star 2
    drawFilledStar(485, 390, 20, 8); // Star 3
    drawFilledStar(440, 310, 20, 8); // Star 4
    drawFilledStar(570, 330, 20, 8); // Star 5
    drawFilledStar(530, 300, 20, 8);  // Star 6
    drawFilledStar(500, 270, 20, 8);  // Star 7
    drawFilledStar(445, 250, 20, 8); // Star 8
    drawFilledStar(390, 230, 20, 8); // Star 9


    ///////// Rectangle inside UK flag with color of White
    glColor3f(1.0,1.0,1.0); // Set color to White
    glRecti(150,500,360,340); // Adjust coordinates to fit normalized range
    ///////////

    ///////First Horizontal Red

    glColor3f(1.0,0.0,0.0);
    glRecti(150,430,360,405);

    ///////// 2nd Vertical Red
    glColor3f(1.0,0.0,0.0);
    glRecti(240,500,270,340);

     ////////                         Quadrant I

     ////////   Small Triangle

      glColor3f(0.051,0.031,0.431);
     glBegin(GL_TRIANGLES);
        glVertex2f(150.0,440.0);
        glVertex2f(195.0,440.0);
        glVertex2f(150.0,475.0);

     glEnd();
  ///////// 10 red
     glColor3f(1.0,0.0,0.0);
     glBegin(GL_QUADS);
        glVertex2f(150.0,495.0);
        glVertex2f(150.0,483.0);
        glVertex2f(203.0,440.0);
        glVertex2f(215.0,440.0);

     glEnd();
     ////////

    ///////// Large triangles

      glColor3f(0.051,0.031,0.431);;
     glBegin(GL_TRIANGLES);
        glVertex2f(161.0,500.0);
        glVertex2f(230.0,440.0);
        glVertex2f(230.0,500.0);

     glEnd();
     /////////
      //////        Quadrant II

    /////////////  Small Triangle

     glColor3f(0.051,0.031,0.431);
     glBegin(GL_TRIANGLES);
        glVertex2f(315.0,440.0);
        glVertex2f(360.0,440.0);
        glVertex2f(360.0,475.0);

     glEnd();

    /////////    10PX red

     glColor3f(1.0,0.0,0.0);
     glBegin(GL_POLYGON);
        glVertex2f(286.0,440.0);
        glVertex2f(296.0,440.0);
        glVertex2f(360.0,494.0);
        glVertex2f(360.0,500.0);
        glVertex2f(350.0,500.0);

     glEnd();
     ////////////

     ///////////// Large Triangle

    glColor3f(0.051,0.031,0.431);
     glBegin(GL_TRIANGLES);
        glVertex2f(280.0,500.0);
        glVertex2f(280.0,440.0);
        glVertex2f(345.0,500.0);

     glEnd();

    /////////////                        Quadrant III

     ///////// Small Triangle

     glColor3f(0.051,0.031,0.431);
     glBegin(GL_TRIANGLES);
        glVertex2f(150.0,395.0);
        glVertex2f(150.0,360.0);
        glVertex2f(195.0,395.0);

     glEnd();
     /////////

     ///////// 10PX Red

     glColor3f(1.0,0.0,0.0);
     glBegin(GL_POLYGON);
        glVertex2f(150.0,342.0);
        glVertex2f(150.0,340.0);
        glVertex2f(158.0,340.0);
        glVertex2f(223.0,395.0);
        glVertex2f(213.0,395.0);

     glEnd();
     /////////

     ////////  Large Triangle
     glColor3f(0.051,0.031,0.431);
     glBegin(GL_TRIANGLES);
        glVertex2f(166.0,340.0);
        glVertex2f(230.0,340.0);
        glVertex2f(230.0,395.0);

     glEnd();
     ///////////                              Quadrant IV

    /////// small Triangle
  glColor3f(0.051,0.031,0.431);
    glBegin(GL_TRIANGLES);
        glVertex2f(315.0,395.0);
        glVertex2f(360.0,395.0);
        glVertex2f(360.0,360.0);

    glEnd();
     //////// 10PX Red

     glColor3f(1.0,0.0,0.0);
     glBegin(GL_QUADS);
        glVertex2f(293.0,395.0);
        glVertex2f(360.0,340.0);
        glVertex2f(360.0,352.0);
        glVertex2f(307.0,395.0);

     glEnd();

     ///////

     //////////// Large Triangle
     glColor3f(0.051,0.031,0.431);
     glBegin(GL_TRIANGLES);
        glVertex2f(280.0,395.0);
        glVertex2f(280.0,340.0);
        glVertex2f(347.0,340.0);

     glEnd();
     ///////////

    glFlush();
}

void init() {
    glClearColor(0.0, 1.0, 0.0, 0.5); // Set clear color to white
    gluOrtho2D(0.0, 800.0, 0.0, 600.0); // Set the coordinate system to match the window size
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("TUVALU Flag");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

