//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface YMAdOnScreenMetrics : NSObject
{
    unsigned long long _areaPercentageThreshold;
    double _durationThreshold;
}

+ (id)metricsWithAreaPercentageThreshold:(unsigned long long)arg1;
+ (unsigned long long)defaultAreaPercentageThreshold;
@property(nonatomic) double durationThreshold; // @synthesize durationThreshold=_durationThreshold;
@property(nonatomic) unsigned long long areaPercentageThreshold; // @synthesize areaPercentageThreshold=_areaPercentageThreshold;
- (id)initWithAreaPercentageThreshold:(unsigned long long)arg1 durationThreshold:(double)arg2;

@end

