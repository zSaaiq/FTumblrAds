//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, GADLocation, NSString;
@protocol OS_dispatch_queue;

@interface GADLocationService : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    GADLocation *_location;
    NSObject<OS_dispatch_queue> *_locationDataQueue;
    _Bool _featureEnabled;
    _Bool _publisherAuthorized;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)setPublisherAuthorized:(_Bool)arg1;
- (void)setFeatureEnabled:(_Bool)arg1;
- (void)updateLocation;
- (void)disable;
- (void)startUpdatingLocation;
@property(readonly, copy, nonatomic) GADLocation *location;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

