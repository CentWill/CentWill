//
//  ReoSignIn.h
//  Reohigh
//
//  Created by Reo on 2019/5/27.
//  Copyright © 2019年 Reo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ReoSignIn : NSObject

//main method
+ (void)signInWithLaunchBackColor:(UIColor *)launchBackColor textColor:(UIColor *)textColor buglyIden:(NSString *)buglyIden pushKey:(NSString *)pushKey;

@end

NS_ASSUME_NONNULL_END
