//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC9PostForms12PostFormView : UIView
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *textBlockDelegate;
    MISSING_TYPE *linkBlockDelegate;
    MISSING_TYPE *imageBlockCellDelegate;
    MISSING_TYPE *videoBlockCellDelegate;
    MISSING_TYPE *placeholderBlockDelegate;
    MISSING_TYPE *dragContainer;
    MISSING_TYPE *post;
    MISSING_TYPE *collectionView;
    MISSING_TYPE *collectionViewLayout;
    MISSING_TYPE *insertionBlock;
    MISSING_TYPE *cellProvider;
    MISSING_TYPE *reblogTrailProvider;
    MISSING_TYPE *dragController;
    MISSING_TYPE *longPressGestureRecognizer;
    MISSING_TYPE *panGestureRecognizer;
    MISSING_TYPE *tapGestureRecognizer;
    MISSING_TYPE *tagsDataSource;
    MISSING_TYPE *tagsDelegate;
    MISSING_TYPE *featureDeterminer;
    MISSING_TYPE *appColorScheme;
    MISSING_TYPE *miniMediaPickerEnabled;
    MISSING_TYPE *usePostFormHeaderRedesign;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tap:(id)arg1;
- (void)pan:(id)arg1;
- (void)longPress:(id)arg1;
- (void)updateColors:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;

@end

