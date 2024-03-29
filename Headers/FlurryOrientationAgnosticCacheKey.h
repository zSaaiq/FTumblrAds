//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IFlurryCacheKey-Protocol.h"

@class NSString;

@interface FlurryOrientationAgnosticCacheKey : NSObject <IFlurryCacheKey>
{
    int _orientation;
    NSString *adSpace;
}

+ (_Bool)isPortrait:(long long)arg1;
+ (id)withSpace:(id)arg1 andOrientation:(int)arg2;
+ (id)withSpace:(id)arg1 andInterfaceOrientation:(long long)arg2;
+ (id)withSpace:(id)arg1;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSString *adSpace; // @synthesize adSpace;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)reoriented;
- (id)initWithSpace:(id)arg1 andOrientation:(int)arg2;
- (id)initWithSpace:(id)arg1 andInterfaceOrientation:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

