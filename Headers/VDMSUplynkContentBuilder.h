//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface VDMSUplynkContentBuilder : NSObject
{
    _Bool _isProtected;
    _Bool _usePreplay;
    _Bool _usePing;
    NSString *_uplynkId;
    NSString *_userId;
    NSString *_externalId;
    NSURL *_baseUrl;
    NSString *_queryString;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool usePing; // @synthesize usePing=_usePing;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(nonatomic) _Bool usePreplay; // @synthesize usePreplay=_usePreplay;
@property(nonatomic) _Bool isProtected; // @synthesize isProtected=_isProtected;
@property(copy, nonatomic) NSURL *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(copy, nonatomic) NSString *externalId; // @synthesize externalId=_externalId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *uplynkId; // @synthesize uplynkId=_uplynkId;
- (id)init;

@end

