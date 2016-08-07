//
//  Dot.h
//  点坐标
//
//  Created by 王振超 on 16/4/1.
//  Copyright © 2016年 王振超. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Dot : NSObject
@property(nonatomic,assign)double x;
@property(nonatomic,assign)double y;

+(double)distance;
@end

