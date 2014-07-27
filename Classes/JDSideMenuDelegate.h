//
//  JDSideMenuDelegate.h
//  JDSideMenu
//
//  Created by Ondřej Beneš on 23/01/14.
//  Copyright (c) 2014 Markus Emrich. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol JDSideMenuDelegate <NSObject>

@optional
- (void)sideMenuWillAppear;
- (void)sideMenuDidAppear;
- (void)sideMenuWillDisappear;
- (void)sideMenuDidDisappear;
- (void)sideMenuWillChangeContent;
- (void)sideMenuDidChangeContent;

@end
