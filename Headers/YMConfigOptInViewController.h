//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, UINavigationItem, YOptInView;

@interface YMConfigOptInViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate>
{
    UINavigationItem *_navItem;
    NSArray *_experiments;
    NSMutableDictionary *_changedValuesByExperimentName;
}

+ (void)presentOptInViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *changedValuesByExperimentName; // @synthesize changedValuesByExperimentName=_changedValuesByExperimentName;
@property(copy, nonatomic) NSArray *experiments; // @synthesize experiments=_experiments;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)navigationItem;
- (void)viewDidLoad;
- (void)loadView;
- (void)p_didTapCancel;
- (void)p_didTapSave;
- (id)init;
- (void)p_commonYMConfigOptInViewControllerInit;
- (id)p_chosenOverrideForExperiment:(id)arg1;
- (void)p_setChosenOverrideForExperiment:(id)arg1 toVariantID:(id)arg2;
- (void)p_commitChanges;
- (void)p_showAcceptConfirmationPrompt;
- (id)p_experimentForName:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)p_loadedExperimentsSorted;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) YOptInView *view;

@end

