//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class O2SlotID;

@interface O2PartDetector : NSObject
{
    CDUnknownBlockType _partCalculator;
    unsigned long long _topReachedPart;
    O2SlotID *_currentSlotID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) O2SlotID *currentSlotID; // @synthesize currentSlotID=_currentSlotID;
@property(nonatomic) unsigned long long topReachedPart; // @synthesize topReachedPart=_topReachedPart;
@property(readonly, copy, nonatomic) CDUnknownBlockType partCalculator; // @synthesize partCalculator=_partCalculator;
- (id)processIsPlaying:(_Bool)arg1 withCurrentTime:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 currentSlotID:(id)arg4;
- (id)initWithPartCalculator:(CDUnknownBlockType)arg1;

@end
