//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC9Messaging31ConversationMediaPickerDelegate : _TtCs12_SwiftObject
{
    MISSING_TYPE *mediaMessagePreviewView;
    MISSING_TYPE *messageField;
    MISSING_TYPE *mediaPickerPresentationDelegate;
    MISSING_TYPE *mediaSendingCoordinatorDelegate;
    MISSING_TYPE *messagingApplicationInstanceDelegate;
    MISSING_TYPE *backgroundProvider;
    MISSING_TYPE *session;
}

- (void)mediaPicker:(id)arg1 didFailToSelectItem:(long long)arg2;
- (void)mediaPicker:(id)arg1 didSelectMediaToEdit:(id)arg2;
- (void)mediaPickerDidAuthorizePhotoAccess:(id)arg1;
- (void)mediaPickerDidSelectShowSettings:(id)arg1;
- (void)mediaPicker:(id)arg1 shouldFinishDueToReason:(long long)arg2;
- (void)mediaPicker:(id)arg1 didDeselectItem:(id)arg2;
- (_Bool)mediaPicker:(id)arg1 shouldShowNavButton:(long long)arg2;
- (long long)mediaPicker:(id)arg1 maximumNumberOfSelectedItemsForType:(long long)arg2;
- (_Bool)mediaPickerShouldEditStills:(id)arg1;
- (void)mediaPicker:(id)arg1 didSelectItem:(id)arg2 thumbnail:(id)arg3;

@end
