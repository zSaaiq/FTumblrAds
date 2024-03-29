//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSURLCredential, NSURLSessionConfiguration;

@interface SDWebImageDownloaderConfig : NSObject <NSCopying>
{
    long long _maxConcurrentDownloads;
    double _downloadTimeout;
    double _minimumProgressInterval;
    NSURLSessionConfiguration *_sessionConfiguration;
    Class _operationClass;
    long long _executionOrder;
    NSURLCredential *_urlCredential;
    NSString *_username;
    NSString *_password;
}

+ (id)defaultDownloaderConfig;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSURLCredential *urlCredential; // @synthesize urlCredential=_urlCredential;
@property(nonatomic) long long executionOrder; // @synthesize executionOrder=_executionOrder;
@property(nonatomic) Class operationClass; // @synthesize operationClass=_operationClass;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(nonatomic) double minimumProgressInterval; // @synthesize minimumProgressInterval=_minimumProgressInterval;
@property(nonatomic) double downloadTimeout; // @synthesize downloadTimeout=_downloadTimeout;
@property(nonatomic) long long maxConcurrentDownloads; // @synthesize maxConcurrentDownloads=_maxConcurrentDownloads;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

