//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdChoicesView, UIViewController;

@protocol FBAdChoicesViewDelegate <NSObject>

@optional
- (void)adChoicesView:(FBAdChoicesView *)arg1 viewControllerDismissed:(UIViewController *)arg2;
- (void)adChoicesView:(FBAdChoicesView *)arg1 viewControllerCompleted:(UIViewController *)arg2;
- (void)adChoicesView:(FBAdChoicesView *)arg1 willPresentViewController:(UIViewController *)arg2;
@end

