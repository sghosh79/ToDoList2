//
//  XYZAddToDoItemViewController.h
//  ToDoList2
//
//  Created by shu ghosh on 4/21/14.
//  Copyright (c) 2014 shu ghosh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XYZToDoItem.h"


@interface XYZAddToDoItemViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *doneButton;


@property (retain, nonatomic) XYZToDoItem *toDoItem;


@end
