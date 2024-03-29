//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMapTable;

@interface YVFairplayCertificateCache : NSObject
{
    NSCache *_certificateCache;
    NSMapTable *_activeRequests;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *activeRequests; // @synthesize activeRequests=_activeRequests;
@property(readonly, nonatomic) NSCache *certificateCache; // @synthesize certificateCache=_certificateCache;
- (void)requestCertificateWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

