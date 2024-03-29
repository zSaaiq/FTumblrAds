//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMFormViewController.h"

#import "TMBaseClearTableViewCellDelegate-Protocol.h"

@class NSMutableSet, NSString, TMKeyboardInsetSafeTableView, UIBarButtonItem;
@protocol TMOnboardingFormViewControllerDelegate;

@interface TMOnboardingFormViewController : TMFormViewController <TMBaseClearTableViewCellDelegate>
{
    _Bool _loading;
    _Bool _appeared;
    CDUnknownBlockType _nextBlock;
    id <TMOnboardingFormViewControllerDelegate> _formDelegate;
    NSMutableSet *_errorIndexPaths;
    double _keyboardHeight;
    UIBarButtonItem *_rightBarButtonItem;
    TMKeyboardInsetSafeTableView *_safeInsetTableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TMKeyboardInsetSafeTableView *safeInsetTableView; // @synthesize safeInsetTableView=_safeInsetTableView;
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem=_rightBarButtonItem;
@property(nonatomic, getter=hasAppeared) _Bool appeared; // @synthesize appeared=_appeared;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) NSMutableSet *errorIndexPaths; // @synthesize errorIndexPaths=_errorIndexPaths;
@property(readonly, nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) __weak id <TMOnboardingFormViewControllerDelegate> formDelegate; // @synthesize formDelegate=_formDelegate;
@property(copy, nonatomic) CDUnknownBlockType nextBlock; // @synthesize nextBlock=_nextBlock;
- (void)onboardingNavigationController:(id)arg1 willMoveViewControllerOnScreen:(_Bool)arg2;
- (id)indexPathBelow:(id)arg1;
- (id)sectionForIndexPath:(id)arg1;
- (id)attributedStringForErrorMessage:(id)arg1;
- (void)adjustContentSizeAndInsetsWithKeyboardHeight:(double)arg1;
- (_Bool)firstResponderIsTextInput;
- (void)clearTableViewCellShouldClearErrorMessage:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)dismiss:(id)arg1;
- (id)rightButtonTitle;
- (void)callNextBlock;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)textFieldCellIsEditable:(id)arg1;
- (void)stopLoadingWithError:(id)arg1;
- (_Bool)startLoading;
- (void)showToastWithMessage:(id)arg1 color:(id)arg2;
- (void)showToastWithMessage:(id)arg1;
- (void)showErrorToastWithMessage:(id)arg1;
- (void)updateRightBarButtonItemTitle;
- (void)setupRightBarButton;
- (void)clearErrorForCell:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)showErrorWithMessage:(id)arg1 forCell:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)formDidChangeCompletionStatus:(_Bool)arg1;
- (id)initWithSession:(id)arg1 analyticsBuffer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

