//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC9ComposeUI20ComposeEventProvider : NSObject
{
    MISSING_TYPE *screenID;
    MISSING_TYPE *analyticsBuffer;
}

- (void).cxx_destruct;
- (id)init;
- (id)postCancelClickEvent;
- (id)postRetryClickEvent;
- (id)reblogViewControllerDismissEventFromButton:(_Bool)arg1;
- (id)reblogViewControllerSelectBlogEvent;
- (id)reblogViewControllerAddContentEvent;
- (id)editorSelectEvent:(id)arg1 editorType:(int)arg2;
- (id)customURLEvent:(id)arg1 customURL:(id)arg2;
- (id)postOptionSelectEvent:(id)arg1 postState:(int)arg2 queuedState:(int)arg3;
- (id)postOptionOpenEvent:(id)arg1;
- (id)contentSourceEvent:(id)arg1 contentSource:(id)arg2;
- (id)optionsCogEvent:(id)arg1;
- (id)suggestedTagAddEventWithPostParameters:(id)arg1 tagName:(id)arg2 tagCount:(long long)arg3;
- (id)tagDragEvent:(id)arg1 tagCount:(long long)arg2;
- (id)tagRemoveEvent:(id)arg1 tagName:(id)arg2 tagCount:(long long)arg3;
- (id)tagEditEvent:(id)arg1 tagName:(id)arg2 tagCount:(long long)arg3;
- (id)tagAddEvent:(id)arg1 tagName:(id)arg2 tagCount:(long long)arg3;
- (id)socialLinkAccountEvent:(id)arg1 accountType:(id)arg2;
- (id)socialShareEvent:(id)arg1 accountType:(id)arg2 state:(_Bool)arg3;
- (id)blogSelectEvent:(id)arg1;
- (id)advancedOptionsBackEvent:(id)arg1;
- (id)advancedOptionsOpenEvent:(id)arg1 usesPostFormHeaderRedesign:(_Bool)arg2;
- (id)dismissEvent:(id)arg1 composeOptions:(id)arg2;
- (id)postTypeSelectEvent:(id)arg1;
- (id)composePostEventWithUsesPostFormHeaderRedesign:(_Bool)arg1;
- (id)shareExtensionPostEventWithParameters:(id)arg1;
- (id)initWithScreenID:(id)arg1 analyticsBuffer:(id)arg2;

@end
