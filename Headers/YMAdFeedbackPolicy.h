//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMAdPolicy.h"

@class NSString, UIColor, YMAdFeedbackOptions, YMAdL10NTable;

@interface YMAdFeedbackPolicy : YMAdPolicy
{
    _Bool _isEnabled;
    UIColor *_feedbackBackgroundColor;
    UIColor *_feedbackTextColor;
    UIColor *_feedbackOptionsTextColor;
    UIColor *_feedbackInfoTextColor;
    YMAdL10NTable *_hiddenTextL10NTable;
    YMAdL10NTable *_hiddenSubtextL10NTable;
    YMAdL10NTable *_submittedTextL10NTable;
    YMAdL10NTable *_submittedSubtextL10NTable;
    YMAdL10NTable *_feedbackTextL10NTable;
    YMAdL10NTable *_feedbackSubmitTextL10NTable;
    YMAdL10NTable *_feedbackInfoTextL10NTable;
    YMAdL10NTable *_hideTextL10NTable;
    YMAdL10NTable *_feedbackCancelTextL10NTable;
    YMAdL10NTable *_feedbackOptionsL10NTable;
}

+ (id)policyFromManifest:(id)arg1;
+ (Class)parserClass;
- (void).cxx_destruct;
@property(retain, nonatomic) YMAdL10NTable *feedbackOptionsL10NTable; // @synthesize feedbackOptionsL10NTable=_feedbackOptionsL10NTable;
@property(retain, nonatomic) YMAdL10NTable *feedbackCancelTextL10NTable; // @synthesize feedbackCancelTextL10NTable=_feedbackCancelTextL10NTable;
@property(retain, nonatomic) YMAdL10NTable *hideTextL10NTable; // @synthesize hideTextL10NTable=_hideTextL10NTable;
@property(retain, nonatomic) YMAdL10NTable *feedbackInfoTextL10NTable; // @synthesize feedbackInfoTextL10NTable=_feedbackInfoTextL10NTable;
@property(retain, nonatomic) YMAdL10NTable *feedbackSubmitTextL10NTable; // @synthesize feedbackSubmitTextL10NTable=_feedbackSubmitTextL10NTable;
@property(retain, nonatomic) YMAdL10NTable *feedbackTextL10NTable; // @synthesize feedbackTextL10NTable=_feedbackTextL10NTable;
@property(retain, nonatomic) YMAdL10NTable *submittedSubtextL10NTable; // @synthesize submittedSubtextL10NTable=_submittedSubtextL10NTable;
@property(retain, nonatomic) YMAdL10NTable *submittedTextL10NTable; // @synthesize submittedTextL10NTable=_submittedTextL10NTable;
@property(retain, nonatomic) YMAdL10NTable *hiddenSubtextL10NTable; // @synthesize hiddenSubtextL10NTable=_hiddenSubtextL10NTable;
@property(retain, nonatomic) YMAdL10NTable *hiddenTextL10NTable; // @synthesize hiddenTextL10NTable=_hiddenTextL10NTable;
@property(retain, nonatomic) UIColor *feedbackInfoTextColor; // @synthesize feedbackInfoTextColor=_feedbackInfoTextColor;
@property(retain, nonatomic) UIColor *feedbackOptionsTextColor; // @synthesize feedbackOptionsTextColor=_feedbackOptionsTextColor;
@property(retain, nonatomic) UIColor *feedbackTextColor; // @synthesize feedbackTextColor=_feedbackTextColor;
@property(retain, nonatomic) UIColor *feedbackBackgroundColor; // @synthesize feedbackBackgroundColor=_feedbackBackgroundColor;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(readonly, nonatomic) YMAdFeedbackOptions *feedbackOptions;
@property(readonly, nonatomic) NSString *hideText;
@property(readonly, nonatomic) NSString *feedbackInfoText;
@property(readonly, nonatomic) NSString *feedbackCancelText;
@property(readonly, nonatomic) NSString *feedbackSubmitText;
@property(readonly, nonatomic) NSString *feedbackText;
@property(readonly, nonatomic) NSString *submittedSubtext;
@property(readonly, nonatomic) NSString *submittedText;
@property(readonly, nonatomic) NSString *hiddenSubtext;
@property(readonly, nonatomic) NSString *hiddenText;

@end

