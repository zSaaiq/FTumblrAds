//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController, YMAdFeedbackQuestionnaireViewController;

@protocol YMAdFeedbackQuestionnaireViewControllerDelegate <NSObject>
- (void)feedbackQuestionnaireViewController:(YMAdFeedbackQuestionnaireViewController *)arg1 didClickLearnMore:(UIViewController *)arg2;
- (void)feedbackQuestionnaireViewController:(YMAdFeedbackQuestionnaireViewController *)arg1 didGiveFeedbackWithReason:(NSString *)arg2;
@end

