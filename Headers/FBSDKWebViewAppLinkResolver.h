//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKAppLinkResolving-Protocol.h"

@class NSString;

@interface FBSDKWebViewAppLinkResolver : NSObject <FBSDKAppLinkResolving>
{
}

+ (id)sharedInstance;
- (id)appLinkFromALData:(id)arg1 destination:(id)arg2;
- (void)getALDataFromLoadedPage:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)parseALData:(id)arg1;
- (void)appLinkFromURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)followRedirects:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
