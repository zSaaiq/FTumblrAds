//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IFlurryAdRequestDelegate-Protocol.h"

@class CLLocation, NSDictionary, NSOperationQueue, NSString, NSURL;
@protocol FlurryManagedUIRequestManagerDelegate, IFlurryManagedUIAdCrashReporting;

@interface FlurryManagedUIRequestManager : NSObject <IFlurryAdRequestDelegate>
{
    id <FlurryManagedUIRequestManagerDelegate> _delegate;
    NSURL *_adServerURL;
    CLLocation *_location;
    NSURL *_adLogsURL;
    NSURL *_debug;
    NSDictionary *_adCapabilities;
    NSString *_ymadVersion;
    id <IFlurryManagedUIAdCrashReporting> _crashReportingDelegate;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <IFlurryManagedUIAdCrashReporting> crashReportingDelegate; // @synthesize crashReportingDelegate=_crashReportingDelegate;
@property(retain, nonatomic) NSString *ymadVersion; // @synthesize ymadVersion=_ymadVersion;
@property(retain, nonatomic) NSDictionary *adCapabilities; // @synthesize adCapabilities=_adCapabilities;
@property(retain, nonatomic) NSURL *debug; // @synthesize debug=_debug;
@property(retain, nonatomic) NSURL *adLogsURL; // @synthesize adLogsURL=_adLogsURL;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSURL *adServerURL; // @synthesize adServerURL=_adServerURL;
@property(nonatomic) __weak id <FlurryManagedUIRequestManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)leaveBreadCrumb:(id)arg1;
- (void)adRequest:(id)arg1 successfulWithData:(id)arg2;
- (void)adRequest:(id)arg1 failedWithError:(id)arg2;
- (void)fetchAdUnitsForUnitIDs:(id)arg1 withBucketIds:(id)arg2 withBcookie:(id)arg3;
- (void)fetchAdUnitsForUnitIDs:(id)arg1 withBucketIds:(id)arg2 withBcookie:(id)arg3 withPartnerCode:(id)arg4;
- (void)fetchAdUnitsForUnitIDs:(id)arg1 withBucketIds:(id)arg2 withBcookie:(id)arg3 withPartnerCode:(id)arg4 withKeywords:(id)arg5 withOathCookies:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

