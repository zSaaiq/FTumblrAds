//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VDMSStoreData-Protocol.h"

@class NSNumber, NSString, NSURL, NSUUID, YVideoMetadata;

@interface VDMSSourceVariantStoreData : NSObject <VDMSStoreData>
{
    VDMSSourceVariantStoreData *_transactionPair;
    NSUUID *_uniqueIdentifier;
    NSURL *_url;
    NSString *_contentType;
    YVideoMetadata *_vsdkMetadata;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_maxBitrate;
    NSNumber *_averageBitrate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *averageBitrate; // @synthesize averageBitrate=_averageBitrate;
@property(retain, nonatomic) NSNumber *maxBitrate; // @synthesize maxBitrate=_maxBitrate;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) YVideoMetadata *vsdkMetadata; // @synthesize vsdkMetadata=_vsdkMetadata;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) __weak VDMSSourceVariantStoreData *transactionPair; // @synthesize transactionPair=_transactionPair;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long deliveryType;
@property(readonly, nonatomic) _Bool playable;
- (id)transactionCopy;
- (id)initWithStoreData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

