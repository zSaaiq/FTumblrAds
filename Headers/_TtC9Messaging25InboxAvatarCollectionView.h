//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class MISSING_TYPE;

@interface _TtC9Messaging25InboxAvatarCollectionView : UICollectionView
{
    MISSING_TYPE *blogUUIDs;
    MISSING_TYPE *inboxBlogUUID;
    MISSING_TYPE *inboxDelegate;
    MISSING_TYPE *coreDataController;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

