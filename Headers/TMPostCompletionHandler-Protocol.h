//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol EventBuffering, TMComposeOptionsProviding;

@protocol TMPostCompletionHandler <NSObject>
- (void)userDidCompletePosting:(id <TMComposeOptionsProviding>)arg1 presentingViewController:(UIViewController *)arg2 analyticsBuffer:(id <EventBuffering>)arg3;
@end

