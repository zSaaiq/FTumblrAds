//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol YBKCommonBrowserViewControllerDelegate, YBKTelemetryLogger;

@interface YBKCommonBrowserViewControllerBuilder : NSObject
{
    NSURL *_url;
    id <YBKCommonBrowserViewControllerDelegate> _delegate;
    id <YBKTelemetryLogger> _telemetryLogger;
    unsigned long long _allowedSupportedInterfaceOrientations;
}

+ (id)build:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long allowedSupportedInterfaceOrientations; // @synthesize allowedSupportedInterfaceOrientations=_allowedSupportedInterfaceOrientations;
@property(retain, nonatomic) id <YBKTelemetryLogger> telemetryLogger; // @synthesize telemetryLogger=_telemetryLogger;
@property(nonatomic) __weak id <YBKCommonBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)build;
- (_Bool)safariViewControllerSupported;

@end
