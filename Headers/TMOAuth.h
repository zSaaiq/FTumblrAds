//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMOAuth : NSObject
{
    NSString *_baseString;
    NSString *_headerString;
}

+ (id)OAuthParametersFromURL:(id)arg1 url:(id)arg2 method:(id)arg3 postParameters:(id)arg4 nonce:(id)arg5 consumerKey:(id)arg6 consumerSecret:(id)arg7 token:(id)arg8 tokenSecret:(id)arg9 timestamp:(id)arg10;
+ (id)signUrlWithQueryComponent:(id)arg1 method:(id)arg2 postParameters:(id)arg3 nonce:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 token:(id)arg7 tokenSecret:(id)arg8 timestamp:(id)arg9;
+ (id)headerForURL:(id)arg1 method:(id)arg2 postParameters:(id)arg3 nonce:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 token:(id)arg7 tokenSecret:(id)arg8;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *headerString; // @synthesize headerString=_headerString;
@property(readonly, nonatomic) NSString *baseString; // @synthesize baseString=_baseString;
- (id)initWithURL:(id)arg1 method:(id)arg2 postParameters:(id)arg3 nonce:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 token:(id)arg7 tokenSecret:(id)arg8;

@end

