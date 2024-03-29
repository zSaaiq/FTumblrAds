//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBAdQualityMetric : NSObject
{
    float _avg;
    float _current;
    float _eligibleThreshold;
    float _max;
    float _min;
    float _sum;
    double _continuousEligibleSeconds;
    double _eligibleSeconds;
    double _maxContinuousEligibleSeconds;
    long long _measurementCount;
    double _measurementSeconds;
}

+ (id)metricWithEligibleThreshold:(float)arg1;
@property(nonatomic) float sum; // @synthesize sum=_sum;
@property(readonly, nonatomic) float min; // @synthesize min=_min;
@property(readonly, nonatomic) double measurementSeconds; // @synthesize measurementSeconds=_measurementSeconds;
@property(readonly, nonatomic) long long measurementCount; // @synthesize measurementCount=_measurementCount;
@property(readonly, nonatomic) double maxContinuousEligibleSeconds; // @synthesize maxContinuousEligibleSeconds=_maxContinuousEligibleSeconds;
@property(readonly, nonatomic) float max; // @synthesize max=_max;
@property(readonly, nonatomic) float eligibleThreshold; // @synthesize eligibleThreshold=_eligibleThreshold;
@property(readonly, nonatomic) double eligibleSeconds; // @synthesize eligibleSeconds=_eligibleSeconds;
@property(readonly, nonatomic) float current; // @synthesize current=_current;
@property(readonly, nonatomic) double continuousEligibleSeconds; // @synthesize continuousEligibleSeconds=_continuousEligibleSeconds;
@property(readonly, nonatomic) float avg; // @synthesize avg=_avg;
- (void)resetMetricsAndContinuity;
- (void)resetMetrics;
- (void)registerProgress:(double)arg1 value:(float)arg2;
- (id)init;
- (id)initWithEligibleThreshold:(float)arg1;

@end

