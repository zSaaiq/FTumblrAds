//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IFlurryStreamMessage-Protocol.h"

@class NSData, NSString;

@interface FlurryStreamMessage : NSObject <IFlurryStreamMessage>
{
    int _frameType;
    double _timeStamp;
    NSData *_payload;
}

@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) int frameType; // @synthesize frameType=_frameType;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

