//
//  ViewController.h
//  SimpleTableOOP
//
//  Created by dev on 12/12/15.
//  Copyright © 2015 dev. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <Parse/Parse.h>

@interface ViewController : PFQueryTableViewController

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@end

