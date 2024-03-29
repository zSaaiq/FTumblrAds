//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VDMSAnalyticsEvent.h"

@class NSNumber;

@interface VDMSAnalyticsEventStall : VDMSAnalyticsEvent
{
    _Bool _recovering;
    double _stallDuration;
    long long _watchDuration;
    NSNumber *_playbackPosition;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool recovering; // @synthesize recovering=_recovering;
@property(retain, nonatomic) NSNumber *playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property(nonatomic) long long watchDuration; // @synthesize watchDuration=_watchDuration;
@property(nonatomic) double stallDuration; // @synthesize stallDuration=_stallDuration;

@end

