//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSURLConnectionDelegate-Protocol.h"

@class NSURL, NSURLConnection;

@protocol NSURLConnectionDownloadDelegate <NSURLConnectionDelegate>
- (void)connectionDidFinishDownloading:(NSURLConnection *)arg1 destinationURL:(NSURL *)arg2;

@optional
- (void)connectionDidResumeDownloading:(NSURLConnection *)arg1 totalBytesWritten:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)connection:(NSURLConnection *)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 expectedTotalBytes:(long long)arg4;
@end
