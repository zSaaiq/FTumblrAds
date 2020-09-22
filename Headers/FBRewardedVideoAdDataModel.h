//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBNativeAdDataModel.h"

@class NSString;

@interface FBRewardedVideoAdDataModel : FBNativeAdDataModel
{
    NSString *_activationCommand;
    NSString *_destinationTitle;
    CDStruct_1b6d18a9 _duration;
}

+ (void)initialize;
@property(readonly, copy, nonatomic) NSString *destinationTitle; // @synthesize destinationTitle=_destinationTitle;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSString *activationCommand; // @synthesize activationCommand=_activationCommand;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)initWithMetadata:(id)arg1 placementType:(long long)arg2;
@property(readonly, nonatomic) _Bool isPlayableAd;
- (id)initWithMetadata:(id)arg1;

@end
