//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBAdEnvironmentData, FBAdProviderResponseParser, NSMutableArray, NSOperationQueue;
@protocol FBAdProviderDelegate;

@interface FBAdProvider : NSObject
{
    _Bool _active;
    _Bool _shouldSyncAfterAdLoad;
    id <FBAdProviderDelegate> _delegate;
    FBAdProviderResponseParser *_adParser;
    FBAdEnvironmentData *_environmentData;
    NSOperationQueue *_parsingQueue;
    NSMutableArray *_requests;
    double _requestTime;
}

@property(nonatomic) _Bool shouldSyncAfterAdLoad; // @synthesize shouldSyncAfterAdLoad=_shouldSyncAfterAdLoad;
@property(nonatomic) double requestTime; // @synthesize requestTime=_requestTime;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) NSOperationQueue *parsingQueue; // @synthesize parsingQueue=_parsingQueue;
@property(retain, nonatomic) FBAdEnvironmentData *environmentData; // @synthesize environmentData=_environmentData;
@property(retain, nonatomic) FBAdProviderResponseParser *adParser; // @synthesize adParser=_adParser;
@property(nonatomic) __weak id <FBAdProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)funnelLogAdResponse:(id)arg1;
- (id)errorStringWithData:(id)arg1 JSONDict:(id)arg2;
- (id)parsingOperationWithData:(id)arg1 JSONDict:(id)arg2;
- (id)parsingOperationWithJSONDict:(id)arg1;
- (id)parsingOperationWithData:(id)arg1;
- (void)handleAdResponse:(id)arg1 data:(id)arg2 error:(id)arg3 deliveryUrl:(id)arg4;
- (void)handleAdRequestFailureWithError:(id)arg1 JSONDict:(id)arg2 endpoint:(id)arg3;
- (void)handleAdResponse:(id)arg1 JSONDict:(id)arg2 error:(id)arg3 endpoint:(id)arg4;
- (_Bool)maybeHandleBidPayload:(id)arg1;
- (void)makeAdRequestWithParameters:(id)arg1 endpoint:(id)arg2;
- (void)makeAdRequestWithParameters:(id)arg1;
- (void)dispatchError:(id)arg1;
- (void)destroy;
- (id)networkingService;
- (id)sync;
- (id)context;
- (void)cancel;
- (void)loadAdWithEnvironmentData:(id)arg1;
- (id)init;

@end

