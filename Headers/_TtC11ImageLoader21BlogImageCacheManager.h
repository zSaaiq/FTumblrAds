//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC11ImageLoader21BlogImageCacheManager : NSObject
{
    MISSING_TYPE *JPEGCompressionQuality;
    MISSING_TYPE *cache;
    MISSING_TYPE *lowPriorityQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)cacheHeaderImage:(id)arg1 forURLString:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cacheAvatarsWithUrlsWithWidths:(id)arg1 imageToResize:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearAvatarsForURLs:(id)arg1;
- (id)initWithCache:(id)arg1;

@end
