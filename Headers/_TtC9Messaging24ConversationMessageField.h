//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC8TumblrUI25ExpandingToolbarTextField.h"

#import "_TtP5Utils21ReachabilityObserving_-Protocol.h"

@class MISSING_TYPE;

@interface _TtC9Messaging24ConversationMessageField : _TtC8TumblrUI25ExpandingToolbarTextField <_TtP5Utils21ReachabilityObserving_>
{
    MISSING_TYPE *viewModel;
    MISSING_TYPE *sendingEnabled;
    MISSING_TYPE *leftAccessoryViewProvider;
}

- (void).cxx_destruct;
- (void)updateColors:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)didTapTextField:(id)arg1;
- (_Bool)becomeFirstResponder;
- (void)presentMediaPicker;
- (void)atMentionTapped;
- (void)presentGIFSearch;
- (void)reachabilityUpdated:(id)arg1;
- (void)toggleBlogSelector;
- (void)sendMessage;

@end
