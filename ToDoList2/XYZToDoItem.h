//
//  XYZToDoItem.h
//  ToDoList2
//
//  Created by shu ghosh on 4/21/14.
//  Copyright (c) 2014 shu ghosh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
