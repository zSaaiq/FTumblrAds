//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPVolumeView, NSNumber, NSString, UILabel;

@interface YVNotAirplayableOverlay : UIView
{
    UILabel *_messageLabel;
    MPVolumeView *_airplayButton;
    UILabel *_stopAirplayLabel;
    NSNumber *_configuredForAirplay;
    NSString *_customFontname;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *customFontname; // @synthesize customFontname=_customFontname;
@property(retain, nonatomic) NSNumber *configuredForAirplay; // @synthesize configuredForAirplay=_configuredForAirplay;
@property(retain, nonatomic) UILabel *stopAirplayLabel; // @synthesize stopAirplayLabel=_stopAirplayLabel;
@property(retain, nonatomic) MPVolumeView *airplayButton; // @synthesize airplayButton=_airplayButton;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void)updateUIForExternalScreens;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andFontname:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

