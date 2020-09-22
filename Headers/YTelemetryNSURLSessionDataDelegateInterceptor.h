//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class NSString, NSURL, NSURLRequest, NSUUID;
@protocol YTelemetryDelegate><NSURLSessionTaskDelegate><NSURLSessionDelegate><NSURLSessionDownloadDelegate><NSURLSessionDataDelegate><NSURLSessionStreamDelegate;

@interface YTelemetryNSURLSessionDataDelegateInterceptor : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    id <YTelemetryDelegate><NSURLSessionTaskDelegate><NSURLSessionDelegate><NSURLSessionDownloadDelegate><NSURLSessionDataDelegate><NSURLSessionStreamDelegate> _target;
    NSUUID *_sessionid;
    NSURL *_url;
    NSURLRequest *_request;
}

- (void).cxx_destruct;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) NSUUID *sessionid; // @synthesize sessionid=_sessionid;
@property(retain) id <YTelemetryDelegate><NSURLSessionTaskDelegate><NSURLSessionDelegate><NSURLSessionDownloadDelegate><NSURLSessionDataDelegate><NSURLSessionStreamDelegate> target; // @synthesize target=_target;
- (void)removeDataTaskInfoForTask:(id)arg1;
- (id)dataTaskInfoForTask:(id)arg1;
- (void)URLSession:(id)arg1 readClosedForStreamTask:(id)arg2;
- (void)URLSession:(id)arg1 writeClosedForStreamTask:(id)arg2;
- (void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)initAndInterceptFor:(id)arg1 withSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
