//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSDictionary, NSURLCredential, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionTask, NSURLSessionTaskMetrics;

@protocol SDWebImageDownloaderOperation <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
@property(readonly, nonatomic) NSURLResponse *response;
@property(readonly, nonatomic) NSURLRequest *request;
- (_Bool)cancel:(id)arg1;
- (id)addHandlersForProgress:(void (^)(long long, long long, NSURL *))arg1 completed:(void (^)(UIImage *, NSData *, NSError *, _Bool))arg2;
- (id)initWithRequest:(NSURLRequest *)arg1 inSession:(NSURLSession *)arg2 options:(unsigned long long)arg3 context:(NSDictionary *)arg4;
- (id)initWithRequest:(NSURLRequest *)arg1 inSession:(NSURLSession *)arg2 options:(unsigned long long)arg3;

@optional
@property(nonatomic) double minimumProgressInterval;
@property(retain, nonatomic) NSURLCredential *credential;
@property(readonly, nonatomic) NSURLSessionTaskMetrics *metrics;
@property(readonly, nonatomic) NSURLSessionTask *dataTask;
@end

