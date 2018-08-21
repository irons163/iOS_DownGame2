//
//  Abcd.h
//  Try_DownGame2
//
//  Created by irons on 2015/6/2.
//  Copyright (c) 2015年 irons. All rights reserved.
//

#ifndef Try_DownGame2_Abcd_h
#define Try_DownGame2_Abcd_h

@protocol BviewControllerDelegate <NSObject>
- (void)BviewcontrollerDidTapButton;
- (void)BviewcontrollerDidTapBackToMenuButton;
@end

@interface BviewControllerInterface<BviewControllerDelegate>{
    
}
@end

#endif
