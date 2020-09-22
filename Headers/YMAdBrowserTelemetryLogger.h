//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "YBKTelemetryLogger-Protocol.h"

@class NSString, NSURL;

@interface YMAdBrowserTelemetryLogger : NSObject <YBKTelemetryLogger>
{
    NSString *_telemetryString;
    NSURL *_telemetryURL;
    double _telemetryStart;
}

+ (id)loggerForAdIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double telemetryStart; // @synthesize telemetryStart=_telemetryStart;
@property(copy, nonatomic) NSURL *telemetryURL; // @synthesize telemetryURL=_telemetryURL;
@property(copy, nonatomic) NSString *telemetryString; // @synthesize telemetryString=_telemetryString;
- (void)loadFinished;
- (void)loadStartedWithRequest:(id)arg1 navigationType:(long long)arg2;
- (id)initWithTelemetryString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
