//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UILabel, UIView;
@protocol YMAdFeedbackPopoverViewControllerDelegate;

@interface YMAdFeedbackPopoverViewController : UIViewController
{
    id <YMAdFeedbackPopoverViewControllerDelegate> _delegate;
    UIView *_containerView;
    UIView *_arrowView;
    UILabel *_whySeeAdLabel;
    UILabel *_hideAdLabel;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *hideAdLabel; // @synthesize hideAdLabel=_hideAdLabel;
@property(nonatomic) __weak UILabel *whySeeAdLabel; // @synthesize whySeeAdLabel=_whySeeAdLabel;
@property(nonatomic) __weak UIView *arrowView; // @synthesize arrowView=_arrowView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <YMAdFeedbackPopoverViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hide;
- (void)handleHideAdTap:(id)arg1;
- (void)handleWhySeeAdTap:(id)arg1;
- (void)handleViewTap:(id)arg1;
- (void)positionPopover:(struct CGPoint)arg1;
- (void)initView;
- (void)showWithFeedbackPolicy:(id)arg1 delegate:(id)arg2 arrowPositionCoordinate:(struct CGPoint)arg3 presentingViewController:(id)arg4;
- (void)showWithFeedbackPolicy:(id)arg1 delegate:(id)arg2 arrowPositionCoordinate:(struct CGPoint)arg3;

@end

