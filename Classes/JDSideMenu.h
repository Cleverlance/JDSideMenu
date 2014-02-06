//
//  JDSideMenu.h
//  StatusBarTest
//
//  Created by Markus Emrich on 11/11/13.
//  Copyright (c) 2013 Markus Emrich. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JDSideMenuDelegate.h"

@interface JDSideMenu : UIViewController <UIGestureRecognizerDelegate>

@property (nonatomic, readonly) UIViewController *contentController;
@property (nonatomic, readonly) UIViewController *menuController;
@property (nonatomic, getter = isMenuEnabled) BOOL menuEnabled;

@property (nonatomic, assign) CGFloat menuWidth;


@property (nonatomic, strong) UIImage *shadowImage;

@property (nonatomic, weak) id<JDSideMenuDelegate> delegate;

- (id)initWithContentController:(UIViewController*)contentController
                 menuController:(UIViewController*)menuController;

- (void)setContentController:(UIViewController*)contentController
                    animated:(BOOL)animated;

// show / hide manually
- (void)showMenuAnimated:(BOOL)animated;
- (void)hideMenuAnimated:(BOOL)animated;
- (BOOL)isMenuVisible;

// background
- (void)setBackgroundImage:(UIImage*)image;

@end
