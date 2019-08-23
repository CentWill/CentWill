//
//  ReoSignIn.h
//  Reohigh
//
//  Created by Reo on 2019/5/27.
//  Copyright © 2019年 Reo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ReoOnce.h"

NS_ASSUME_NONNULL_BEGIN

@interface ReoSignIn : NSObject

+ (void)signInWithReoOnce:(void(^)(ReoOnce *once))configuration;

@end

NS_ASSUME_NONNULL_END
