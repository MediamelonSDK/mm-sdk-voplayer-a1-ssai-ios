//
//  M3U8SegmentInfoList.h
//  M3U8Kit
//
//  Created by Oneday on 13-1-11.
//  Copyright (c) 2013年 0day. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MMSmartStreamingSDK/M3U8SegmentInfo.h>

@interface MMM3U8SegmentInfoList : NSObject

@property (nonatomic, assign ,readonly) NSUInteger count;

- (void)addSegementInfo:(MMM3U8SegmentInfo *)segment;
- (MMM3U8SegmentInfo *)segmentInfoAtIndex:(NSUInteger)index;

@end
