//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMAdDiagnosing.h"

@class NSError, NSNumber, NSString, YMAdManager, YMAdMiddleTierRequest, YMAdMiddleTierRequestBuilder, YMAdMiddleTierResponseFactory, YMAdResponse;

@interface YMAdRequest : YMAdDiagnosing
{
    int _requestState;
    YMAdResponse *_response;
    NSError *_error;
    CDUnknownBlockType _completionBlock;
    YMAdManager *_adManager;
    YMAdMiddleTierRequestBuilder *_requestBuilder;
    YMAdMiddleTierResponseFactory *_responseFactory;
    YMAdMiddleTierRequest *_request;
    NSString *_identifier;
    NSNumber *_adLayoutTypeOverride;
}

+ (id)createWithManager:(id)arg1 units:(id)arg2 options:(id)arg3 diagnostics:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *adLayoutTypeOverride; // @synthesize adLayoutTypeOverride=_adLayoutTypeOverride;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) YMAdMiddleTierRequest *request; // @synthesize request=_request;
@property int requestState; // @synthesize requestState=_requestState;
@property(retain, nonatomic) YMAdMiddleTierResponseFactory *responseFactory; // @synthesize responseFactory=_responseFactory;
@property(retain, nonatomic) YMAdMiddleTierRequestBuilder *requestBuilder; // @synthesize requestBuilder=_requestBuilder;
@property(retain, nonatomic) YMAdManager *adManager; // @synthesize adManager=_adManager;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) YMAdResponse *response; // @synthesize response=_response;
- (void)notifyOnCompletion:(CDUnknownBlockType)arg1;
@property(readonly) _Bool isComplete;
- (void)runRequest;
- (void)run;
- (CDUnknownBlockType)componentRejectionHandler;
- (CDUnknownBlockType)responseHandler;
- (void)instrumentValidationFailures:(id)arg1 forComponent:(id)arg2;
- (void)instrumentRequestFailure:(id)arg1;
- (id)requestBuilderWithAPIKey:(id)arg1 units:(id)arg2 options:(id)arg3;
- (id)initWithManager:(id)arg1 units:(id)arg2 options:(id)arg3 diagnostics:(id)arg4;

@end
