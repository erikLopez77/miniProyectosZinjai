#include <GL/glut.h>
float i;
void ini(void) {	
	glClearColor(0,0,0,0);
	glMatrixMode (GL_PROJECTION);
	gluOrtho2D(-500,500,-500,500);
}

void CurvaBezier(void) {
	//superficie
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,1,0);
	glBegin(GL_POLYGON);
	glVertex2i(-500,100);
	glVertex2i(500,100);
	glVertex2i(500,0);
	glVertex2i(-500,0);
	glEnd();
	
	glColor3f(1,1,0);
	glBegin(GL_POLYGON);
	glVertex2i(-500,100);
	glVertex2i(500,100);
	glColor3f(0,0,0);
	glVertex2i(500,200);
	glVertex2i(-500,200);
	glEnd();
	
	glColor3f(1,1,0);
	glBegin(GL_POLYGON);
	glVertex2i(500,0);
	glVertex2i(-500,0);
	glColor3f(0,0,0);
	glVertex2i(-500,-100);
	glVertex2i(500,-100);
	glEnd();
	
	//parte inferior n1 cd
	glColor3f(0,1,0);
	for(i=-80;i<=80;i++){
	float PuntosDeControl[4][3]={{0,-315.0,0.0},{i,-380,0.0},
	{i-20,-400,0.0},{0,-440,0.0}}; 
	glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl);
	glEnable(GL_MAP1_VERTEX_3);
	glMapGrid1f(100,0.0,1.0);
	glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
	glDisable(GL_MAP1_VERTEX_3);} 
	
	glColor3f(0.176,0.341,0.172);//Dark green 
	for(i=-80;i<=-65;i++){
		float PuntosDeControl[4][3]={{0,-315.0,0.0},{i,-380,0.0},
		{i-20,-400,0.0},{0,-440,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	//n2 de
	glColor3f(0,1,0);
	for(i=-420;i<=-360;i++){
		float PuntosDeControl1[4][3]={{0,-440.0,0.0},{230,i-25,0.0},
		{240,i,0.0},{250,-420,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl1);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);}
	//n3 df
	for(i=-420;i<=-360;i++){
		float PuntosDeControl1a[4][3]={{0,-440.0,0.0},{-120,i-40,0.0},
		{-135,i,0.0},{-150,-440,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl1a);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	glColor3f(0.176,0.341,0.172);//Dark green 
	for(i=-420;i<=-400;i++){
		float PuntosDeControl1a[4][3]={{0,-440.0,0.0},{-135,i-60,0.0},
		{-140,i,0.0},{-150,-440,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl1a);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	//n4  gh
	glColor3f(0,1,0);
	for(i=-70;i<=80;i++){
		float PuntosDeControl4[4][3]={{45,-140.0,0.0},{i,-160,0.0},
		{i-20,-180,0.0},{45,-370,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl4);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);}
	
	glColor3f(0.176,0.341,0.172);//Dark green
	for(i=-70;i<=-50;i++){
		float PuntosDeControl4[4][3]={{45,-140.0,0.0},{i,-160,0.0},
		{i-20,-180,0.0},{45,-370,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl4);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);}
	/*glColor3f(0,1,0);
	for(i=-70;i<=80;i++){
		float PuntosDeControl4[4][3]={{45,-140.0,0.0},{i,-160,0.0},
		{i-20,-180,0.0},{45,-370,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl4);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);}*/
	//n5  ij
	glColor3f(0,1,0);//Dark green 
	for(i=50;i<=240;i++){
		float PuntosDeControl5[4][3]={{175,-140.0,0.0},{i,-220,0.0},
		{i+20,-240,0.0},{175,-390,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl5);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);}
	
	glColor3f(0.176,0.341,0.172);//Dark green 
	for(i=50;i<=90;i++){
		float PuntosDeControl5[4][3]={{175,-140.0,0.0},{i,-220,0.0},
		{i+20,-240,0.0},{175,-390,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl5);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);}
	//n6  kf
	glColor3f(0,1,0);
	for(i=-220;i<=-50;i++){
		float PuntosDeControl6[4][3]={{-150,-420.0,0.0},{i,-270,0.0},
		{i+20,-245,0.0},{-140,-220,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl6);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);}
	
	glColor3f(0.176,0.341,0.172);//Dark green 
	for(i=-220;i<=-190;i++){
		float PuntosDeControl6[4][3]={{-150,-420.0,0.0},{i,-270,0.0},
		{i+20,-245,0.0},{-140,-220,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl6);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);}
	
	glColor3f(0,1,0);// green n7 lm
	for(i=-460;i<=-340;i++){
		float PuntosDeControl7[4][3]={{-150,-415.0,0.0},{-350,i+20,0.0},
		{-360,i,0.0},{-390,-400.0,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl7);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);}
	
	glColor3f(0.176,0.341,0.172);//dark green
	for(i=-460;i<=-440;i++){
		float PuntosDeControl7[4][3]={{-150,-415.0,0.0},{-350,i+20,0.0},
		{-360,i,0.0},{-390,-400.0,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl7);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	//tuna lm n7
	
	glColor3f(1,0,0);
	for(i=-390;i<=-310;i++){
		float PuntosDeControl12[3][3]={{-350,-320.0,0.0},{i,-340,0.0},{-350,-390,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,3,*PuntosDeControl12);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	glColor3f(0,1,0);//n8 no green
	for(i=-140;i<=80;i++){
		float PuntosDeControl7[4][3]={{0,-170.0,0.0},{i,-30,0.0},
		{i+20,-10,0.0},{-30,0.0,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl7);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	glColor3f(0.176,0.341,0.172);//dark green
	for(i=-140;i<=-120;i++){
		float PuntosDeControl7[4][3]={{0,-170.0,0.0},{i,-30,0.0},
		{i+20,-10,0.0},{-30,0.0,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl7);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	glColor3f(1,0,0);//n8 tuna
	for(i=-70;i<=-10;i++){
		float PuntosDeControl12[3][3]={{-40,50.0,0.0},{i,25,0.0},{-40,0,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,3,*PuntosDeControl12);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	for(i=-40;i<=20;i++){
		float PuntosDeControl12[3][3]={{-10,50.0,0.0},{i,25,0.0},{-10,0,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,3,*PuntosDeControl12);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	for(i=0;i<=60;i++){
		float PuntosDeControl12[3][3]={{30,50.0,0.0},{i,25,0.0},{30,-10,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,3,*PuntosDeControl12);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	glColor3f(0,1,0);//n9 ph green
	for(i=0;i<=230;i++){
		float PuntosDeControl7[4][3]={{200,120.0,0.0},{i,80,0.0},
		{i+15,60,0.0},{180,-140,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl7);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	glColor3f(0.176,0.341,0.172);//dark green
	for(i=0;i<=40;i++){
		float PuntosDeControl7[4][3]={{200,120.0,0.0},{i,80,0.0},
		{i+15,60,0.0},{180,-140,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl7);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	glColor3f(1,0,0);//n9 tuna
	for(i=50;i<=130;i++){
		float PuntosDeControl12[3][3]={{90,130.0,0.0},{i,110,0.0},{90,90,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,3,*PuntosDeControl12);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	glColor3f(0,1,0);//n10 qr green
	for(i=-310;i<=-150;i++){
		float PuntosDeControl7[4][3]={{-175,-230.0,0.0},{-290,i,0.0},
		{-330,i,0.0},{-375,-230,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl7);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	glColor3f(0.176,0.341,0.172);//dark green
	for(i=-310;i<=-290;i++){
		float PuntosDeControl7[4][3]={{-175,-230.0,0.0},{-290,i,0.0},
		{-330,i,0.0},{-375,-230,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl7);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	//tunas n10 
	glColor3f(1,0,0);
	for(i=-200;i<=-150;i++){
		float PuntosDeControl12[3][3]={{-175,-280.0,0.0},{i,-260,0.0},{-175,-240,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,3,*PuntosDeControl12);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	glColor3f(0,1,0);//n11 so green
	for(i=-190;i<=-60;i++){
		float PuntosDeControl7[4][3]={{-125,-230.0,0.0},{i,-90,0.0},
		{i,-130,0.0},{-125,10,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl7);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	glColor3f(0.176,0.341,0.172);//dark green
	for(i=-190;i<=-175;i++){
		float PuntosDeControl7[4][3]={{-125,-230.0,0.0},{i,-90,0.0},
		{i,-130,0.0},{-125,10,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl7);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	//tunas n11 
	glColor3f(1,0,0);
	for(i=-200;i<=-150;i++){
		float PuntosDeControl12[3][3]={{-175,-20.0,0.0},{i,-50,0.0},{-175,-80,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,3,*PuntosDeControl12);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	for(i=-155;i<=-95;i++){
		float PuntosDeControl12[3][3]={{-125,-10.0,0.0},{i,10,0.0},{-125,30,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,3,*PuntosDeControl12);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	glColor3f(0,1,0);//n12 tu green
	for(i=0;i<=290;i++){
		float PuntosDeControl7[4][3]={{175,100.0,0.0},{i,250,0.0},
		{i,270,0.0},{150,300,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl7);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	glColor3f(0.176,0.341,0.172);//dark green
	for(i=0;i<=75;i++){
		float PuntosDeControl7[4][3]={{175,100.0,0.0},{i,250,0.0},
		{i,270,0.0},{150,300,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,4,*PuntosDeControl7);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	//tunas 
	glColor3f(1,0,0);
	for(i=185;i<=225;i++){
		float PuntosDeControl12[3][3]={{205,320.0,0.0},{i,320,0.0},{205,285,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,3,*PuntosDeControl12);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	for(i=155;i<=195;i++){
		float PuntosDeControl12[3][3]={{175,340.0,0.0},{i,320,0.0},{175,300,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,3,*PuntosDeControl12);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	for(i=125;i<=165;i++){
		float PuntosDeControl12[3][3]={{145,340.0,0.0},{i,320,0.0},{145,300,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,3,*PuntosDeControl12);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	for(i=95;i<=135;i++){
		float PuntosDeControl12[3][3]={{115,330.0,0.0},{i,320,0.0},{115,290,0.0}}; 
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,3,*PuntosDeControl12);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glEvalMesh1(GL_LINE,0,100);  //glEvalMesh1(GL_POINTS,0,100);
		glDisable(GL_MAP1_VERTEX_3);} 
	
	glFlush();} 


int main (int argc, char **argv) {
	glutInitWindowSize(500,500);
	glutInit (&argc, argv);
	glutCreateWindow ("Nopal :D");
	ini();
	glutDisplayFunc(CurvaBezier);
	glutMainLoop();
	return 0;
}
