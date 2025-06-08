#include <GL/glut.h>
#include<math.h>
int count=0;
double r,x,y;
void Init(void) {	
	glClearColor(0.698,0.854,0.98,0);
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(-340,100,160,20,0,20,0,1,0);
	//gluLookAt(-20,80,40,40,40,40,0,1,0); //mirar cara
	glMatrixMode(GL_PROJECTION);
	gluPerspective(120,1,10,800);
	
}

void color(float r,float g,float b){
	glColor3f(r/255,g/255,b/255);
}

	
	void base(void){
		color(255,208,165);
		glBegin(GL_POLYGON);
		glVertex3f(-600,0,-600);
		glVertex3f(600,0,-600);
		glVertex3f(600,0,600);
		glVertex3f(-600,0,600);//base
		glEnd();
	}
	
		void tronco(void){
		color(255,128,0);
		glBegin(GL_POLYGON);
		glVertex3f(30,30,30);
		glVertex3f(60,30,30);
		glVertex3f(60,30,60);
		glVertex3f(30,30,60);//torso
		
		glVertex3f(30,60,30);
		glVertex3f(60,60,30);
		glVertex3f(60,60,60);
		glVertex3f(30,60,60);//lomo
		
		glVertex3f(30,60,30);
		glVertex3f(30,60,60);
		glVertex3f(30,30,60);
		glVertex3f(30,30,30);//cuello
		color(255,128,0);
		glVertex3f(30,60,30);
		glVertex3f(60,60,30);
		glVertex3f(60,30,30);
		glVertex3f(30,30,30);//lat. der
		
		glVertex3f(60,60,30);
		glVertex3f(60,60,60);
		glVertex3f(60,30,60);
		glVertex3f(60,30,30);//atrás
		
		glVertex3f(30,60,60);
		glVertex3f(60,60,60);
		glVertex3f(60,30,60);
		glVertex3f(30,30,60);//lat. izqdo.*
		glEnd();
		}
		void patasF(void){
		//frontales
		//fd
		glBegin(GL_POLYGON);
		glVertex3f(30,15,30);
		glVertex3f(35,15,30);
		glVertex3f(35,30,30);
		glVertex3f(30,30,30);//c der
		
		glVertex3f(30,15,35);
		glVertex3f(35,15,35);
		glVertex3f(35,30,35);
		glVertex3f(30,30,35);//c izqda
		
		glVertex3f(35,15,35);
		glVertex3f(35,15,30);
		glVertex3f(35,30,30);
		glVertex3f(35,30,35);//c tras
		
		glVertex3f(30,15,35);
		glVertex3f(30,15,30);
		glVertex3f(30,30,30);
		glVertex3f(30,30,35);//c delante
		glEnd();
		
		//fi
		glBegin(GL_POLYGON);
		glVertex3f(30,15,55);
		glVertex3f(35,15,55);
		glVertex3f(35,30,55);
		glVertex3f(30,30,55);//c der
		
		glVertex3f(30,15,60);
		glVertex3f(35,15,60);
		glVertex3f(35,30,60);
		glVertex3f(30,30,60);//c izqda
		
		glVertex3f(35,15,60);
		glVertex3f(35,15,55);
		glVertex3f(35,30,55);
		glVertex3f(35,30,60);//c tras
		
		glVertex3f(30,15,60);
		glVertex3f(30,15,55);
		glVertex3f(30,30,55);
		glVertex3f(30,30,60);//c delante
		glEnd();
		} 
		void patasT(void){
			//ftraseras
			//td
			glBegin(GL_POLYGON);
			glVertex3f(30+25,15,30);
			glVertex3f(35+25,15,30);
			glVertex3f(35+25,30,30);
			glVertex3f(30+25,30,30);//c der
			
			glVertex3f(30+25,15,35);
			glVertex3f(35+25,15,35);
			glVertex3f(35+25,30,35);
			glVertex3f(30+25,30,35);//c izqda
			
			glVertex3f(35+25,15,35);
			glVertex3f(35+25,15,30);
			glVertex3f(35+25,30,30);
			glVertex3f(35+25,30,35);//c tras
			
			glVertex3f(30+25,15,35);
			glVertex3f(30+25,15,30);
			glVertex3f(30+25,30,30);
			glVertex3f(30+25,30,35);//c delante
			glEnd();
			
			//ti
			glBegin(GL_POLYGON);
			glVertex3f(30+25,15,55);
			glVertex3f(35+25,15,55);
			glVertex3f(35+25,30,55);
			glVertex3f(30+25,30,55);//c der
			
			glVertex3f(30+25,15,60);
			glVertex3f(35+25,15,60);
			glVertex3f(35+25,30,60);
			glVertex3f(30+25,30,60);//c izqda
			
			glVertex3f(35+25,15,60);
			glVertex3f(35+25,15,55);
			glVertex3f(35+25,30,55);
			glVertex3f(35+25,30,60);//c tras
			
			glVertex3f(30+25,15,60);
			glVertex3f(30+25,15,55);
			glVertex3f(30+25,30,55);
			glVertex3f(30+25,30,60);//c delante
			glEnd();
		}
		void cola (void){
			glBegin(GL_POLYGON);
			glVertex3f(80,50,45);
			glVertex3f(80,50,55);
			glVertex3f(60,50,55);
			glVertex3f(60,50,45);//arriba
			
			glVertex3f(80,35,45);
			glVertex3f(80,35,55);
			glVertex3f(60,35,55);
			glVertex3f(60,35,45);//abajo naranja
			
			glVertex3f(80,35,45);
			glVertex3f(80,50,45);
			glVertex3f(60,50,45);
			glVertex3f(60,35,45);//lat der
			
			glVertex3f(80,35,55);
			glVertex3f(80,50,55);
			glVertex3f(60,50,55);
			glVertex3f(60,35,55);//lat izqda
			
			glVertex3f(60,50,45);
			glVertex3f(60,50,55);
			glVertex3f(60,35,55);
			glVertex3f(60,35,45);//
			
			glVertex3f(80,50,45);
			glVertex3f(80,50,55);
			glVertex3f(80,35,55);
			glVertex3f(80,35,45);//atrás
			glEnd();
			
			glBegin(GL_POLYGON);
			color(255,255,255); //white
			glVertex3f(80,50,45);
			glVertex3f(80,50,55);
			glVertex3f(80,35,55);
			glVertex3f(80,35,45);//bl delante
			
			glVertex3f(90,50,45);
			glVertex3f(90,50,55);
			glVertex3f(90,35,55);
			glVertex3f(90,35,45);//bl atrás
			
			glVertex3f(80,50,45);
			glVertex3f(90,50,45);
			glVertex3f(90,35,45);
			glVertex3f(80,35,45);//lat der
			
			glVertex3f(80,50,55);
			glVertex3f(90,50,55);
			glVertex3f(90,35,55);
			glVertex3f(80,35,55);//lat izqda
			
			glVertex3f(90,50,55);
			glVertex3f(90,50,45);
			glVertex3f(80,50,45);
			glVertex3f(80,50,55);//c arriba
			
			glVertex3f(90,35,55);
			glVertex3f(90,35,45);
			glVertex3f(80,35,45);
			glVertex3f(80,35,55);//c abajo*/
			glEnd();
		}
	void cabeza (void){
		color(255,128,0);
		glBegin(GL_POLYGON);
		glVertex3f(30,75,15);
		glVertex3f(30,75,75);
		glVertex3f(30,30,75);
		glVertex3f(30,30,15);//cuello
		
		glVertex3f(15,75,15);
		glVertex3f(15,75,75);
		glVertex3f(15,30,75);
		glVertex3f(15,30,15);//cara
		
		glVertex3f(30,75,15);
		glVertex3f(30,75,75);
		glVertex3f(15,75,75);
		glVertex3f(15,75,15);//c arriba
		
		glVertex3f(30,30,15);
		glVertex3f(30,30,75);
		glVertex3f(15,30,75);
		glVertex3f(15,30,15);//c abajo
		
		glVertex3f(15,30,15);
		glVertex3f(30,30,15);
		glVertex3f(30,75,15);
		glVertex3f(15,75,15);//lat der
		
		glVertex3f(15,30,75);
		glVertex3f(30,30,75);
		glVertex3f(30,75,75);
		glVertex3f(15,75,75);//lat izqda
		glEnd();
		
		glBegin(GL_POLYGON);
		//hocico
		glVertex3f(0,48,55);
		glVertex3f(0,30,55);
		glVertex3f(0,30,35);
		glVertex3f(0,48,35);//frente
		
		glVertex3f(0,48,55);
		glVertex3f(0,30,55);
		glVertex3f(15,30,55);
		glVertex3f(15,48,55);//derechaView
		
		glVertex3f(0,48,35);
		glVertex3f(0,30,35);
		glVertex3f(15,30,35);
		glVertex3f(15,48,35);//izqdaView
		
		glVertex3f(0,48,35);
		glVertex3f(0,48,35);
		glVertex3f(15,48,55);
		glVertex3f(15,48,55);//arriba
		
		glVertex3f(0,30,35);
		glVertex3f(0,30,35);
    	glVertex3f(15,30,55);
		glVertex3f(15,30,55);//abajo
		glEnd();
		color(255,128,0);
		glBegin(GL_POLYGON);
		//oreja izqda
		//color(255,255,255);
		glVertex3f(15,75,75);
		glVertex3f(20,75,75);
		glVertex3f(20,85,75);
		glVertex3f(15,85,75);//izquierda de oreja
		
		glVertex3f(15,75,65);
		glVertex3f(20,75,65);
		glVertex3f(20,85,65);
		glVertex3f(15,85,65);//derecha de oreja
		
		glVertex3f(15,75,65);
		glVertex3f(15,75,75);
		glVertex3f(15,85,75);
		glVertex3f(15,85,65);//frente de oreja
		
		glVertex3f(20,75,65);
		glVertex3f(20,75,75);
		glVertex3f(20,85,75);
		glVertex3f(20,85,65);//atrás de oreja
		
		glVertex3f(20,85,65);
		glVertex3f(20,85,75);
		glVertex3f(15,85,75);
		glVertex3f(15,85,65);//arriba
		glEnd();
		//oreja derecha
	glBegin(GL_POLYGON);
		glVertex3f(15,75,75-50);
		glVertex3f(20,75,75-50);
		glVertex3f(20,85,75-50);
		glVertex3f(15,85,75-50);//izquierda de oreja
		
		glVertex3f(15,75,65-50);
		glVertex3f(20,75,65-50);
		glVertex3f(20,85,65-50);
		glVertex3f(15,85,65-50);//derecha de oreja
		
		glVertex3f(15,75,65-50);
		glVertex3f(15,75,75-50);
		glVertex3f(15,85,75-50);
		glVertex3f(15,85,65-50);//frente de oreja
		
		glVertex3f(20,75,65-50);
		glVertex3f(20,75,75-50);
		glVertex3f(20,85,75-50);
		glVertex3f(20,85,65-50);//atrás de oreja
		
		glVertex3f(20,75,15);
		glVertex3f(20,75,25);
		glVertex3f(15,75,25);
		glVertex3f(15,75,15);//arriba*/
		glEnd();
	}

	void colorear(void){
		color(0,0,0);
		//OREJA
		glBegin(GL_POLYGON);
		glVertex3f(20,75,65);
		glVertex3f(20,75,75);
		glVertex3f(15,75,75);
		glVertex3f(15,75,65);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(20,75,15);
		glVertex3f(20,75,25);
		glVertex3f(15,75,25);
		glVertex3f(15,75,15);//arriba
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(15,80,75);
		glVertex3f(20,80,75);
		glVertex3f(20,85,75);
		glVertex3f(15,85,75);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(15,75,75-50);
		glVertex3f(20,75,75-50);
		glVertex3f(20,85,75-50);
		glVertex3f(15,85,75-50);//izquierda de oreja
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(15,80,65);
		glVertex3f(20,80,65);
		glVertex3f(20,85,65);
		glVertex3f(15,85,65);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(15,80,65-50);
		glVertex3f(20,80,65-50);
		glVertex3f(20,85,65-50);
		glVertex3f(15,85,65-50);//derecha de oreja
		glEnd();
		glBegin(GL_POLYGON);
		//nariz
		glVertex3f(-1,39,50);
		glVertex3f(-1,48,50);
		glVertex3f(-1,48,41);
		glVertex3f(-1,39,41);
		glEnd();
		glBegin(GL_POLYGON);
		//ojo derecho
		glVertex3f(15,49,15);
		glVertex3f(15,49,20);
		glVertex3f(15,54,20);
		glVertex3f(15,54,15);
		glEnd();
		//OJO IZQDO
		glBegin(GL_POLYGON);
		glVertex3f(15,49,70);
		glVertex3f(15,49,75);
		glVertex3f(15,54,75);
		glVertex3f(15,54,70);
		glEnd();
		color(255,255,255);//white
		glBegin(GL_POLYGON);
		//ojo derecho
		glVertex3f(15,49,25);
		glVertex3f(15,49,20);
		glVertex3f(15,54,20);
		glVertex3f(15,54,25);
		glEnd();
		//OJO IZQDO
		glBegin(GL_POLYGON);
		glVertex3f(15,49,70);
		glVertex3f(15,49,65);
		glVertex3f(15,54,65);
		glVertex3f(15,54,70);
		glEnd();
		glBegin(GL_POLYGON);
		//ojo derecho
		glVertex3f(15,49,14);
		glVertex3f(20,49,14);
		glVertex3f(20,54,14);
		glVertex3f(15,54,14);
		glEnd();
		//OJO IZQDO
		glBegin(GL_POLYGON);
		glVertex3f(15,49,76);
		glVertex3f(20,49,76);
		glVertex3f(20,54,76);
		glVertex3f(15,54,76);
		glEnd();// white snout
		glBegin(GL_POLYGON);
		glVertex3f(-0.5,48,55);
		glVertex3f(-0.5,30,55);
		glVertex3f(-0.5,30,35);
		glVertex3f(-0.5,48,35);
		glEnd();//view izqdo
		glBegin(GL_POLYGON);
		glVertex3f(0,38,35.1);
		glVertex3f(0,30,35.1);
		glVertex3f(15,30,35.1);
		glVertex3f(15,38,35.1);
		glEnd();
		//view derecha
		glBegin(GL_POLYGON);
		glVertex3f(0,38,55.1);
		glVertex3f(0,30,55.1);
		glVertex3f(15,30,55.1);
		glVertex3f(15,38,55.1);
		glEnd();
		//cara baja
		glBegin(GL_POLYGON);
		glVertex3f(14.9,38,15);
		glVertex3f(14.9,38,35);
		glVertex3f(14.9,30,35);
		glVertex3f(14.9,30,15);
		
		glVertex3f(14.9,30,55);
		glVertex3f(14.9,38,75);
		glVertex3f(14.9,30,75);
		glVertex3f(14.9,30,55);//cara
		glEnd();
		//cachete
		glBegin(GL_POLYGON);
		glVertex3f(15,30,14.9);
		glVertex3f(30,30,14.9);
		glVertex3f(30,38,14.9);
		glVertex3f(15,38,14.9);//lat der
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(15,30,75.1);
		glVertex3f(30,30,75.1);
		glVertex3f(30,38,75.1);
		glVertex3f(15,38,75.1);//lat izqdo
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(14.9,75,65-50);
		glVertex3f(14.9,75,75-50);
		glVertex3f(14.9,85,75-50);
		glVertex3f(14.9,85,65-50);//frente de oreja der
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(14.9,75,65);
		glVertex3f(14.9,75,75);
		glVertex3f(14.9,85,75);
		glVertex3f(14.9,85,65);//frente de oreja izqda
		glEnd();
		
		color(120,120,120);
		glBegin(GL_POLYGON);
		glVertex3f(14.8,74,70-50);
		glVertex3f(14.8,74,75-50);
		glVertex3f(14.8,80,75-50);
		glVertex3f(14.8,80,70-50);//frente de oreja der
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(14.8,74,65);
		glVertex3f(14.8,74,70);
		glVertex3f(14.8,80,70);
		glVertex3f(14.8,80,65);//frente de oreja izqda
		glEnd();
	}
		void draw(void)
		{
			glMatrixMode(GL_MODELVIEW);
			glutInitDisplayMode(GL_DEPTH);
			for(int i=0;i<=400;i++)
			{
				glClear(GL_DEPTH_BUFFER_BIT);
				glEnable(GL_DEPTH_TEST);
				glClear(GL_COLOR_BUFFER_BIT);
				base();
				glPushMatrix();
				glTranslated(-7*i,0,0);
				
				glTranslated(45,50,45);
				glScaled(i/14,i/14,i/14);
				tronco();
				patasT();
				patasF();
				cola();
				cabeza();
				colorear();
				glFlush();
				Sleep(450);
				glPopMatrix();
				glDisable(GL_DEPTH_TEST);
			}
		}
		
		int main (int argc, char **argv) 
		{
			glutInitWindowSize(600,600);
			glutInit(&argc, argv);
			glutCreateWindow("Zorro");
			Init();
			glutDisplayFunc(draw);
			glutMainLoop();
			return 0;
		}
		
