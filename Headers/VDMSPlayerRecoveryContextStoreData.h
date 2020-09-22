//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VDMSStoreData-Protocol.h"

@class NSDate, NSNumber, NSString, VDMSPlayerRecoveryContext;

@interface VDMSPlayerRecoveryContextStoreData : NSObject <VDMSStoreData>
{
    _Bool _expired;
    VDMSPlayerRecoveryContext *_externalRecoveryContext;
    NSDate *_startDate;
    unsigned long long _attemptNumber;
    NSNumber *_shouldAttemptRecovery;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool expired; // @synthesize expired=_expired;
@property(retain, nonatomic) NSNumber *shouldAttemptRecovery; // @synthesize shouldAttemptRecovery=_shouldAttemptRecovery;
@property(nonatomic) unsigned long long attemptNumber; // @synthesize attemptNumber=_attemptNumber;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) VDMSPlayerRecoveryContext *externalRecoveryContext; // @synthesize externalRecoveryContext=_externalRecoveryContext;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)transactionCopy;
- (void)copyFromStoreData:(id)arg1;
- (id)initWithNewExternalRecoveryContext:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

