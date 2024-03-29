//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VDMSInternalPlayer, VDMSResourceRequestStoreData;

@interface VDMSResourceRequest : NSObject
{
    _Bool _completed;
    VDMSInternalPlayer *_player;
    VDMSResourceRequestStoreData *_storeData;
}

- (void).cxx_destruct;
@property(nonatomic) __weak VDMSResourceRequestStoreData *storeData; // @synthesize storeData=_storeData;
@property(nonatomic) __weak VDMSInternalPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
- (void)sourceProviderNotImplemented;
- (void)failRequestWithError:(id)arg1;
- (void)completeRequestWithResource:(id)arg1;

@end

