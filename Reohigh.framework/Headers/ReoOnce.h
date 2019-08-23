//
//  ReoOnce.h
//  Reohigh
//
//  Created by Reo on 2019/5/27.
//  Copyright © 2019年 Reo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ReoOnce : NSObject

+ (instancetype)sharedOnce;

//recieved values
@property (nonatomic, copy) NSString *pushKey;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, strong) UIColor *launchBackColor;
@property (nonatomic, strong) UIColor *textColor;

@end

NS_ASSUME_NONNULL_END
