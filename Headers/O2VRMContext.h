//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface O2VRMContext : NSObject
{
    _Bool _isAutoplayEnabled;
    double _softTimeout;
    double _hardTimeout;
    unsigned long long _maxVASTRedirectDepth;
    NSDictionary *_response;
    NSString *_playerVersion;
    NSURL *_trkBaseUrl;
    NSURL *_adsBaseUrl;
    NSString *_spaceId;
    unsigned long long _environment;
}

+ (id)defaultContextWithResponse:(id)arg1 isAutoplayEnabled:(_Bool)arg2 playerVersion:(id)arg3 environment:(unsigned long long)arg4 spaceId:(id)arg5;
+ (id)contextWithResponse:(id)arg1 timeout:(double)arg2 maxVASTRedirectDepth:(unsigned long long)arg3 isAutoplayEnabled:(_Bool)arg4 playerVersion:(id)arg5 environment:(unsigned long long)arg6 spaceId:(id)arg7;
+ (id)defaultContextWithResponse:(id)arg1 isAutoplayEnabled:(_Bool)arg2 playerVersion:(id)arg3 environment:(unsigned long long)arg4;
+ (id)contextWithResponse:(id)arg1 timeout:(double)arg2 maxVASTRedirectDepth:(unsigned long long)arg3 isAutoplayEnabled:(_Bool)arg4 playerVersion:(id)arg5 environment:(unsigned long long)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long environment; // @synthesize environment=_environment;
@property(readonly, copy, nonatomic) NSString *spaceId; // @synthesize spaceId=_spaceId;
@property(readonly, copy, nonatomic) NSURL *adsBaseUrl; // @synthesize adsBaseUrl=_adsBaseUrl;
@property(readonly, copy, nonatomic) NSURL *trkBaseUrl; // @synthesize trkBaseUrl=_trkBaseUrl;
@property(readonly, copy, nonatomic) NSString *playerVersion; // @synthesize playerVersion=_playerVersion;
@property(readonly, copy, nonatomic) NSDictionary *response; // @synthesize response=_response;
@property(readonly, nonatomic) _Bool isAutoplayEnabled; // @synthesize isAutoplayEnabled=_isAutoplayEnabled;
@property(readonly, nonatomic) unsigned long long maxVASTRedirectDepth; // @synthesize maxVASTRedirectDepth=_maxVASTRedirectDepth;
@property(readonly, nonatomic) double hardTimeout; // @synthesize hardTimeout=_hardTimeout;
@property(readonly, nonatomic) double softTimeout; // @synthesize softTimeout=_softTimeout;
- (id)initWithResponse:(id)arg1 timeout:(double)arg2 maxVASTRedirectDepth:(unsigned long long)arg3 isAutoplayEnabled:(_Bool)arg4 playerVersion:(id)arg5 environment:(unsigned long long)arg6 spaceId:(id)arg7;
- (id)initWithResponse:(id)arg1 isAutoplayEnabled:(_Bool)arg2 playerVersion:(id)arg3 environment:(unsigned long long)arg4 spaceId:(id)arg5;
- (id)initWithResponse:(id)arg1 softTimeout:(double)arg2 hardTimeout:(double)arg3 maxVASTRedirectDepth:(unsigned long long)arg4 isAutoplayEnabled:(_Bool)arg5 playerVersion:(id)arg6 environment:(unsigned long long)arg7 spaceId:(id)arg8;
- (id)initWithResponse:(id)arg1 softTimeout:(double)arg2 hardTimeout:(double)arg3 maxVASTRedirectDepth:(unsigned long long)arg4 isAutoplayEnabled:(_Bool)arg5 playerVersion:(id)arg6 environment:(unsigned long long)arg7 trkBaseUrl:(id)arg8 adsBaseUrl:(id)arg9 spaceId:(id)arg10;
- (id)initWithResponse:(id)arg1 isAutoplayEnabled:(_Bool)arg2 playerVersion:(id)arg3 environment:(unsigned long long)arg4;
- (id)initWithResponse:(id)arg1 timeout:(double)arg2 maxVASTRedirectDepth:(unsigned long long)arg3 isAutoplayEnabled:(_Bool)arg4 playerVersion:(id)arg5 environment:(unsigned long long)arg6;

@end

