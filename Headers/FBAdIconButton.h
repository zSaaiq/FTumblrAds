//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface FBAdIconButton : UIButton
{
    unsigned long long _iconStyle;
}

@property(readonly, nonatomic) unsigned long long iconStyle; // @synthesize iconStyle=_iconStyle;
- (void)setDefaultColorStyle;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFillColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithIconStyle:(unsigned long long)arg1;

@end

