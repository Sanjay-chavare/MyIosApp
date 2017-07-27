//
//  AppDelegate.h
//  DemoApplication
//
//  Created by Arun S Arry on 27/07/17.
//  Copyright © 2017 Trabaajo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

