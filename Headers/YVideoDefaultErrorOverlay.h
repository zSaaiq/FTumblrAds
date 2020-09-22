//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSBundle, NSString, UIButton, UIImageView, UILabel;
@protocol YVPlayerErrorOverlayDelegate;

@interface YVideoDefaultErrorOverlay : UIView
{
    id <YVPlayerErrorOverlayDelegate> _delegate;
    UIImageView *_backgroundImageView;
    UILabel *_videoErrorLabel;
    UILabel *_tryAgainLabel;
    UILabel *_errCodeLabel;
    UIButton *_tryAgainButton;
    UIButton *_feedbackButton;
    NSBundle *_bundle;
    UIButton *_geoblockingAction;
    NSString *_customFontname;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *customFontname; // @synthesize customFontname=_customFontname;
@property(retain, nonatomic) UIButton *geoblockingAction; // @synthesize geoblockingAction=_geoblockingAction;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(retain, nonatomic) UIButton *tryAgainButton; // @synthesize tryAgainButton=_tryAgainButton;
@property(retain, nonatomic) UILabel *errCodeLabel; // @synthesize errCodeLabel=_errCodeLabel;
@property(retain, nonatomic) UILabel *tryAgainLabel; // @synthesize tryAgainLabel=_tryAgainLabel;
@property(retain, nonatomic) UILabel *videoErrorLabel; // @synthesize videoErrorLabel=_videoErrorLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak id <YVPlayerErrorOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleLongDoublePress:(id)arg1;
- (void)tryAgainTapped:(id)arg1;
- (void)layoutSubviews;
- (id)backgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (void)handleGeoblockingAction:(id)arg1;
- (void)update;
- (void)feedbackButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andFontname:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
