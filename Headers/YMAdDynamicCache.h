//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface YMAdDynamicCache : NSObject
{
    NSMutableDictionary *_cache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (id)createKeyFromText:(id)arg1 widthForKey:(double)arg2;
- (_Bool)validateCacheInput:(id)arg1 widthForKey:(double)arg2 sizeValue:(struct CGSize)arg3;
- (void)purgeCache;
- (struct CGSize)sizeFromCache:(id)arg1 widthForKey:(double)arg2 sizeValueToStore:(struct CGSize)arg3;
- (void)addToCache:(id)arg1 widthForKey:(double)arg2 sizeValueToStore:(struct CGSize)arg3;
- (id)init;

@end
