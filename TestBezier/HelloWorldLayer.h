//
//  HelloWorldLayer.h
//  TestBezier
//
//  Created by KirbyGee on 1/23/13.
//  Copyright __MyCompanyName__ 2013. All rights reserved.
//


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

CGPoint endPosition;



// HelloWorldLayer
@interface HelloWorldLayer : CCLayer <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
   CCLayer *ballLayer;
   CCLayer *playerLayer;
   CCLayer *fieldTileLayer;
   BOOL bezierLTR;
   BOOL swipeStarted;
   BOOL pastDistance;
   BOOL touchStartedAtPlayer;
   int timeSwiped;
   int sentTime;
   
   CCSprite *qb;
   CCSprite *player1;
   CCSprite *player2;
   
   NSMutableArray *ballArray;
   NSMutableArray *removeArray;
   NSMutableArray *playerArray;
   NSMutableArray *streakArray;
   NSMutableArray *fieldTileArray;
   CGPoint playerTouchPoint;
   CGPoint touchLocation;
   CGPoint tlCopy;
   float velo;
   float dist;
   
   CGPoint controlPoint1;
   CGPoint controlPoint2;
   CGPoint newPoint;
   CGPoint midPoint;
   
   CGPoint point1;
   CGPoint point2;
   
   CGPoint tan;
   CGPoint tanSect;
   CGPoint startTouch;
   CGPoint firstTouch;
   CGPoint player1startPos;
   CGPoint player2startPos;
   
   NSMutableArray *pointArray;
   NSMutableArray *bezierArray;
   NSMutableArray *startingPos;

   CGPoint player1Control;
   CGPoint player2Control;
   
   float player1Slope;
   float player2Slope;
   
   CGPoint player1Hold;
   CGPoint player2Hold;
   
   BOOL player1BottomtoTop;
   BOOL player2BottomtoTop;
   BOOL player1LefttoRight;
   BOOL player2LefttoRight;
   BOOL showRoutes;
   BOOL player1Moving;
   BOOL player2Moving;
   BOOL playStarted;
   NSMutableArray *player1Book;
   NSMutableArray *player2Book;
   
   
   NSMutableArray *player1Movements;
   NSMutableArray *player2Movements;
   CGPoint p1;
   CGPoint p2;
   CGPoint p3;
   CGPoint p4;
   
   CGPoint p12;
   CGPoint p22;
   CGPoint p32;
   CGPoint p42;
   
   CGPoint newP1;
   CGPoint newP2;

   CGPoint newP12;
   CGPoint newP22;
   
   bool menuTouch;
   CCSprite *playMaker;
   CCSprite *playBg;
   CCSprite *playBg1;
   CCLayer *menuLayer;
   bool menuShowing;

}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
