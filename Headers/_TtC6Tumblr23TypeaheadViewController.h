//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSString;

@interface _TtC6Tumblr23TypeaheadViewController : UIViewController
{
    MISSING_TYPE *SearchResultsTagCellHeight;
    MISSING_TYPE *SearchResultsSectionHeaderHeight;
    MISSING_TYPE *SearchResultsCellRowHeight;
    MISSING_TYPE *TypeaheadSearchRowLeftInset;
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *session;
    MISSING_TYPE *searchViewControllerConfiguration;
    MISSING_TYPE *scrollViewThreshholdDetector;
    MISSING_TYPE *appColorScheme;
    MISSING_TYPE *cellHorizontalInset;
    MISSING_TYPE *tagsFound;
    MISSING_TYPE *blogsFound;
    MISSING_TYPE *searchString;
    MISSING_TYPE *tableView;
    MISSING_TYPE *headerLoader;
    MISSING_TYPE *delegate;
    MISSING_TYPE *keyboardInset;
    MISSING_TYPE *maxTagsToDisplay;
    MISSING_TYPE *screenIdentifier;
    MISSING_TYPE *typeaheadEventProvider;
    MISSING_TYPE *isFirstScroll;
    MISSING_TYPE *maxTagsThatFit;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateColors:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)carouselIndexForFollowButton:(id)arg1;
- (id)blogInfoForFollowButton:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, copy) NSString *screenIdentifier;

@end

