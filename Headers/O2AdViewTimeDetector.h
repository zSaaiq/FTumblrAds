//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class O2SlotID;

@interface O2AdViewTimeDetector : NSObject
{
    O2SlotID *_detectedSlot;
    CDStruct_1b6d18a9 _timePlayed;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_1b6d18a9 timePlayed; // @synthesize timePlayed=_timePlayed;
@property(retain, nonatomic) O2SlotID *detectedSlot; // @synthesize detectedSlot=_detectedSlot;
- (id)processWithPlaybackStatus:(long long)arg1 currentTime:(CDStruct_1b6d18a9)arg2 currentSlot:(id)arg3;
- (id)processWithState:(id)arg1;

@end
