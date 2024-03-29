//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKBridgeAPIProtocol-Protocol.h"

@class FBSDKBridgeAPIProtocolNativeV1, NSString;

@interface FBSDKBridgeAPIProtocolWebV2 : NSObject <FBSDKBridgeAPIProtocol>
{
    FBSDKBridgeAPIProtocolNativeV1 *_nativeProtocol;
}

- (void).cxx_destruct;
- (id)responseParametersForActionID:(id)arg1 queryParameters:(id)arg2 cancelled:(_Bool *)arg3 error:(id *)arg4;
- (id)requestURLWithActionID:(id)arg1 scheme:(id)arg2 methodName:(id)arg3 methodVersion:(id)arg4 parameters:(id)arg5 error:(id *)arg6;
- (id)_requestURLForDialogConfiguration:(id)arg1 error:(id *)arg2;
- (id)_redirectURLWithActionID:(id)arg1 methodName:(id)arg2 error:(id *)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

