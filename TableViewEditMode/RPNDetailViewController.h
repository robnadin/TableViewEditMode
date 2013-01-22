//
//  RPNDetailViewController.h
//  TableViewEditMode
//
//  Created by Rob on 22/01/2013.
//  Copyright (c) 2013 Rob Nadin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RPNDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
