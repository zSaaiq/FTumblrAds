//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface YVHlsPreVariantInfo : NSObject <NSCopying>
{
    NSString *_mediaPlaylistUrlString;
    unsigned long long _bandwidth;
    unsigned long long _averageBandwidth;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _segmentCount;
    double _targetDuration;
    double _lastSegmentDuration;
    NSString *_tsUrlString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tsUrlString; // @synthesize tsUrlString=_tsUrlString;
@property(nonatomic) double lastSegmentDuration; // @synthesize lastSegmentDuration=_lastSegmentDuration;
@property(nonatomic) double targetDuration; // @synthesize targetDuration=_targetDuration;
@property(nonatomic) unsigned long long segmentCount; // @synthesize segmentCount=_segmentCount;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(nonatomic) unsigned long long averageBandwidth; // @synthesize averageBandwidth=_averageBandwidth;
@property(nonatomic) unsigned long long bandwidth; // @synthesize bandwidth=_bandwidth;
@property(retain, nonatomic) NSString *mediaPlaylistUrlString; // @synthesize mediaPlaylistUrlString=_mediaPlaylistUrlString;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
