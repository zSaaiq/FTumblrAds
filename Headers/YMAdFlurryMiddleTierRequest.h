//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMAdMiddleTierRequest.h"

#import "FlurryManagedUIRequestManagerDelegate-Protocol.h"

@class CLLocation, FlurryManagedUIRequestManager, NSArray, NSDate, NSDictionary, NSString, NSURL, YMAdRequestedUnits;

@interface YMAdFlurryMiddleTierRequest : YMAdMiddleTierRequest <FlurryManagedUIRequestManagerDelegate>
{
    CDUnknownBlockType _responseHandler;
    CDUnknownBlockType _componentRejectionHandler;
    Class _connectionClass;
    YMAdRequestedUnits *_units;
    NSString *_partnerCode;
    NSDictionary *_adCapabilities;
    FlurryManagedUIRequestManager *_requestManager;
    NSArray *_bucketIDs;
    CLLocation *_location;
    NSURL *_adServerURL;
    NSURL *_debug;
    NSDate *_startTime;
}

+ (id)createWithAdUnits:(id)arg1 responseHandler:(CDUnknownBlockType)arg2 componentRejectionHandler:(CDUnknownBlockType)arg3 diagnostics:(id)arg4 connectionClass:(Class)arg5;
+ (id)createWithAdUnits:(id)arg1 responseHandler:(CDUnknownBlockType)arg2 componentRejectionHandler:(CDUnknownBlockType)arg3 diagnostics:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSURL *debug; // @synthesize debug=_debug;
@property(retain, nonatomic) NSURL *adServerURL; // @synthesize adServerURL=_adServerURL;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSArray *bucketIDs; // @synthesize bucketIDs=_bucketIDs;
@property(retain, nonatomic) FlurryManagedUIRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) NSDictionary *adCapabilities; // @synthesize adCapabilities=_adCapabilities;
@property(retain, nonatomic) NSString *partnerCode; // @synthesize partnerCode=_partnerCode;
@property(copy, nonatomic) YMAdRequestedUnits *units; // @synthesize units=_units;
@property(nonatomic) Class connectionClass; // @synthesize connectionClass=_connectionClass;
@property(copy, nonatomic) CDUnknownBlockType componentRejectionHandler; // @synthesize componentRejectionHandler=_componentRejectionHandler;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
- (void)adsNotAvailable:(id)arg1;
- (void)adsAvailable:(id)arg1;
- (id)buildResponseManifestFromAds:(id)arg1 error:(id *)arg2;
- (void)run;
- (id)initWithAdUnits:(id)arg1 responseHandler:(CDUnknownBlockType)arg2 componentRejectionHandler:(CDUnknownBlockType)arg3 diagnostics:(id)arg4 connectionClass:(Class)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
