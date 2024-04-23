//
//  NSString+m3u8.h
//  M3U8Kit
//
//  Created by Oneday on 13-1-11.
//  Copyright (c) 2013年 0day. All rights reserved.
//

#import <Foundation/Foundation.h>

@class M3U8ExtXStreamInfList, MMM3U8SegmentInfoList;
@interface NSString (m3u8Extension)

- (BOOL)m3u_isExtendedM3Ufile;

- (BOOL)m3u_isMasterPlaylist;
- (BOOL)m3u_isMediaPlaylist;

- (MMM3U8SegmentInfoList *)m3u_segementInfoListValueRelativeToURL:(NSString *)baseURL;

/**
 @return "key=value" transform to dictionary
 */
- (NSMutableDictionary *)m3u_attributesFromAssignment;

@end
