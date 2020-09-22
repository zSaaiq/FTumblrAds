//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADResourceCache, NSError;

@protocol GADResourceCacheDelegate <NSObject>

@optional
- (void)resourceCache:(GADResourceCache *)arg1 didFailCachingWithError:(NSError *)arg2;
- (void)resourceCacheDidSucceedCaching:(GADResourceCache *)arg1;
- (void)resourceCacheDidReceiveData:(GADResourceCache *)arg1;
- (void)resourceCacheDidReceiveResponse:(GADResourceCache *)arg1;
- (void)resourceCacheDidStartCaching:(GADResourceCache *)arg1;
@end

