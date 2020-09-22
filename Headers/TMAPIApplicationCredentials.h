//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMAPIApplicationCredentials : NSObject
{
    NSString *_consumerKey;
    NSString *_consumerSecret;
}

+ (id)tumblrAppCredentials;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *consumerSecret; // @synthesize consumerSecret=_consumerSecret;
@property(readonly, copy, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
- (_Bool)validCredentials;
- (id)initWithConsumerKey:(id)arg1 consumerSecret:(id)arg2;

@end

