//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AnalyticsEvent.h"

@class NSString;

@interface AdDelivery : AnalyticsEvent
{
    unsigned long long _mediaStartLatency;
    NSString *_error;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *error; // @synthesize error=_error;
@property unsigned long long mediaStartLatency; // @synthesize mediaStartLatency=_mediaStartLatency;
- (id)init;

@end
