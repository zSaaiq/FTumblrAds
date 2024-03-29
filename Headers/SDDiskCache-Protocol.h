//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, SDImageCacheConfig;

@protocol SDDiskCache <NSObject>
- (unsigned long long)totalSize;
- (unsigned long long)totalCount;
- (NSString *)cachePathForKey:(NSString *)arg1;
- (void)removeExpiredData;
- (void)removeAllData;
- (void)removeDataForKey:(NSString *)arg1;
- (void)setExtendedData:(NSData *)arg1 forKey:(NSString *)arg2;
- (NSData *)extendedDataForKey:(NSString *)arg1;
- (void)setData:(NSData *)arg1 forKey:(NSString *)arg2;
- (NSData *)dataForKey:(NSString *)arg1;
- (_Bool)containsDataForKey:(NSString *)arg1;
- (id)initWithCachePath:(NSString *)arg1 config:(SDImageCacheConfig *)arg2;
@end

