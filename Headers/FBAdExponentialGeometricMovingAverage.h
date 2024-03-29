//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAdMovingAverage-Protocol.h"

@class NSString;

@interface FBAdExponentialGeometricMovingAverage : NSObject <FBAdMovingAverage>
{
    double _decayConstant;
    unsigned long long _cutOver;
    double _average;
    unsigned long long _count;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) double average; // @synthesize average=_average;
- (void)reset;
- (_Bool)hasOneOrMoreMeasurements;
- (void)addMeasurement:(double)arg1;
- (void)addMeasurement:(double)arg1 weight:(double)arg2;
- (id)initWithDecayConstant:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

