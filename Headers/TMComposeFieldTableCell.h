//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "TMHeightRequiring-Protocol.h"
#import "TMTextViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSAttributedString, NSString, TMMentionsTextView, TMShapeView, UIFont, UITextField, UIView;
@protocol TMComposeFieldTableCellDelegate, UITextInputTraits><UITextInput;

@interface TMComposeFieldTableCell : UITableViewCell <UITextFieldDelegate, TMTextViewDelegate, TMHeightRequiring>
{
    _Bool _isCommentCell;
    _Bool _singleLine;
    _Bool _allowsComment;
    UIView<UITextInputTraits><UITextInput> *_responderView;
    NSString *_keyPath;
    UITextField *_textField;
    unsigned long long _contentStatus;
    id <TMComposeFieldTableCellDelegate> _delegate;
    double _minimumHeight;
    TMShapeView *_topSeparatorView;
    TMShapeView *_bottomSeparatorView;
    TMMentionsTextView *_textView;
}

+ (id)cellWithDelegate:(id)arg1 session:(id)arg2 keyPath:(id)arg3 text:(id)arg4 placeholder:(id)arg5 singleLine:(_Bool)arg6 font:(id)arg7 allowsComment:(_Bool)arg8;
+ (id)cellWithDelegate:(id)arg1 session:(id)arg2 keyPath:(id)arg3 text:(id)arg4 placeholder:(id)arg5 singleLine:(_Bool)arg6 font:(id)arg7;
+ (id)cellWithDelegate:(id)arg1 session:(id)arg2 keyPath:(id)arg3 text:(id)arg4 placeholder:(id)arg5 singleLine:(_Bool)arg6;
+ (id)cellWithDelegate:(id)arg1 session:(id)arg2 keyPath:(id)arg3 text:(id)arg4 placeholder:(id)arg5;
+ (id)cellWithDelegate:(id)arg1 session:(id)arg2 keyPath:(id)arg3 text:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool allowsComment; // @synthesize allowsComment=_allowsComment;
@property(nonatomic) _Bool singleLine; // @synthesize singleLine=_singleLine;
@property(retain, nonatomic) TMMentionsTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) TMShapeView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) TMShapeView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) _Bool isCommentCell; // @synthesize isCommentCell=_isCommentCell;
@property(nonatomic) __weak id <TMComposeFieldTableCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long contentStatus; // @synthesize contentStatus=_contentStatus;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) UIView<UITextInputTraits><UITextInput> *responderView; // @synthesize responderView=_responderView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)tableView;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)didChangeText:(id)arg1;
- (void)endEditing;
- (void)beginEditing;
@property(nonatomic, getter=isEditable) _Bool editable;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) long long autocapitalizationType;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *fieldText;
@property(copy, nonatomic) NSString *placeholder;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
@property(retain, nonatomic) UIFont *font;
@property(nonatomic) _Bool allowsMentions;
@property(nonatomic) _Bool hidesSeparator;
@property(readonly, nonatomic) double heightRequired;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 session:(id)arg2 keyPath:(id)arg3 text:(id)arg4 placeholder:(id)arg5 singleLine:(_Bool)arg6 font:(id)arg7 allowsComment:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

