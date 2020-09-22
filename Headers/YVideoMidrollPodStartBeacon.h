//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YVideoMidrollBeacon.h"

@class NSArray, NSDate;

@interface YVideoMidrollPodStartBeacon : YVideoMidrollBeacon
{
    NSArray *_creativeIds;
    NSDate *_cueInDate;
    NSDate *_playbackStartedDate;
    double _podDuration;
    double _totalExpectedDuration;
    long long _validAdCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long validAdCount; // @synthesize validAdCount=_validAdCount;
@property(nonatomic) double totalExpectedDuration; // @synthesize totalExpectedDuration=_totalExpectedDuration;
@property(nonatomic) double podDuration; // @synthesize podDuration=_podDuration;
@property(retain, nonatomic) NSDate *playbackStartedDate; // @synthesize playbackStartedDate=_playbackStartedDate;
@property(retain, nonatomic) NSDate *cueInDate; // @synthesize cueInDate=_cueInDate;
@property(retain, nonatomic) NSArray *creativeIds; // @synthesize creativeIds=_creativeIds;
- (void)fireWithAnalytics:(id)arg1;

@end

