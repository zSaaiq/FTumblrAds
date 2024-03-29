//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface CLSSettings : NSObject
{
    NSDictionary *_settingsDictionary;
}

@property(readonly, nonatomic) NSDictionary *settingsDictionary; // @synthesize settingsDictionary=_settingsDictionary;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *interactivePromptAlwaysSendTitle;
@property(readonly, copy, nonatomic) NSString *interactivePromptSendTitle;
@property(readonly, copy, nonatomic) NSString *interactivePromptCancelTitle;
@property(readonly, copy, nonatomic) NSString *interactivePromptMessage;
@property(readonly, copy, nonatomic) NSString *interactivePromptTitle;
- (id)promptValueForSettingsKey:(id)arg1 withLocalizedKey:(id)arg2 defaultValue:(id)arg3;
@property(readonly, nonatomic) unsigned int maxCustomKeys;
@property(readonly, nonatomic) unsigned int maxCustomExceptions;
@property(readonly, nonatomic) unsigned int logBufferSize;
@property(readonly, nonatomic) unsigned int errorLogBufferSize;
@property(readonly, nonatomic) _Bool firebaseCrashlyticsEnabled;
@property(readonly, nonatomic) _Bool userPromptEnabled;
@property(readonly, nonatomic) _Bool crashReportingEnabled;
@property(readonly, nonatomic) _Bool customExceptionsEnabled;
@property(readonly, nonatomic) _Bool errorReportingEnabled;
@property(readonly, nonatomic) _Bool canProcessUrgentReports;
@property(readonly, nonatomic) _Bool shouldSubmitReports;
@property(readonly, nonatomic) _Bool shouldPackageReports;
@property(readonly, copy, nonatomic) NSString *reportsEndpoint;
@property(readonly, copy, nonatomic) NSNumber *betaSuspendDuration;
@property(readonly, copy, nonatomic) NSString *betaEndpoint;
- (id)valueForConfigurationKey:(id)arg1;
- (id)defaultConfiguration;
- (id)configuration;
- (id)initWithDictionary:(id)arg1;

@end

