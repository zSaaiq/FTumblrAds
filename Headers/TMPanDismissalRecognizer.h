//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIView;
@protocol TMPanDismissalRecognizerDelegate;

@interface TMPanDismissalRecognizer : NSObject <UIGestureRecognizerDelegate>
{
    double _velocityToDismiss;
    double _dismissalDuration;
    double _returnToPositionDuration;
    id <TMPanDismissalRecognizerDelegate> _delegate;
    UIView *_view;
    UIView *_contentView;
    UIView *_backgroundView;
    CDUnknownBlockType _willDismissBlock;
    CDUnknownBlockType _didDismissBlock;
    UIPanGestureRecognizer *_panGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(copy, nonatomic) CDUnknownBlockType didDismissBlock; // @synthesize didDismissBlock=_didDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType willDismissBlock; // @synthesize willDismissBlock=_willDismissBlock;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <TMPanDismissalRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double returnToPositionDuration; // @synthesize returnToPositionDuration=_returnToPositionDuration;
@property(nonatomic) double dismissalDuration; // @synthesize dismissalDuration=_dismissalDuration;
@property(nonatomic) double velocityToDismiss; // @synthesize velocityToDismiss=_velocityToDismiss;
- (void)pan:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithView:(id)arg1 contentView:(id)arg2 backgroundView:(id)arg3 willDismissBlock:(CDUnknownBlockType)arg4 didDismissBlock:(CDUnknownBlockType)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

