//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VDMSAnalyticsEvent.h"

@class NSNumber;

@interface VDMSAnalyticsEventBitrateChanged : VDMSAnalyticsEvent
{
    NSNumber *_indicatedBitrateNew;
    NSNumber *_indicatedBitrateOld;
    long long _watchDuration;
    CDStruct_1b6d18a9 _playbackPosition;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_1b6d18a9 playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property(nonatomic) long long watchDuration; // @synthesize watchDuration=_watchDuration;
@property(retain, nonatomic) NSNumber *indicatedBitrateOld; // @synthesize indicatedBitrateOld=_indicatedBitrateOld;
@property(retain, nonatomic) NSNumber *indicatedBitrateNew; // @synthesize indicatedBitrateNew=_indicatedBitrateNew;

@end
