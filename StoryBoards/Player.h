//
//  Player.h
//  StoryBoards
//
//  Created by Chentou TONG on 10/12/13.
//  Copyright (c) 2013 Chentou TONG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end
