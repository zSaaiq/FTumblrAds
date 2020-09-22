//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMStaticContentTableViewController.h"

#import "TMFormTextFieldCellDelegate-Protocol.h"
#import "TMScreenIdentifying-Protocol.h"

@class NSArray, NSString, TMFormBottomBar, TMPopupViewController, _TtC11TumblrTheme14AppColorScheme;
@protocol TMSession, _TtP9Analytics14EventBuffering_;

@interface TMFormViewController : TMStaticContentTableViewController <TMFormTextFieldCellDelegate, TMScreenIdentifying>
{
    _Bool _allowsSingleSelection;
    _Bool _lockContentOffset;
    _Bool _hasAppeared;
    NSString *_screenIdentifier;
    unsigned long long _firstResponderMode;
    unsigned long long _firstResponderSelectionPolicy;
    CDUnknownBlockType _wasSubmittedBlock;
    CDUnknownBlockType _returnedFromLastFieldBlock;
    _TtC11TumblrTheme14AppColorScheme *_appColorScheme;
    unsigned long long _numFailures;
    TMFormBottomBar *_bottomBar;
    NSArray *_completableCells;
    NSArray *_textFieldCells;
    id <TMSession> _session;
    id <_TtP9Analytics14EventBuffering_> _analyticsBuffer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <_TtP9Analytics14EventBuffering_> analyticsBuffer; // @synthesize analyticsBuffer=_analyticsBuffer;
@property(readonly, nonatomic) id <TMSession> session; // @synthesize session=_session;
@property(retain, nonatomic) NSArray *textFieldCells; // @synthesize textFieldCells=_textFieldCells;
@property(retain, nonatomic) NSArray *completableCells; // @synthesize completableCells=_completableCells;
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(retain, nonatomic) TMFormBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(nonatomic) unsigned long long numFailures; // @synthesize numFailures=_numFailures;
@property(retain, nonatomic) _TtC11TumblrTheme14AppColorScheme *appColorScheme; // @synthesize appColorScheme=_appColorScheme;
@property(nonatomic) _Bool lockContentOffset; // @synthesize lockContentOffset=_lockContentOffset;
@property(nonatomic) _Bool allowsSingleSelection; // @synthesize allowsSingleSelection=_allowsSingleSelection;
@property(copy, nonatomic) CDUnknownBlockType returnedFromLastFieldBlock; // @synthesize returnedFromLastFieldBlock=_returnedFromLastFieldBlock;
@property(copy, nonatomic) CDUnknownBlockType wasSubmittedBlock; // @synthesize wasSubmittedBlock=_wasSubmittedBlock;
@property(nonatomic) unsigned long long firstResponderSelectionPolicy; // @synthesize firstResponderSelectionPolicy=_firstResponderSelectionPolicy;
@property(nonatomic) unsigned long long firstResponderMode; // @synthesize firstResponderMode=_firstResponderMode;
@property(copy, nonatomic) NSString *screenIdentifier; // @synthesize screenIdentifier=_screenIdentifier;
- (_Bool)isComplete;
- (id)firstCell;
- (id)gatherTextFieldCellsAndBecomeDelegate;
- (id)gatherCompletableCellsAndObserveCompletionState;
- (id)filterTableCellsUsingBlock:(CDUnknownBlockType)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
@property(readonly, nonatomic) TMPopupViewController *popup;
- (void)shake;
- (_Bool)textFieldCellIsEditable:(id)arg1;
- (_Bool)textFieldCellShouldReturn:(id)arg1;
- (void)checkFormCompletion;
- (void)removeAllObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)bindToCompletableCells;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)resolveFirstResponder;
- (void)formDidChangeCompletionStatus:(_Bool)arg1;
- (void)deselectRowsAnimated:(_Bool)arg1;
- (void)setPopupFooterView:(id)arg1;
- (void)submissionFailedWithErrorMessage:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 submitButtonTitle:(id)arg3 submitBlock:(CDUnknownBlockType)arg4 displayLoadingIndicatorOnSubmit:(_Bool)arg5;
- (void)setCancelButtonTitle:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 submitButtonTitle:(id)arg3 submitBlock:(CDUnknownBlockType)arg4;
- (void)configureTableViewSections;
- (id)initWithStyle:(long long)arg1 session:(id)arg2 analyticsBuffer:(id)arg3 appColorScheme:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
