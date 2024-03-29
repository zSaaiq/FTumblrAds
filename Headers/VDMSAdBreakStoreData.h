//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VDMSStoreData-Protocol.h"

@class NSMutableArray, NSString, NSTimer, VDMSAdBreak;

@interface VDMSAdBreakStoreData : NSObject <VDMSStoreData>
{
    _Bool _triggered;
    _Bool _active;
    _Bool _resolvingBegan;
    _Bool _resolvingCompleted;
    VDMSAdBreakStoreData *_transactionPair;
    VDMSAdBreak *_externalAdBreak;
    long long _type;
    double _startOffset;
    NSTimer *_backToContentTimer;
    NSMutableArray *_adBreakItems;
    NSMutableArray *_completedClientSideAds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *completedClientSideAds; // @synthesize completedClientSideAds=_completedClientSideAds;
@property(retain, nonatomic) NSMutableArray *adBreakItems; // @synthesize adBreakItems=_adBreakItems;
@property(nonatomic) _Bool resolvingCompleted; // @synthesize resolvingCompleted=_resolvingCompleted;
@property(nonatomic) _Bool resolvingBegan; // @synthesize resolvingBegan=_resolvingBegan;
@property(retain, nonatomic) NSTimer *backToContentTimer; // @synthesize backToContentTimer=_backToContentTimer;
@property(nonatomic) double startOffset; // @synthesize startOffset=_startOffset;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) VDMSAdBreak *externalAdBreak; // @synthesize externalAdBreak=_externalAdBreak;
@property(nonatomic) __weak VDMSAdBreakStoreData *transactionPair; // @synthesize transactionPair=_transactionPair;
@property(readonly, nonatomic) _Bool triggered; // @synthesize triggered=_triggered;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)resetTrigger;
- (void)trigger;
@property(readonly, nonatomic) long long resolveStatus;
- (id)transactionCopy;
- (void)copyFromStoreData:(id)arg1;
- (id)initWithAdBreak:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

