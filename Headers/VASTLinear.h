//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, VASTMediaFiles, VASTTrackingEvents, VASTVideoClicks;

@interface VASTLinear : NSObject
{
    NSString *_duration;
    VASTTrackingEvents *_trackingEvents;
    NSString *_adParameters;
    NSMutableArray *_yahooAdParameters;
    VASTVideoClicks *_videoClicks;
    VASTMediaFiles *_mediaFiles;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VASTMediaFiles *mediaFiles; // @synthesize mediaFiles=_mediaFiles;
@property(retain, nonatomic) VASTVideoClicks *videoClicks; // @synthesize videoClicks=_videoClicks;
@property(retain, nonatomic) NSMutableArray *yahooAdParameters; // @synthesize yahooAdParameters=_yahooAdParameters;
@property(retain, nonatomic) NSString *adParameters; // @synthesize adParameters=_adParameters;
@property(retain, nonatomic) VASTTrackingEvents *trackingEvents; // @synthesize trackingEvents=_trackingEvents;
@property(retain, nonatomic) NSString *duration; // @synthesize duration=_duration;
- (id)description;
- (id)init;

@end

