//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMCustomHTTPHeaders : NSObject
{
    _Bool _isiPhone;
    _Bool _isProduction;
    _Bool _isTestFlight;
    NSString *_infoVersionNumber;
    NSString *_systemVersion;
    NSString *_infoBuildNumber;
    NSString *_configuration;
    NSString *_designator;
}

+ (id)versionHeaderValueWithAppDesignator:(id)arg1;
+ (id)versionHeaderValue;
+ (id)versionHeaderKey;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *designator; // @synthesize designator=_designator;
@property(readonly, copy, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) _Bool isTestFlight; // @synthesize isTestFlight=_isTestFlight;
@property(readonly, nonatomic) _Bool isProduction; // @synthesize isProduction=_isProduction;
@property(readonly, nonatomic) _Bool isiPhone; // @synthesize isiPhone=_isiPhone;
@property(readonly, copy, nonatomic) NSString *infoBuildNumber; // @synthesize infoBuildNumber=_infoBuildNumber;
@property(readonly, copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(readonly, copy, nonatomic) NSString *infoVersionNumber; // @synthesize infoVersionNumber=_infoVersionNumber;
- (id)versionHeaderValue;
- (id)initWithInfoVersionNumber:(id)arg1 systemVersion:(id)arg2 infoBuildNumber:(id)arg3 isiPhone:(_Bool)arg4 isProduction:(_Bool)arg5 isTestFlight:(_Bool)arg6 configuration:(id)arg7 designator:(id)arg8;

@end

