//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

@class NSArray;
@protocol TMToastPanGestureRecognizerDelegate><UIGestureRecognizerDelegate;

@interface TMToastPanGestureRecognizer : UIPanGestureRecognizer
{
    NSArray *_toastTouches;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *toastTouches; // @synthesize toastTouches=_toastTouches;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)removeTouch:(id)arg1;
- (void)addTouch:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <TMToastPanGestureRecognizerDelegate><UIGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end
