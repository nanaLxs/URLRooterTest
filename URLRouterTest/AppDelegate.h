//
//  AppDelegate.h
//  URLRouterTest
//
//  Created by 宗丽娜 on 2017/9/21.
//  Copyright © 2017年 宗丽娜. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

