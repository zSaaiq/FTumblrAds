//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TMMediaTransitionController, UIView;

@protocol TMMediaTransitionControllerDelegate <NSObject>

@optional
- (void)mediaTransitionControllerDidDismiss:(TMMediaTransitionController *)arg1;
- (void)mediaTransitionController:(TMMediaTransitionController *)arg1 didLongPressMediaView:(UIView *)arg2 atPosition:(struct CGPoint)arg3;
- (_Bool)mediaTransitionController:(TMMediaTransitionController *)arg1 canTransitionMediaViewToFullScreen:(UIView *)arg2;
- (void)mediaTransitionController:(TMMediaTransitionController *)arg1 didPresentMediaView:(UIView *)arg2;
@end
