//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCacheDelegate-Protocol.h"

@class NSCache, NSString;

@interface TMNoteViewModelCache : NSObject <NSCacheDelegate>
{
    NSCache *_cache;
    double _maximumWidth;
    CDUnknownBlockType _styleProvider;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(readonly, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void)dealloc;
- (id)initWithStyleProvider:(CDUnknownBlockType)arg1;
- (id)cacheForNote:(id)arg1 appColorScheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
