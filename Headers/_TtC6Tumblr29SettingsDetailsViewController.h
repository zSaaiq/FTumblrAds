//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class MISSING_TYPE;

@interface _TtC6Tumblr29SettingsDetailsViewController : UITableViewController
{
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *session;
    MISSING_TYPE *appColorScheme;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *reachabilityDeterminer;
    MISSING_TYPE *appActivityStateObserver;
    MISSING_TYPE *settingsChangesObserver;
    MISSING_TYPE *pushNotificationRegistrar;
    MISSING_TYPE *analyticsBuffer;
    MISSING_TYPE *cellHorizontalInset;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)stylingForNavigationBar;
- (void)updateColors:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (void)updatePushNotificationAlertIfNeeded;

@end

