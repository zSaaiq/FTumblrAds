//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class Formats, NSMutableArray, NSMutableDictionary, NSString;

@interface Ad : NSObject
{
    _Bool _isFallback;
    _Bool _isSkippable;
    _Bool _isAdChoice;
    NSString *_adFormat;
    NSString *_adId;
    unsigned long long _adSequence;
    NSString *_adType;
    NSString *_redirectUrl;
    NSString *_fallbackFor;
    NSString *_adParameters;
    NSString *_creativeId;
    NSString *_vastCreativeId;
    NSString *_bookingId;
    NSString *_placementId;
    NSString *_btrllId;
    NSString *_btrllAuctionId;
    NSString *_adSystem;
    NSMutableArray *_streams;
    NSMutableDictionary *_beaconMap;
    NSMutableDictionary *_paramMap;
    NSString *_position;
    NSString *_impressionId;
    NSString *_serveTime;
    NSString *_serveId;
    NSString *_spaceId;
    double _duration;
    NSString *_mtype;
    Formats *_formats;
    NSString *_adChoiceClickThroughUrl;
    NSString *_adChoiceIconUrl;
    NSMutableArray *_geminiTrackingBeacons;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *geminiTrackingBeacons; // @synthesize geminiTrackingBeacons=_geminiTrackingBeacons;
@property(retain) NSString *adChoiceIconUrl; // @synthesize adChoiceIconUrl=_adChoiceIconUrl;
@property(retain) NSString *adChoiceClickThroughUrl; // @synthesize adChoiceClickThroughUrl=_adChoiceClickThroughUrl;
@property _Bool isAdChoice; // @synthesize isAdChoice=_isAdChoice;
@property(retain) Formats *formats; // @synthesize formats=_formats;
@property(retain) NSString *mtype; // @synthesize mtype=_mtype;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(retain) NSString *spaceId; // @synthesize spaceId=_spaceId;
@property(retain) NSString *serveId; // @synthesize serveId=_serveId;
@property(retain) NSString *serveTime; // @synthesize serveTime=_serveTime;
@property(retain) NSString *impressionId; // @synthesize impressionId=_impressionId;
@property(retain) NSString *position; // @synthesize position=_position;
@property(retain) NSMutableDictionary *paramMap; // @synthesize paramMap=_paramMap;
@property(retain) NSMutableDictionary *beaconMap; // @synthesize beaconMap=_beaconMap;
@property(retain) NSMutableArray *streams; // @synthesize streams=_streams;
@property(retain) NSString *adSystem; // @synthesize adSystem=_adSystem;
@property(retain) NSString *btrllAuctionId; // @synthesize btrllAuctionId=_btrllAuctionId;
@property(retain) NSString *btrllId; // @synthesize btrllId=_btrllId;
@property(retain) NSString *placementId; // @synthesize placementId=_placementId;
@property(retain) NSString *bookingId; // @synthesize bookingId=_bookingId;
@property(retain) NSString *vastCreativeId; // @synthesize vastCreativeId=_vastCreativeId;
@property(retain) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain) NSString *adParameters; // @synthesize adParameters=_adParameters;
@property _Bool isSkippable; // @synthesize isSkippable=_isSkippable;
@property(retain) NSString *fallbackFor; // @synthesize fallbackFor=_fallbackFor;
@property _Bool isFallback; // @synthesize isFallback=_isFallback;
@property(retain) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(retain) NSString *adType; // @synthesize adType=_adType;
@property unsigned long long adSequence; // @synthesize adSequence=_adSequence;
@property(retain) NSString *adId; // @synthesize adId=_adId;
@property(retain) NSString *adFormat; // @synthesize adFormat=_adFormat;
- (void)mergeInto:(id)arg1;
- (id)getStreams;
- (id)getParamOfName:(id)arg1;
- (void)addParamOfName:(id)arg1 name:(id)arg2;
- (void)addMedia:(id)arg1 mediaFormat:(id)arg2 bitrate:(id)arg3 deliveryType:(id)arg4;
- (id)getBeaconsOfType:(id)arg1;
- (void)addBeaconOfType:(id)arg1 type:(id)arg2;
- (id)init;

@end

