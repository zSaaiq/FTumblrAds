//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSAttributedString, UIImageView, UILabel, UIView;

@interface TMBlurredToggle : UIControl
{
    _Bool _on;
    NSAttributedString *_onAttributedText;
    NSAttributedString *_offAttributedText;
    UILabel *_maskLabel;
    UIImageView *_backgroundView;
    UIImageView *_textBackgroundView;
    UIView *_highlightOverlayView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightOverlayView; // @synthesize highlightOverlayView=_highlightOverlayView;
@property(retain, nonatomic) UIImageView *textBackgroundView; // @synthesize textBackgroundView=_textBackgroundView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *maskLabel; // @synthesize maskLabel=_maskLabel;
@property(readonly, nonatomic) NSAttributedString *offAttributedText; // @synthesize offAttributedText=_offAttributedText;
@property(readonly, nonatomic) NSAttributedString *onAttributedText; // @synthesize onAttributedText=_onAttributedText;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
- (void)renderBlurViews;
- (void)didMoveToSuperview;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithOnAttributedString:(id)arg1 offAttributedString:(id)arg2;

@end

