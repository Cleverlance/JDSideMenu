//
//  SHAppDelegate.m
//  StatusBarTest
//
//  Created by Markus Emrich on 11/11/13.
//  Copyright (c) 2013 Markus Emrich. All rights reserved.
//

#import "JDSideMenu.h"
#import "JDMenuViewController.h"

#import "JDAppDelegate.h"

@implementation JDAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    [self.window makeKeyAndVisible];
    
    UIViewController *menuController = [[JDMenuViewController alloc] init];
    UIViewController *contentController = [[UIViewController alloc] init];
    contentController.view.backgroundColor = [UIColor colorWithHue:0.5 saturation:1.0 brightness:1.0 alpha:1.0];
    contentController.title = [NSString stringWithFormat: @"Hue: %.2f", 0.5];
    
    UIViewController *navController = [[UINavigationController alloc] initWithRootViewController:contentController];
    JDSideMenu *sideMenu = [[JDSideMenu alloc] initWithContentController:navController
                                                          menuController:menuController];
    sideMenu.shadowImage = [UIImage imageNamed:@"menu_shadow"];
    [sideMenu setBackgroundImage:[UIImage imageNamed:@"menuwallpaper"]];
    sideMenu.delegate = self;
    self.window.rootViewController = sideMenu;
    
    return YES;
}

#pragma mark - Side menu delegate

- (void)sideMenuWillAppear {
    LOG_METHOD;
}

- (void)sideMenuDidAppear {
    LOG_METHOD;
}

- (void)sideMenuWillDisappear {
    LOG_METHOD;
}

- (void)sideMenuDidDisappear {
    LOG_METHOD;
}

- (void)sideMenuWillChangeContent {
    LOG_METHOD;
}

- (void)sideMenuDidChangeContent {
    LOG_METHOD;
}

@end
