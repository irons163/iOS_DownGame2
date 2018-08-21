//
//  IClearGestureUtil.h
//  Try_DownGame2
//
//  Created by irons on 2015/6/2.
//  Copyright (c) 2015年 irons. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BviewControllerDelegate <NSObject>
- (void)BviewcontrollerDidTapButton;
- (void)BviewcontrollerDidTapBackToMenuButton;
@end

@interface IClearGestureUtil : NSObject<BviewControllerDelegate>

//@property id<BviewControllerDelegate> delegate;
//-(void)something;

@end
