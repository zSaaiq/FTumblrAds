//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSURL, UIImage;

@protocol SDWebImageCacheSerializer <NSObject>
- (NSData *)cacheDataWithImage:(UIImage *)arg1 originalData:(NSData *)arg2 imageURL:(NSURL *)arg3;
@end

