//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLSURLSessionDataDelegate-Protocol.h"

@class CLSURLSessionDownloadTask, NSURL;

@protocol CLSURLSessionDownloadDelegate <CLSURLSessionDataDelegate>
- (void)downloadTask:(CLSURLSessionDownloadTask *)arg1 didFinishDownloadingToURL:(NSURL *)arg2;
@end

