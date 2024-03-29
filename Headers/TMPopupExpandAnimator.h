//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMTransitionAnimator.h"

@class UIView;

@interface TMPopupExpandAnimator : TMTransitionAnimator
{
    UIView *_contentView;
    UIView *_backgroundView;
    struct CGPoint _startPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (void)dismiss:(id)arg1 fromViewController:(id)arg2 context:(id)arg3;
- (void)present:(id)arg1 fromViewController:(id)arg2 context:(id)arg3;
- (double)dismissalDuration;
- (double)presentationDuration;
- (id)initWithPopupViewController:(id)arg1;

@end

