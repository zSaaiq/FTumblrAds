//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMAdMiddleTierAdFeedbackManifest.h"

@class NSString;

@interface YMAdMiddleTierFlurryAdFeedbackManifest : YMAdMiddleTierAdFeedbackManifest
{
    NSString *_beaconURL;
    NSString *_infoURL;
    NSString *_domain;
}

+ (id)createWithBeaconURL:(id)arg1 infoURL:(id)arg2 domain:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *infoURL; // @synthesize infoURL=_infoURL;
@property(copy, nonatomic) NSString *beaconURL; // @synthesize beaconURL=_beaconURL;
- (id)initWithBeaconURL:(id)arg1 infoURL:(id)arg2 domain:(id)arg3;

@end

