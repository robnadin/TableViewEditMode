//
//  RPNAppDelegate.h
//  TableViewEditMode
//
//  Created by Rob on 22/01/2013.
//  Copyright (c) 2013 Rob Nadin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RPNAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
