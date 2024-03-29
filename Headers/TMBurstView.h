//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer, CAReplicatorLayer, UIColor;

@interface TMBurstView : UIView
{
    double _burstAnimationDuration;
    double _burstAnimationPopDistance;
    UIColor *_burstColor;
    double _burstCornerRadius;
    unsigned long long _burstCount;
    double _gradientDistanceFromTop;
    double _gradientHeight;
    double _spinDuration;
    CALayer *_burst;
    CALayer *_innerBurst;
    CAGradientLayer *_gradient;
    CAReplicatorLayer *_replicator;
    struct CGSize _burstSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAReplicatorLayer *replicator; // @synthesize replicator=_replicator;
@property(retain, nonatomic) CAGradientLayer *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) CALayer *innerBurst; // @synthesize innerBurst=_innerBurst;
@property(retain, nonatomic) CALayer *burst; // @synthesize burst=_burst;
@property(nonatomic) double spinDuration; // @synthesize spinDuration=_spinDuration;
@property(nonatomic) double gradientHeight; // @synthesize gradientHeight=_gradientHeight;
@property(nonatomic) double gradientDistanceFromTop; // @synthesize gradientDistanceFromTop=_gradientDistanceFromTop;
@property(nonatomic) struct CGSize burstSize; // @synthesize burstSize=_burstSize;
@property(nonatomic) unsigned long long burstCount; // @synthesize burstCount=_burstCount;
@property(nonatomic) double burstCornerRadius; // @synthesize burstCornerRadius=_burstCornerRadius;
@property(retain, nonatomic) UIColor *burstColor; // @synthesize burstColor=_burstColor;
@property(nonatomic) double burstAnimationPopDistance; // @synthesize burstAnimationPopDistance=_burstAnimationPopDistance;
@property(nonatomic) double burstAnimationDuration; // @synthesize burstAnimationDuration=_burstAnimationDuration;
- (void)animateBurst;
- (void)resumeSpinning;
- (void)pauseSpinning;
- (void)stopSpinning;
- (void)startSpinning;
@property(readonly, nonatomic, getter=isSpinning) _Bool spinning;
- (void)updateWithConfiguration;
- (id)_createGradientWithDistanceFromTop:(double)arg1;
- (id)_createBurstsWithBurst:(id)arg1 count:(unsigned long long)arg2;
- (id)_createSingleBurstWithInnerBurst:(id)arg1;
- (id)_createInnerBurstWithWidth:(double)arg1 height:(double)arg2 cornerRadius:(double)arg3 color:(id)arg4;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

