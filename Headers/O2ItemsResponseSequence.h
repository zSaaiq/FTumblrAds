//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface O2ItemsResponseSequence : NSObject
{
    NSNumber *_currentSequenceValue;
    NSArray *_responseSequence;
}

+ (id)reduce:(id)arg1 action:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *responseSequence; // @synthesize responseSequence=_responseSequence;
@property(readonly, copy, nonatomic) NSNumber *currentSequenceValue; // @synthesize currentSequenceValue=_currentSequenceValue;
- (id)initWithResponseSequence:(id)arg1;

@end

