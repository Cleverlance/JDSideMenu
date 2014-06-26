//
//  JDSideMenu.h
//  StatusBarTest
//
//  Created by Markus Emrich on 11/11/13.
//  Copyright (c) 2013 Markus Emrich. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JDSideMenuDelegate.h"

UIKIT_EXTERN NSString * const JDSideMenuWillOpenNotification;
UIKIT_EXTERN NSString * const JDSideMenuDidOpenNotification;
UIKIT_EXTERN NSString * const JDSideMenuWillCloseNotification;
UIKIT_EXTERN NSString * const JDSideMenuDidCloseNotification;

@interface JDSideMenu : UIViewController <UIGestureRecognizerDelegate>

@property (nonatomic, readonly) UIViewController *contentController;
@property (nonatomic, readonly) UIViewController *menuController;
@property (nonatomic, getter = isMenuEnabled) BOOL menuEnabled;
@property (nonatomic) BOOL shouldBounce;

@property (nonatomic, assign) CGFloat menuWidth;


@property (nonatomic, strong) UIImage *shadowImage;

@property (nonatomic, weak) id<JDSideMenuDelegate> delegate;

- (id)initWithContentController:(UIViewController*)contentController
                 menuController:(UIViewController*)menuController;

- (void)setContentController:(UIViewController*)contentController
                    animated:(BOOL)animated;
- (void)setContentControllerImmediately:(UIViewController *)contentController;

// show / hide manually
- (void)showMenuAnimated:(BOOL)animated;
- (void)hideMenuAnimated:(BOOL)animated;
- (BOOL)isMenuVisible;

// background
- (void)setBackgroundImage:(UIImage*)image;

@end
