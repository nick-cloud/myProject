#include "game.h"


game::game()
{
    games = new QGraphicsScene;
    QGraphicsRectItem *Rect = new QGraphicsRectItem;
    Rect -> setRect(0,0,100,100);
    games -> addItem(Rect);
    games -> setSceneRect(0,0,1280,800);

    QGraphicsView *View = new QGraphicsView(games);

    View ->show();
}
