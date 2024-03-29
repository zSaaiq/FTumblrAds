//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMTextView.h"

@class NSArray;

@interface TMAttributedTextView : TMTextView
{
    NSArray *_inlineSubviews;
    CDUnknownBlockType _updateSubviewsBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType updateSubviewsBlock; // @synthesize updateSubviewsBlock=_updateSubviewsBlock;
@property(retain, nonatomic) NSArray *inlineSubviews; // @synthesize inlineSubviews=_inlineSubviews;
- (void)dealloc;
- (void)setAttributedText:(id)arg1;
- (void)callUpdateBlockIfAvailableWithSubviews:(id)arg1;
- (void)removeAllInlineSubviews;
- (void)addInlineSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

@end

