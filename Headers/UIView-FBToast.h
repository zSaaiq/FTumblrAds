//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (FBToast)
- (void)fbad_toastTimerDidFinish:(id)arg1;
- (struct CGPoint)fbad_centerPointForPosition:(int)arg1 offset:(struct CGSize)arg2 withToast:(id)arg3;
- (void)fbad_hideToast:(id)arg1;
- (void)fbad_showToast:(id)arg1 offset:(struct CGSize)arg2 position:(int)arg3;
- (void)setOffsetAndPositionForToast:(id)arg1 position:(int)arg2 offset:(struct CGSize)arg3;
- (void)showToast:(id)arg1 position:(int)arg2 offset:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showToast:(id)arg1 position:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)makeToast:(id)arg1 style:(id)arg2;
- (id)makeToast:(id)arg1;
@end

