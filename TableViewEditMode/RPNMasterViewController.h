//
//  RPNMasterViewController.h
//  TableViewEditMode
//
//  Created by Rob on 22/01/2013.
//  Copyright (c) 2013 Rob Nadin. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface RPNMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
