//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MISSING_TYPE;

@interface _TtC6Tumblr19PostAttributionView : UIControl
{
    MISSING_TYPE *postFooterScrollViewModelHash;
    MISSING_TYPE *$__lazy_storage_$_textView;
    MISSING_TYPE *delegate;
    MISSING_TYPE *$__lazy_storage_$_longPressRecognizer;
    MISSING_TYPE *contentSource;
    MISSING_TYPE *recommendationReason;
    MISSING_TYPE *attributions;
    MISSING_TYPE *tagRanges;
    MISSING_TYPE *seeAllRange;
    MISSING_TYPE *highlightedRange;
    MISSING_TYPE *appColorScheme;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateColors:(id)arg1;
- (void)longPress:(id)arg1;
- (void)touchDragExit;
- (void)touchUpWithSender:(id)arg1 event:(id)arg2;
- (void)touchMovedWithSender:(id)arg1 event:(id)arg2;
- (void)touchDownWithSender:(id)arg1 event:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setupWith:(id)arg1 appColorScheme:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

