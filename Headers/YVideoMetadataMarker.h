//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface YVideoMetadataMarker : NSObject
{
    double _startTime;
    NSDictionary *_markerDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *markerDict; // @synthesize markerDict=_markerDict;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;

@end
