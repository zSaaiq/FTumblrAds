//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC13OnboardingKit22BaseClearTableViewCell.h"

@class MISSING_TYPE, _TtC13OnboardingKit11TMTextField;

@interface _TtC13OnboardingKit17TextFieldFormCell : _TtC13OnboardingKit22BaseClearTableViewCell
{
    MISSING_TYPE *textField;
    MISSING_TYPE *allowSpaces;
    MISSING_TYPE *complete;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
@property(nonatomic, readonly) _Bool isFirstResponder;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)layoutSubviews;
- (void)textFieldDidChangeWithTextField:(id)arg1;
- (void)setTextAndCheckIfCompleteWithText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) _Bool complete; // @synthesize complete;
@property(nonatomic, retain) _TtC13OnboardingKit11TMTextField *textField; // @synthesize textField;

@end
