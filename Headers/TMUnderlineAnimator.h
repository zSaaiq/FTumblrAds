//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAShapeLayer, NSString, UIColor, UIView;

@interface TMUnderlineAnimator : NSObject <CAAnimationDelegate>
{
    UIColor *_lineColor;
    UIView *_originatingView;
    CAShapeLayer *_underlineShapeLayer;
    struct CGRect _originatingRectangle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *underlineShapeLayer; // @synthesize underlineShapeLayer=_underlineShapeLayer;
@property(readonly, nonatomic) struct CGRect originatingRectangle; // @synthesize originatingRectangle=_originatingRectangle;
@property(readonly, nonatomic) UIView *originatingView; // @synthesize originatingView=_originatingView;
@property(readonly, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
- (id)newShapeLayerForRect:(struct CGRect)arg1;
- (id)animationKey;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startUnderlineLayerAnimationWithCallback:(CDUnknownBlockType)arg1;
- (void)animateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setupNewShapeLayer;
- (id)initWithView:(id)arg1 originatingRectangle:(struct CGRect)arg2 underlineColor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

