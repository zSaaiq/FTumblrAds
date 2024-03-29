//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface TMBlogBarItemsView : UIView
{
    NSMutableArray *_items;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void)prepareToRemoveItem:(id)arg1;
- (void)prepareToInsertItem:(id)arg1;
- (struct CGRect)moveFrameToTheLeft:(struct CGRect)arg1 amount:(double)arg2;
- (struct CGRect)moveFrameToTheRight:(struct CGRect)arg1 amount:(double)arg2;
- (_Bool)containsItem:(id)arg1;
- (unsigned long long)countOfItems;
- (void)removeItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAllItems;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

