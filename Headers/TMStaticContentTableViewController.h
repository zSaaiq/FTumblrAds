//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray;

@interface TMStaticContentTableViewController : UITableViewController
{
    NSArray *_sections;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)addSectionToSections:(id)arg1;
- (void)setPreferredContentHeightAndNotify:(double)arg1;
- (void)adjustPreferredHeightByValue:(double)arg1;
- (id)cellMetadataAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeAllSections;
@property(readonly, nonatomic) double preferredWidth;
- (void)updateSection:(id)arg1;
- (void)addSelectionSectionCellMetadata:(CDUnknownBlockType)arg1 isItemSelected:(CDUnknownBlockType)arg2 didSelectItem:(CDUnknownBlockType)arg3 buildSection:(CDUnknownBlockType)arg4;
- (void)addSection:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

@end

