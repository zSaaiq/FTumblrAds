//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VDMSVideoStreamMetadata : NSObject
{
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _maxBitrate;
    unsigned long long _averageBitrate;
}

@property(readonly, nonatomic) unsigned long long averageBitrate; // @synthesize averageBitrate=_averageBitrate;
@property(readonly, nonatomic) unsigned long long maxBitrate; // @synthesize maxBitrate=_maxBitrate;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
- (id)initWithBuilder:(id)arg1;

@end

