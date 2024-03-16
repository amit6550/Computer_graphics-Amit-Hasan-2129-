#include <iostream>
#include <graphics.h>
int main() {
    int choice;
    bool exit = false;
    int gd = DETECT, gm;
    initwindow(350, 450, "Menu");
                rectangle(50,50,300,400);

                outtextxy(90, 70, "         AMIT HASAN");
                outtextxy(90, 100, "        ID:CSE2101022129");
                outtextxy(70, 130, "Menu/Items:");
                line(65,150,155,150);
                outtextxy(70, 160, "[1] Emoji.");
                outtextxy(70, 190, "[2] Doreamon.");
                outtextxy(70, 220, "[3] Fish.");
                outtextxy(70, 250, "[4] Flag.");
                outtextxy(70, 280, "[5] Umbrella.");
                outtextxy(70, 310, "[6] Moving Truck.");
                outtextxy(70, 340, "[7] Village Picture.");
                outtextxy(70, 370, "[8] Exit.");

    while (!exit) {
        std::cout << "Enter a number (1-6): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                initwindow(650,550,"Emoji");
                outtextxy(200, 20, "                      Emoji");
                setfillstyle(1,BROWN);
                rectangle(50,50,600,500);
                floodfill(400,400,WHITE);
                setfillstyle(1,YELLOW);
                circle(250,165,65);
                floodfill(250,160,WHITE);
                setfillstyle(1,GREEN);
                ellipse(225,145,0,360,10,15);
                floodfill(220,140,WHITE);
                setfillstyle(1,GREEN);
                ellipse(275,145,0,360,10,15);
                floodfill(270,140,WHITE);
                setfillstyle(1,RED);
                ellipse(250,180,180,360,35,25);
                ellipse(250,180,180,360,35,10);
                floodfill(250,180,WHITE);
                line(250,135,250,170);
                setfillstyle(1,BLACK);
                ellipse(228,145,30,300,8,10);
                floodfill(228,145,WHITE);
                setfillstyle(1,BLACK);
                ellipse(278,145,30,300,8,10);
                floodfill(278,145,WHITE);
                setfillstyle(1,BLUE);
                rectangle(155,230,340,390);
                floodfill(160,300,WHITE);
                setfillstyle(1,RED);
                line(340,320,410,230);
                line(410,230,313,170);
                line(340,290,387,234);
                line(387,234,313,180);
                floodfill(360,270,WHITE);
                setfillstyle(1,RED);
                line(155,315,250,350);
                line(155,290,250,345);
                line(250,350,250,345);
                floodfill(160,300,WHITE);
                //delay(15000);
                //closegraph();
                break;
            case 2:
                initwindow(650,550,"Doreamon");
                outtextxy(200, 20, "                      Doreamon");
                setfillstyle(1,LIGHTRED);
                rectangle(50, 50, 600, 500);
                floodfill(55,60,WHITE);
                setfillstyle(1,BLUE);
                ellipse(345,300,0,360,140,115);
                floodfill(385,230,WHITE);
                setfillstyle(1,LIGHTGRAY);
                ellipse(325,255,0,360,19,28);
                floodfill(340,245,WHITE);
                setfillstyle(1,LIGHTGRAY);
                ellipse(361,255,0,360,19,28);
                floodfill(360,245,WHITE);
                setfillstyle(1,BLACK);
                ellipse(330,266,0,360,6,10);
                floodfill(330,263,WHITE);
                setfillstyle(1,BLACK);
                ellipse(356,266,0,360,6,10);
                floodfill(356,264,WHITE);
                setfillstyle(1,LIGHTGRAY);
                ellipse(345,336,111,71,100,79);
                floodfill(385,350,WHITE);
                setfillstyle(1,RED);
                circle(342,292,11);
                floodfill(340,289,WHITE);
                line(342,302,342,367);
                ellipse(345,339,180,360,59,30);
                setfillstyle(1,RED);
                rectangle(190, 413, 500, 430);
                floodfill(340,425,WHITE);
                setfillstyle(1,YELLOW);
                circle(345,443,13);
                floodfill(340,449,WHITE);
                setcolor(BLACK);
                line(227,285,290,300);
                line(227,310,290,310);
                line(227,335,290,320);
                line(397,300,460,285);
                line(397,310,460,310);
                line(397,320,460,335);

                //delay(15000);
                //closegraph();
                break;
                case 3:

                initwindow(650,550,"Fish");
                outtextxy(200, 20, "                      Fish");
                setfillstyle(1, LIGHTBLUE);

                rectangle(50,50,600,500);
                floodfill(55, 55, WHITE);
                setfillstyle(1, BLUE);

                ellipse(225,200,0,360,70,30);
                floodfill(230, 200,WHITE );
                setfillstyle(1, YELLOW);
                ellipse(490,200,155,205,250,60);
                floodfill(250, 200, WHITE);
                setfillstyle(1, RED);

                ellipse(270,200,360,0,5,7);
                floodfill(270, 200,WHITE );
                floodfill(270, 200,WHITE );
                line(123,183,158,190);
                line(123,220,158,210);

                line(123,220,145,202);

                line(123,183,145,202);
                floodfill(150, 200,WHITE );
                setfillstyle(1, RED);


                line(200,150,250,172);
                line(200,150,225,171);
                floodfill(228, 165,WHITE );
                setfillstyle(1, RED);

                line(200,250,250,228);
                line(200,250,225,228);
                floodfill(230, 233,WHITE );

                circle(306,200,8);
                circle(333,202,6);
                circle(321,185,7);

                circle(318,215,5);


                //line(50,300,230,233);


                //getch();
                //closegraph();
                break;
                case 4:
                initwindow(500,500,"Flag");
                outtextxy(200, 20, "        Flag");
                setfillstyle(1,LIGHTGRAY);
                rectangle(20,50,480,480);
                floodfill(400,400,WHITE);
                setfillstyle(1,GREEN);
                rectangle(50,100,260,220);
                floodfill(100,140,WHITE);
                setfillstyle(1,RED);
                circle(145,160,40);
                floodfill(150,150,WHITE);
                setfillstyle(1,BROWN);
                rectangle(40,90,50,360);
                floodfill(42,150,WHITE);
                //delay(15000);
                //closegraph();
                break;
            case 5:
                initwindow(600,500,"Umbrella");
                outtextxy(200, 20, "                Umbrella");
                setfillstyle(1,GREEN);
                rectangle(50,50,550,450);
                floodfill(400,400,WHITE);
                setfillstyle(1,YELLOW);
                ellipse(250,200,0,180,140,110);
                ellipse(250,200,360,180,95,110);
                ellipse(250,200,360,180,45,110);
                line(250,90,250,200);
                setfillstyle(1,YELLOW);
                ellipse(133,200,360,180,23,15);
                floodfill(150,185,WHITE);
                setfillstyle(1,RED);
                ellipse(181,200,360,180,25,15);
                floodfill(200,185,WHITE);
                setfillstyle(1,YELLOW);
                ellipse(228,200,360,180,23,15);
                floodfill(248,185,WHITE);
                setfillstyle(1,RED);
                ellipse(273,200,360,180,23,15);
                floodfill(290,185,WHITE);
                setfillstyle(1,YELLOW);
                ellipse(320,200,360,180,25,15);
                floodfill(340,185,WHITE);
                setfillstyle(1,RED);
                ellipse(367,200,360,180,23,15);
                floodfill(385,185,WHITE);
                setfillstyle(1,BLUE);
                ellipse(250,90,360,180,5,19);
                floodfill(252,87,WHITE);
                setfillstyle(1,BLUE);
                line(245,191,245,310);
                line(255,191,255,310);
                floodfill(248,292,WHITE);
                setfillstyle(1,GREEN);
                line(165,310,345,310);
                floodfill(300,292,WHITE);
                //delay(15000);
                //closegraph();
                break;
            case 6:
                int i;
                initwindow(950, 650, "Truck");
                for (i = 0; i <= 165; i +=3) {
        cleardevice();
        setcolor(WHITE);
        outtextxy(200, 20, "                                                  Truck");
        setfillstyle(1, CYAN);
        rectangle(50, 50, 900, 600);
        floodfill(585, 100, WHITE);
        line(150 + i, 300, 490 + i, 300);
        line(300 + i, 480, 500 + i, 480);
        line(150 + i, 300, 150 + i, 480);
        line(150 + i, 480, 210 + i, 480);
        line(490 + i, 300, 490 + i, 480);
        line(500 + i, 480, 540 + i, 480);
        line(630 + i, 480, 702 + i, 480);
        line(490 + i, 390, 670 + i, 390);
        setfillstyle(1, RED);
        line(500 + i, 300, 600 + i, 300);
        line(500 + i, 300, 500 + i, 480);
        line(600 + i, 300, 650 + i, 390);
        line(510 + i, 310, 510 + i, 390);
        line(510 + i, 310, 595 + i, 310);
        line(595 + i, 310, 640 + i, 390);
        floodfill(635 + i, 370, WHITE);
        setfillstyle(1, RED);
        ellipse(669 + i, 415, 360, 90, 35, 25);
        floodfill(635 + i, 390, WHITE);
        line(702 + i, 410, 702 + i, 480);
        setfillstyle(1, RED);
        circle(255 + i, 480, 45);
        floodfill(250 + i, 430, WHITE);
        setfillstyle(1, BLACK);
        circle(255 + i, 480, 15);
        floodfill(250 + i, 450, WHITE);
        setfillstyle(1, DARKGRAY);
        circle(255 + i, 480, 1);
        floodfill(250 + i, 480, WHITE);
        setfillstyle(1, RED);
        circle(585 + i, 480, 45);
        floodfill(585 + i, 400, WHITE);
        setfillstyle(1, BLACK);
        circle(585 + i, 480, 15);
        floodfill(585 + i, 450, WHITE);
        setfillstyle(1, DARKGRAY);
        circle(585 + i, 480, 1);
        floodfill(585 + i, 470, WHITE);
        setfillstyle(1, BLUE);
        rectangle(150 + i, 430, 200 + i, 450);
        floodfill(170 + i, 440, WHITE);
        setfillstyle(1, GREEN);
        rectangle(150 + i, 460, 200 + i, 480);
        floodfill(170 + i, 465, WHITE);
        setfillstyle(1, GREEN);
        rectangle(650 + i, 460, 702 + i, 480);
        floodfill(670 + i, 470, WHITE);
        setfillstyle(1, YELLOW);
        rectangle(670 + i, 410, 702 + i, 440);
        floodfill(680 + i, 430, WHITE);

        // Delay to control animation speed
        delay(10);
    }

    // Close the graphics mode
    //getch();
    //closegraph();
                break;
            case 7:
                initwindow(800,700,"Village");
                outtextxy(200, 20, "                                     Village");
                setfillstyle(1,GREEN);
                rectangle(50,50,750,650);
                floodfill(400,400,WHITE);
                setfillstyle(1,LIGHTBLUE);
                line(50,285,750,270);
                floodfill(400,100,WHITE);
                setfillstyle(1,BLUE);
                ellipse(50,500,297,90,300,170);
                floodfill(70,550,WHITE);
                setfillstyle(1,MAGENTA);
                line(500,330,650,330);
                line(500,330,450,400);
                line(650,330,600,400);
                line(450,400,600,400);
                floodfill(550,340,WHITE);
                setfillstyle(1,MAGENTA);
                line(650,330,700,407);
                line(643,340,684,405);
                line(684,405,700,407);
                floodfill(690,400,WHITE);
                setfillstyle(1,DARKGRAY);
                line(460,400,460,470);
                line(610,385,610,475);
                line(460,470,610,475);
                floodfill(550,440,WHITE);
                setfillstyle(1,DARKGRAY);
                line(684,405,684,470);
                line(610,475,684,470);
                floodfill(650,400,WHITE);

                setfillstyle(1,LIGHTMAGENTA);
                rectangle(640,415,660,472);
                floodfill(650,450,WHITE);

                setfillstyle(1,BROWN);
                ellipse(635,567,302,72,100,100);
                ellipse(610,567,302,70,65,100);
                floodfill(700,600,WHITE);

                setfillstyle(1,RED);
                ellipse(190,284,362,180,70,70);
                floodfill(200,280,WHITE);

                ellipse(450,180,393,70,35,25);
                ellipse(518,180,116,143,50,25);
                ellipse(500,180,393,70,35,25);
                ellipse(568,180,116,143,50,25);
                ellipse(550,180,393,70,35,25);
                ellipse(618,180,116,143,50,25);

                ellipse(475,205,393,70,35,25);
                ellipse(543,205,116,143,50,25);
                ellipse(525,205,393,70,35,25);
                ellipse(593,205,116,143,50,25);

                ellipse(500,230,393,70,35,25);
                ellipse(568,230,116,143,50,25);






//line(50,500,390,400);//ara ari
//line(400,50,400,600);// lombo


//getch();
//delay(15000);
//closegraph();

                break;
            case 8:
                std::cout << "Exiting...\n";
                exit = true;
                break;
            default:
                std::cout << "Invalid choice.\n";
                break;
        }
    }

    return 0;
}

