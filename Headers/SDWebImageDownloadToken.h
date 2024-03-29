//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDWebImageOperation-Protocol.h"

@class NSOperation, NSString, NSURL, NSURLRequest, NSURLResponse, NSURLSessionTaskMetrics;
@protocol SDWebImageDownloaderOperation;

@interface SDWebImageDownloadToken : NSObject <SDWebImageOperation>
{
    _Bool _cancelled;
    NSURL *_url;
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSURLSessionTaskMetrics *_metrics;
    id _downloadOperationCancelToken;
    NSOperation<SDWebImageDownloaderOperation> *_downloadOperation;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) __weak NSOperation<SDWebImageDownloaderOperation> *downloadOperation; // @synthesize downloadOperation=_downloadOperation;
@property(nonatomic) __weak id downloadOperationCancelToken; // @synthesize downloadOperationCancelToken=_downloadOperationCancelToken;
@property(retain, nonatomic) NSURLSessionTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)cancel;
- (void)downloadDidStop:(id)arg1;
- (void)downloadDidReceiveResponse:(id)arg1;
- (id)initWithDownloadOperation:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

