//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAdSyncNetworkingService-Protocol.h"

@class NSString;
@protocol FBAdNetworkingService;

@interface FBAdSyncNetworkingServiceImpl : NSObject <FBAdSyncNetworkingService>
{
    id <FBAdNetworkingService> _networkingService;
    CDUnknownBlockType _hostProvider;
    CDUnknownBlockType _contextParameterProvider;
}

@property(readonly, nonatomic) CDUnknownBlockType contextParameterProvider; // @synthesize contextParameterProvider=_contextParameterProvider;
@property(readonly, nonatomic) CDUnknownBlockType hostProvider; // @synthesize hostProvider=_hostProvider;
@property(readonly, nonatomic) id <FBAdNetworkingService> networkingService; // @synthesize networkingService=_networkingService;
- (void).cxx_destruct;
- (id)requestTypeCommandForRequestType:(long long)arg1;
- (long long)responseTypeForResponseTypeCommand:(id)arg1;
- (id)parseResponse:(id)arg1;
- (void)performSynchronizationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (id)initWithNetworkingService:(id)arg1 hostProvider:(CDUnknownBlockType)arg2 contextParameterProvider:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

