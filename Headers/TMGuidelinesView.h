//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TMTextViewDelegate-Protocol.h"

@class NSString, TMAttributedTextView;

@interface TMGuidelinesView : UIView <TMTextViewDelegate>
{
    TMAttributedTextView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TMAttributedTextView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) double totalContentHeight;
- (id)initWithCustomizationBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

