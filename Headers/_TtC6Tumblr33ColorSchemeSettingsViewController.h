//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class MISSING_TYPE;

@interface _TtC6Tumblr33ColorSchemeSettingsViewController : UITableViewController
{
    MISSING_TYPE *appColorScheme;
    MISSING_TYPE *selectedSchemeIndexPath;
    MISSING_TYPE *cellHorizontalInset;
    MISSING_TYPE *$__lazy_storage_$_osVersionDependentPalettes;
    MISSING_TYPE *notificationCenter;
    MISSING_TYPE *analyticsBuffer;
    MISSING_TYPE *screenID;
    MISSING_TYPE *screenEventProvider;
    MISSING_TYPE *colorEventProvider;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)stylingForNavigationBar;
- (void)updateChangedUI:(id)arg1;
- (void)updateColors:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;

@end

