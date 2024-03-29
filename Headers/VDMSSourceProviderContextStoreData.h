//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VDMSStoreData-Protocol.h"

@class NSDate, NSString, NSTimer, NSUUID, VDMSPlayerRecoveryContextStoreData, VDMSResourceRequestStoreData;

@interface VDMSSourceProviderContextStoreData : NSObject <VDMSStoreData>
{
    NSUUID *_uniqueIdentifier;
    VDMSSourceProviderContextStoreData *_transactionPair;
    VDMSResourceRequestStoreData *_sourceResourceRequest;
    VDMSResourceRequestStoreData *_uplynkContentQueryStringResourceRequest;
    VDMSPlayerRecoveryContextStoreData *_recoveryContext;
    NSDate *_originalRecoveryDate;
    unsigned long long _attemptNumber;
    NSTimer *_retryTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(nonatomic) unsigned long long attemptNumber; // @synthesize attemptNumber=_attemptNumber;
@property(retain, nonatomic) NSDate *originalRecoveryDate; // @synthesize originalRecoveryDate=_originalRecoveryDate;
@property(retain, nonatomic) VDMSPlayerRecoveryContextStoreData *recoveryContext; // @synthesize recoveryContext=_recoveryContext;
@property(retain, nonatomic) VDMSResourceRequestStoreData *uplynkContentQueryStringResourceRequest; // @synthesize uplynkContentQueryStringResourceRequest=_uplynkContentQueryStringResourceRequest;
@property(retain, nonatomic) VDMSResourceRequestStoreData *sourceResourceRequest; // @synthesize sourceResourceRequest=_sourceResourceRequest;
@property(nonatomic) __weak VDMSSourceProviderContextStoreData *transactionPair; // @synthesize transactionPair=_transactionPair;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)transactionCopy;
- (void)copyFromStoreData:(id)arg1;
- (id)initWithMediaItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

