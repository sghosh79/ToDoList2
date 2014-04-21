//
//  XYZToDoListTableViewController.h
//  ToDoList2
//
//  Created by shu ghosh on 4/21/14.
//  Copyright (c) 2014 shu ghosh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYZToDoListTableViewController : UITableViewController

- (IBAction)unwindToList:(UIStoryboardSegue *)segue;

@property NSMutableArray *toDoItems;

@end
