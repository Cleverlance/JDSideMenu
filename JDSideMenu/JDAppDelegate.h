//
//  SHAppDelegate.h
//  StatusBarTest
//
//  Created by Markus Emrich on 11/11/13.
//  Copyright (c) 2013 Markus Emrich. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JDSideMenuDelegate.h"

@interface JDAppDelegate : UIResponder <UIApplicationDelegate, JDSideMenuDelegate>

@property (strong, nonatomic) UIWindow *window;

@end
