//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VDMSStoreData-Protocol.h"

@class NSData, NSError, NSString, NSURLResponse, VDMSUrlRequest;

@interface VDMSUrlRequestStoreData : NSObject <VDMSStoreData>
{
    _Bool _completed;
    VDMSUrlRequest *_request;
    VDMSUrlRequestStoreData *_transactionPair;
    NSURLResponse *_response;
    NSData *_data;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic) __weak VDMSUrlRequestStoreData *transactionPair; // @synthesize transactionPair=_transactionPair;
@property(readonly, nonatomic) VDMSUrlRequest *request; // @synthesize request=_request;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)transactionCopy;
- (void)copyFromStoreData:(id)arg1;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

