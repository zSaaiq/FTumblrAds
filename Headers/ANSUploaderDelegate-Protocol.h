//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ANSUploader, NSError, NSString, NSURLAuthenticationChallenge, NSURLRequest, NSURLResponse, NSURLSession;

@protocol ANSUploaderDelegate <NSObject>
- (void)uploader:(ANSUploader *)arg1 completedRequest:(NSURLRequest *)arg2 withResponse:(NSURLResponse *)arg3 uniqueName:(NSString *)arg4 error:(NSError *)arg5 completionHandler:(void (^)(_Bool, NSError *))arg6;
- (void)uploader:(ANSUploader *)arg1 didFinishUploadWithUniqueName:(NSString *)arg2 error:(NSError *)arg3;
- (NSString *)uploader:(ANSUploader *)arg1 filePathForUniqueName:(NSString *)arg2;

@optional
- (void)uploader:(ANSUploader *)arg1 session:(NSURLSession *)arg2 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg3 completionHandler:(void (^)(long long, NSURLCredential *))arg4;
@end

