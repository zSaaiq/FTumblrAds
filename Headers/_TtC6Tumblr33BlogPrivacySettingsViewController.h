//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC6Tumblr33BlogPrivacySettingsViewController : UIViewController
{
    MISSING_TYPE *blogName;
    MISSING_TYPE *blogUUID;
    MISSING_TYPE *appColorScheme;
    MISSING_TYPE *blogIsAdult;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *cellHorizontalInset;
    MISSING_TYPE *tableView;
    MISSING_TYPE *hiddenFromBlogNetworkSwitch;
    MISSING_TYPE *hiddenFromSearchSwitch;
    MISSING_TYPE *adultOrientedSwitch;
    MISSING_TYPE *headerTheme;
    MISSING_TYPE *accountDelegate;
    MISSING_TYPE *$__lazy_storage_$_header;
    MISSING_TYPE *screenIdentifier;
    MISSING_TYPE *eventProvider;
    MISSING_TYPE *session;
    MISSING_TYPE *analyticsBuffer;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didToggleSwitch:(id)arg1;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)updateTheming:(id)arg1;
- (id)preferredTheme;
- (void)stopPreview;
- (void)startPreviewingWithEventualContainerNavigationController:(id)arg1;
- (id)stylingForNavigationBar;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (id)initWithCoder:(id)arg1;

@end

