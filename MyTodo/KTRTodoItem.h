//
//  KTRTodoItem.h
//  MyTodo
//
//  Created by RYOKATO on 2014/06/18.
//  Copyright (c) 2014年 Denkinovel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KTRTodoItem : NSObject <NSCopying>
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *note;
@property (nonatomic) NSInteger priority;
@property (nonatomic) BOOL completed;
@end
