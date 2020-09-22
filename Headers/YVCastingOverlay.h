//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, YVideoChromecast;
@protocol YVCastingOverlayDelegate;

@interface YVCastingOverlay : UIView
{
    id <YVCastingOverlayDelegate> _delegate;
    UIView *_castButtonView;
    UILabel *_castTitleLabel;
    UILabel *_castMessageLabel;
    NSString *_customFontname;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *customFontname; // @synthesize customFontname=_customFontname;
@property(retain, nonatomic) UILabel *castMessageLabel; // @synthesize castMessageLabel=_castMessageLabel;
@property(retain, nonatomic) UILabel *castTitleLabel; // @synthesize castTitleLabel=_castTitleLabel;
@property(retain, nonatomic) UIView *castButtonView; // @synthesize castButtonView=_castButtonView;
@property(nonatomic) __weak id <YVCastingOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewTapped;
@property(retain, nonatomic) NSString *castingMessage;
@property(retain, nonatomic) NSString *videoTitle;
@property(readonly, nonatomic) YVideoChromecast *chromecast;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andFontname:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

