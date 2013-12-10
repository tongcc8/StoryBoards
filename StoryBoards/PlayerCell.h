//
//  PlayerCell.h
//  StoryBoards
//
//  Created by Chentou TONG on 10/12/13.
//  Copyright (c) 2013 Chentou TONG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *gameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *ratingImageView;

@end
