//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class O2Future;

@interface O2VRMRequest : NSObject
{
    O2Future *_result;
}

+ (id)prerollRequestWithSlotProcessingResult:(id)arg1 pixelReporter:(id)arg2 store:(id)arg3 session:(id)arg4 onEvent:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) O2Future *result; // @synthesize result=_result;
- (void)cancel;
- (id)initWithSlotProcessingResult:(id)arg1 pixelReporter:(id)arg2 store:(id)arg3 session:(id)arg4 onEvent:(CDUnknownBlockType)arg5;

@end
