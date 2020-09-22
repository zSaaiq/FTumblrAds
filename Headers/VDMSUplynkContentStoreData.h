//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VDMSStoreData-Protocol.h"

@class NSString, NSURL, VDMSUplynkContent, VDMSUplynkSession;

@interface VDMSUplynkContentStoreData : NSObject <VDMSStoreData>
{
    _Bool _isProtected;
    _Bool _usePreplay;
    _Bool _usePing;
    VDMSUplynkContentStoreData *_transactionPair;
    VDMSUplynkContent *_externalUplynkContent;
    NSString *_assetId;
    NSString *_channelId;
    NSString *_externalId;
    NSString *_userId;
    NSURL *_baseUrl;
    NSString *_queryString;
    VDMSUplynkSession *_uplynkSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VDMSUplynkSession *uplynkSession; // @synthesize uplynkSession=_uplynkSession;
@property(nonatomic) _Bool usePing; // @synthesize usePing=_usePing;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(retain, nonatomic) NSURL *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(nonatomic) _Bool usePreplay; // @synthesize usePreplay=_usePreplay;
@property(nonatomic) _Bool isProtected; // @synthesize isProtected=_isProtected;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *externalId; // @synthesize externalId=_externalId;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSString *assetId; // @synthesize assetId=_assetId;
@property(retain, nonatomic) VDMSUplynkContent *externalUplynkContent; // @synthesize externalUplynkContent=_externalUplynkContent;
@property(nonatomic) __weak VDMSUplynkContentStoreData *transactionPair; // @synthesize transactionPair=_transactionPair;
@property(readonly, nonatomic) NSURL *playUrl;
@property(readonly, nonatomic) NSURL *preplayUrl;
- (id)uplynkContentUrlWithPreplay:(_Bool)arg1;
- (id)transactionCopy;
- (void)copyFromStoreData:(id)arg1;
- (id)initWithUplynkContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

