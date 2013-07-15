//
//  MVStoryLine.h
//  Move-iOS-SDK
//
//  Created by Vito on 13-7-14.
//  Copyright (c) 2013年 vito. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MVSegment.h"

@interface MVStoryLine : NSObject

@property (nonatomic, strong) NSDate *date;
@property (nonatomic, strong) NSArray *segments;
@property (nonatomic) NSInteger caloriesIdle;

- (MVStoryLine *)initWithDictionary:(NSDictionary *)dic;

@end
