//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC9GroupChat27CustomizeChatViewController : UIViewController
{
    MISSING_TYPE *$__lazy_storage_$_navigationDropdown;
    MISSING_TYPE *$__lazy_storage_$_rightBarButtonItem;
    MISSING_TYPE *$__lazy_storage_$_tableView;
    MISSING_TYPE *$__lazy_storage_$_saveButton;
    MISSING_TYPE *$__lazy_storage_$_saveProgressView;
    MISSING_TYPE *$__lazy_storage_$_saveBannerView;
    MISSING_TYPE *$__lazy_storage_$_saveBannerViewBottomAnchor;
    MISSING_TYPE *$__lazy_storage_$_reportFeedbackBannerView;
    MISSING_TYPE *$__lazy_storage_$_ephemeralitySettingsViewController;
    MISSING_TYPE *keyboardNotificationObserver;
    MISSING_TYPE *activeTextViewContainingCell;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *delegate;
    MISSING_TYPE *session;
    MISSING_TYPE *backgroundProvider;
    MISSING_TYPE *preferences;
    MISSING_TYPE *groupChatEventProvider;
    MISSING_TYPE *screenEventProvider;
    MISSING_TYPE *descriptionNumberOfLines;
    MISSING_TYPE *$__lazy_storage_$_drawerController;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)mediaPicker:(id)arg1 didFailToSelectItem:(long long)arg2;
- (void)mediaPicker:(id)arg1 didSelectMediaToEdit:(id)arg2;
- (void)mediaPickerDidAuthorizePhotoAccess:(id)arg1;
- (_Bool)mediaPicker:(id)arg1 shouldShowNavButton:(long long)arg2;
- (void)mediaPickerDidSelectShowSettings:(id)arg1;
- (long long)mediaPicker:(id)arg1 maximumNumberOfSelectedItemsForType:(long long)arg2;
- (void)mediaPicker:(id)arg1 shouldFinishDueToReason:(long long)arg2;
- (_Bool)mediaPickerShouldEditStills:(id)arg1;
- (void)mediaPicker:(id)arg1 didDeselectItem:(id)arg2;
- (void)mediaPicker:(id)arg1 didSelectItem:(id)arg2 thumbnail:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onTags:(id)arg1;
- (void)onHide:(id)arg1;
- (void)dismissKeyboard;
- (void)onSave;
- (void)onMenu:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) _Bool shouldAutorotate;

@end

