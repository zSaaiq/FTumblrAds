//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC12KanvasCamera32EditorFilterCollectionController : UIViewController
{
    MISSING_TYPE *$__lazy_storage_$_filterCollectionView;
    MISSING_TYPE *filterItems;
    MISSING_TYPE *selectedIndexPath;
    MISSING_TYPE *scrollingStartPoint;
    MISSING_TYPE *feedbackGenerator;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
