//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlurryAdBeaconParameter-Protocol.h"

@class NSString;

@interface FlurryAdBeaconParameters : NSObject <FlurryAdBeaconParameter>
{
}

- (id)beaconKeyValues;
- (id)stringForFloat:(float)arg1;
- (id)stringForInt:(int)arg1;
- (id)stringForBOOL:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

