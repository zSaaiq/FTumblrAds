//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface O2PixelAdSlotOpportunityDetector : NSObject
{
    _Bool _isAlreadyDetected;
}

@property(nonatomic) _Bool isAlreadyDetected; // @synthesize isAlreadyDetected=_isAlreadyDetected;
- (_Bool)processWithAdPlaying:(_Bool)arg1 andContentPlaying:(_Bool)arg2 hasViewport:(_Bool)arg3 vrmVersion:(unsigned long long)arg4;
- (_Bool)processWithState:(id)arg1;

@end

