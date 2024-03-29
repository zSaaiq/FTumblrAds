//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMAlphaFadeButton.h"

@class CAShapeLayer, UIImageView, UILabel;

@interface TMUnknownFigureButton : TMAlphaFadeButton
{
    _Bool _drawsFullBorder;
    UIImageView *_chevronImageView;
    UIImageView *_typeImageView;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    CAShapeLayer *_dottedLineLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *dottedLineLayer; // @synthesize dottedLineLayer=_dottedLineLayer;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) UIImageView *typeImageView; // @synthesize typeImageView=_typeImageView;
@property(retain, nonatomic) UIImageView *chevronImageView; // @synthesize chevronImageView=_chevronImageView;
@property(nonatomic) _Bool drawsFullBorder; // @synthesize drawsFullBorder=_drawsFullBorder;
- (id)bezierPathForRoundedRectMode;
- (id)bezierPathForTopBottomDividerMode;
- (id)sourceHostStrippedOfWWWFromFrontIfNeeded:(id)arg1;
- (void)layoutSubviews;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithUnsupportedCache:(id)arg1;

@end

