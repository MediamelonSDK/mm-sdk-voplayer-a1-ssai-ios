//
//  M3U8ExtXMediaList.h
//  M3U8Kit
//
//  Created by Sun Jin on 3/25/14.
//  Copyright (c) 2014 Jin Sun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MMSmartStreamingSDK/M3U8ExtXMedia.h>

@interface MMM3U8ExtXMediaList : NSObject

@property (nonatomic, assign ,readonly) NSUInteger count;

- (void)addExtXMedia:(MMM3U8ExtXMedia *)extXMedia;
- (MMM3U8ExtXMedia *)xMediaAtIndex:(NSUInteger)index;
- (MMM3U8ExtXMedia *)firstExtXMedia;
- (MMM3U8ExtXMedia *)lastExtXMedia;

- (MMM3U8ExtXMediaList *)audioList;
- (MMM3U8ExtXMedia *)suitableAudio;

- (MMM3U8ExtXMediaList *)videoList;
- (MMM3U8ExtXMedia *)suitableVideo;

- (MMM3U8ExtXMediaList *)subtitleList;
- (MMM3U8ExtXMedia *)suitableSubtitle;

@end
