//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GADBannerPool : NSObject
{
    NSMutableArray *_bannerPool;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long count;
- (void)removeEntry:(id)arg1;
- (id)nextEntry;
- (void)addEntry:(id)arg1;
- (id)init;

@end

