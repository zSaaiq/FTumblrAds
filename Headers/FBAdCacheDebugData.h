//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBAdCacheDebugData : NSObject
{
    _Bool _hitOrMissLogged;
    _Bool _inMemoryCacheWriteFailureLogged;
    NSString *_requestId;
    NSString *_adFormat;
}

@property(readonly, nonatomic) _Bool inMemoryCacheWriteFailureLogged; // @synthesize inMemoryCacheWriteFailureLogged=_inMemoryCacheWriteFailureLogged;
@property(readonly, nonatomic) _Bool hitOrMissLogged; // @synthesize hitOrMissLogged=_hitOrMissLogged;
@property(readonly, copy, nonatomic) NSString *adFormat; // @synthesize adFormat=_adFormat;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)markInMemoryCacheWriteFailureLogged;
- (void)markHitOrMissLogged;
- (id)initWithRequestId:(id)arg1 adFormat:(id)arg2;

@end

