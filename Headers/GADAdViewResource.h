//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADAdViewResourceRequest, NSArray, NSData, NSHTTPURLResponse, NSMutableArray, NSMutableData, NSString;
@protocol OS_dispatch_queue;

@interface GADAdViewResource : NSObject
{
    NSMutableArray *_children;
    NSMutableData *_content;
    NSObject<OS_dispatch_queue> *_networkAddressQueue;
    NSString *_networkAddress;
    GADAdViewResourceRequest *_request;
    long long _sequenceNumber;
    GADAdViewResource *_parent;
    long long _type;
    NSHTTPURLResponse *_response;
}

@property(readonly, copy, nonatomic) NSData *content; // @synthesize content=_content;
@property(copy, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) __weak GADAdViewResource *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, copy, nonatomic) GADAdViewResourceRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)dictionaryRepresentationExcludingHeaders:(id)arg1;
- (id)description;
- (void)addRequestHeaders:(id)arg1;
- (void)appendContent:(id)arg1;
- (void)addChild:(id)arg1;
- (id)initWithRequest:(id)arg1 sequenceNumber:(long long)arg2;

@end

