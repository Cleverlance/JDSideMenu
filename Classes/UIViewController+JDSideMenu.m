//
//  UIViewController+JDSideMenu.m
//  JDSideMenu
//
//  Created by Markus Emrich on 11.11.13.
//  Copyright (c) 2013 Markus Emrich. All rights reserved.
//

#import "UIViewController+JDSideMenu.h"

@implementation UIViewController (JDSideMenu)

- (JDSideMenu*)sideMenuController;
{
    if ([self.parentViewController isKindOfClass:[JDSideMenu class]]) {
        return (JDSideMenu*)self.parentViewController;
    }
    else if ([self.parentViewController isKindOfClass:[UINavigationController class]] && [self.parentViewController.parentViewController isKindOfClass:[JDSideMenu class]]) {
        return (JDSideMenu *)self.parentViewController.parentViewController;
    }
    
    return nil;
}

@end
