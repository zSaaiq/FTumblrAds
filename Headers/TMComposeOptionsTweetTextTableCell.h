//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UITextView;
@protocol TMComposeOptionsTweetTextTableCellDelegate;

@interface TMComposeOptionsTweetTextTableCell : UITableViewCell <UITextViewDelegate>
{
    UITextView *_textView;
    id <TMComposeOptionsTweetTextTableCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TMComposeOptionsTweetTextTableCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

