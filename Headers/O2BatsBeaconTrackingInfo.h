//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface O2BatsBeaconTrackingInfo : NSObject
{
    NSString *_vendorName;
    NSString *_adSystem;
    NSString *_slot;
    NSString *_serverSideCallStatus;
    NSString *_adSequence;
    NSString *_rCode;
    NSString *_placementId;
}

+ (id)infoWithVendorName:(id)arg1 adSystem:(id)arg2 slot:(id)arg3 serverSideCallStatus:(id)arg4 adSequence:(id)arg5 rCode:(id)arg6 placementId:(id)arg7;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
@property(readonly, copy, nonatomic) NSString *rCode; // @synthesize rCode=_rCode;
@property(readonly, copy, nonatomic) NSString *adSequence; // @synthesize adSequence=_adSequence;
@property(readonly, copy, nonatomic) NSString *serverSideCallStatus; // @synthesize serverSideCallStatus=_serverSideCallStatus;
@property(readonly, copy, nonatomic) NSString *slot; // @synthesize slot=_slot;
@property(readonly, copy, nonatomic) NSString *adSystem; // @synthesize adSystem=_adSystem;
@property(readonly, copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
- (id)initWithVendorName:(id)arg1 adSystem:(id)arg2 slot:(id)arg3 serverSideCallStatus:(id)arg4 adSequence:(id)arg5 rCode:(id)arg6 placementId:(id)arg7;

@end
