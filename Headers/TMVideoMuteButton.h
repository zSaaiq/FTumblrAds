//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImage;

@interface TMVideoMuteButton : UIButton
{
    _Bool _muted;
    UIImage *_soundOnButton;
    UIImage *_soundOffButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *soundOffButton; // @synthesize soundOffButton=_soundOffButton;
@property(retain, nonatomic) UIImage *soundOnButton; // @synthesize soundOnButton=_soundOnButton;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
- (id)accessibilityLabel;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
