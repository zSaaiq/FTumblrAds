//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"
#import "NSURLConnectionDownloadDelegate-Protocol.h"

@class NSString, YTelemetryNetworkEntry;
@protocol YTelemetryDelegate><NSURLConnectionDataDelegate><NSURLConnectionDelegate><NSURLConnectionDownloadDelegate;

@interface YTelemetryNSURLConnectionDelegateInterceptor : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSURLConnectionDownloadDelegate>
{
    id <YTelemetryDelegate><NSURLConnectionDataDelegate><NSURLConnectionDelegate><NSURLConnectionDownloadDelegate> _target;
    YTelemetryNetworkEntry *_networkEntry;
    unsigned long long _dataSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long dataSize; // @synthesize dataSize=_dataSize;
@property(retain) YTelemetryNetworkEntry *networkEntry; // @synthesize networkEntry=_networkEntry;
@property(retain) id <YTelemetryDelegate><NSURLConnectionDataDelegate><NSURLConnectionDelegate><NSURLConnectionDownloadDelegate> target; // @synthesize target=_target;
- (void)recordStartTime;
- (void)connectionDidFinishDownloading:(id)arg1 destinationURL:(id)arg2;
- (void)connectionDidResumeDownloading:(id)arg1 totalBytesWritten:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)connection:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (_Bool)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)initAndInterceptFor:(id)arg1 withRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
