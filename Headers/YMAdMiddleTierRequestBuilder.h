//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, YMAdRequestedUnits;

@interface YMAdMiddleTierRequestBuilder : NSObject
{
    YMAdRequestedUnits *_units;
    NSDictionary *_keywords;
    NSDictionary *_oathCookies;
    NSMutableDictionary *_basicParameters;
}

+ (id)createWithURL:(id)arg1 requestID:(id)arg2 APIKey:(id)arg3 deviceEnvironment:(id)arg4;
+ (id)createWithURL:(id)arg1 requestID:(id)arg2 partnerCode:(id)arg3 APIKey:(id)arg4 deviceEnvironment:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *basicParameters; // @synthesize basicParameters=_basicParameters;
@property(copy, nonatomic) NSDictionary *oathCookies; // @synthesize oathCookies=_oathCookies;
@property(copy, nonatomic) NSDictionary *keywords; // @synthesize keywords=_keywords;
@property(copy, nonatomic) YMAdRequestedUnits *units; // @synthesize units=_units;
- (id)buildWithDiagnostics:(id)arg1 responseHandler:(CDUnknownBlockType)arg2 componentRejectionHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (void)setDebug:(_Bool)arg1;
- (void)setOverrideResponseURL:(id)arg1;
- (void)setAppBundleID:(id)arg1;
- (void)setPartnerID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *languageCode;
- (void)setLanguage:(id)arg1;
- (id)initWithURL:(id)arg1 requestID:(id)arg2 APIKey:(id)arg3 deviceEnvironment:(id)arg4;

@end

