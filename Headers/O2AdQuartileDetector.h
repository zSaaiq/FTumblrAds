//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class O2PartDetector;

@interface O2AdQuartileDetector : NSObject
{
    O2PartDetector *_detector;
}

- (void).cxx_destruct;
@property(retain, nonatomic) O2PartDetector *detector; // @synthesize detector=_detector;
- (id)processIsPlaying:(_Bool)arg1 withCurrentTime:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 currentSlotID:(id)arg4;
- (id)processWithState:(id)arg1;
- (id)init;

@end

