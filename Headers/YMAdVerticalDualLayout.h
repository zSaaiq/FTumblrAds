//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumber;

@interface YMAdVerticalDualLayout : UIView
{
    UIView *_parentView;
    UIView *_topRegionView;
    UIView *_bottomRegionView;
    NSNumber *_padding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *padding; // @synthesize padding=_padding;
@property(nonatomic) __weak UIView *bottomRegionView; // @synthesize bottomRegionView=_bottomRegionView;
@property(nonatomic) __weak UIView *topRegionView; // @synthesize topRegionView=_topRegionView;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
- (void)setRegionHeight:(id)arg1 height:(double)arg2;
- (void)layoutSubviews;

@end

