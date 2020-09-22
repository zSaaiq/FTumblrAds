//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMAdPolicyManifest.h"

@class NSDictionary, NSNumber, UIColor;

@interface YMAdFeedbackPolicyManifest : YMAdPolicyManifest
{
    NSNumber *_enabled;
    NSDictionary *_hiddenText;
    NSDictionary *_hiddenSubtext;
    NSDictionary *_submittedText;
    NSDictionary *_submittedSubtext;
    NSDictionary *_feedbackText;
    NSDictionary *_feedbackSubmitText;
    NSDictionary *_feedbackInfoText;
    NSDictionary *_hideText;
    NSDictionary *_feedbackCancelText;
    UIColor *_feedbackBackgroundColor;
    UIColor *_feedbackTextColor;
    UIColor *_feedbackOptionsTextColor;
    UIColor *_feedbackInfoTextColor;
    NSDictionary *_feedbackOptions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *feedbackOptions; // @synthesize feedbackOptions=_feedbackOptions;
@property(retain, nonatomic) UIColor *feedbackInfoTextColor; // @synthesize feedbackInfoTextColor=_feedbackInfoTextColor;
@property(retain, nonatomic) UIColor *feedbackOptionsTextColor; // @synthesize feedbackOptionsTextColor=_feedbackOptionsTextColor;
@property(retain, nonatomic) UIColor *feedbackTextColor; // @synthesize feedbackTextColor=_feedbackTextColor;
@property(retain, nonatomic) UIColor *feedbackBackgroundColor; // @synthesize feedbackBackgroundColor=_feedbackBackgroundColor;
@property(retain, nonatomic) NSDictionary *feedbackCancelText; // @synthesize feedbackCancelText=_feedbackCancelText;
@property(retain, nonatomic) NSDictionary *hideText; // @synthesize hideText=_hideText;
@property(retain, nonatomic) NSDictionary *feedbackInfoText; // @synthesize feedbackInfoText=_feedbackInfoText;
@property(retain, nonatomic) NSDictionary *feedbackSubmitText; // @synthesize feedbackSubmitText=_feedbackSubmitText;
@property(retain, nonatomic) NSDictionary *feedbackText; // @synthesize feedbackText=_feedbackText;
@property(retain, nonatomic) NSDictionary *submittedSubtext; // @synthesize submittedSubtext=_submittedSubtext;
@property(retain, nonatomic) NSDictionary *submittedText; // @synthesize submittedText=_submittedText;
@property(retain, nonatomic) NSDictionary *hiddenSubtext; // @synthesize hiddenSubtext=_hiddenSubtext;
@property(retain, nonatomic) NSDictionary *hiddenText; // @synthesize hiddenText=_hiddenText;
@property(retain, nonatomic) NSNumber *enabled; // @synthesize enabled=_enabled;
- (id)manifestMergingFromManifest:(id)arg1;
- (id)initWithPayload:(id)arg1;

@end

