//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBInstreamAdButton.h"

@interface FBInstreamSkipButtonView : FBInstreamAdButton
{
    unsigned long long _remainingSeconds;
}

@property(nonatomic) unsigned long long remainingSeconds; // @synthesize remainingSeconds=_remainingSeconds;
- (id)textWithRemainingSeconds:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithRemainingSeconds:(unsigned long long)arg1;

@end

