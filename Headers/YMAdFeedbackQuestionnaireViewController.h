//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UINavigationBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "YBKWebViewControllerDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIImageView, UILabel, UITableView, UIView, YMAdFeedbackPolicy;
@protocol YMAdFeedbackQuestionnaireViewControllerDelegate;

@interface YMAdFeedbackQuestionnaireViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationBarDelegate, YBKWebViewControllerDelegate>
{
    _Bool _isCardLayout;
    _Bool _includeMessages;
    _Bool _atThanksLayout;
    UITableView *_feedbackOptionsTable;
    UIView *_adDismissedView;
    UIView *_questionnaireView;
    UILabel *_questionnaireTitleLabel;
    UILabel *_dismissedViewTopLabel;
    UILabel *_dismissedViewBottomLabel;
    UIImageView *_feedbackQuestionnaireIcon;
    UIButton *_submitButton;
    UIButton *_cancelButton;
    UIImageView *_cancelIcon;
    UILabel *_whySeeAds;
    YMAdFeedbackPolicy *_feedbackPolicy;
    NSArray *_textOptions;
    long long _selectedCell;
    id <YMAdFeedbackQuestionnaireViewControllerDelegate> _delegate;
}

+ (id)nibNameWithCardLayout:(_Bool)arg1;
+ (id)createWithFeedbackPolicy:(id)arg1 withCardLayout:(_Bool)arg2 withMessages:(_Bool)arg3 delegate:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak id <YMAdFeedbackQuestionnaireViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool atThanksLayout; // @synthesize atThanksLayout=_atThanksLayout;
@property(nonatomic) long long selectedCell; // @synthesize selectedCell=_selectedCell;
@property(nonatomic) _Bool includeMessages; // @synthesize includeMessages=_includeMessages;
@property(nonatomic) _Bool isCardLayout; // @synthesize isCardLayout=_isCardLayout;
@property(retain, nonatomic) NSArray *textOptions; // @synthesize textOptions=_textOptions;
@property(retain, nonatomic) YMAdFeedbackPolicy *feedbackPolicy; // @synthesize feedbackPolicy=_feedbackPolicy;
@property(nonatomic) __weak UILabel *whySeeAds; // @synthesize whySeeAds=_whySeeAds;
@property(nonatomic) __weak UIImageView *cancelIcon; // @synthesize cancelIcon=_cancelIcon;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(nonatomic) __weak UIImageView *feedbackQuestionnaireIcon; // @synthesize feedbackQuestionnaireIcon=_feedbackQuestionnaireIcon;
@property(nonatomic) __weak UILabel *dismissedViewBottomLabel; // @synthesize dismissedViewBottomLabel=_dismissedViewBottomLabel;
@property(nonatomic) __weak UILabel *dismissedViewTopLabel; // @synthesize dismissedViewTopLabel=_dismissedViewTopLabel;
@property(nonatomic) __weak UILabel *questionnaireTitleLabel; // @synthesize questionnaireTitleLabel=_questionnaireTitleLabel;
@property(nonatomic) __weak UIView *questionnaireView; // @synthesize questionnaireView=_questionnaireView;
@property(nonatomic) __weak UIView *adDismissedView; // @synthesize adDismissedView=_adDismissedView;
@property(nonatomic) __weak UITableView *feedbackOptionsTable; // @synthesize feedbackOptionsTable=_feedbackOptionsTable;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dismissSelf;
- (void)presentWithViewController:(id)arg1;
- (void)learnMoreTapped:(id)arg1;
- (void)whySeeAdsTapped:(id)arg1;
- (void)touchedSubmit:(id)arg1;
- (void)didRequestCancelEvent;
- (void)touchedCancelIcon:(id)arg1;
- (void)touchedCancel:(id)arg1;
- (void)touchedGiveFeedback:(id)arg1;
- (void)setupThanks;
- (void)showQuestionnaireView:(_Bool)arg1;
- (void)showMessageView:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFeedbackPolicy:(id)arg1 withCardLayout:(_Bool)arg2 withMessages:(_Bool)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

