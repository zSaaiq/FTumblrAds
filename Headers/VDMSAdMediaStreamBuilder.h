//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface VDMSAdMediaStreamBuilder : NSObject
{
    NSURL *_playbackUrl;
    NSString *_mimeType;
    NSString *_deliveryType;
    double _averageBitrateKbps;
}

- (void).cxx_destruct;
@property(nonatomic) double averageBitrateKbps; // @synthesize averageBitrateKbps=_averageBitrateKbps;
@property(retain, nonatomic) NSString *deliveryType; // @synthesize deliveryType=_deliveryType;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSURL *playbackUrl; // @synthesize playbackUrl=_playbackUrl;

@end

