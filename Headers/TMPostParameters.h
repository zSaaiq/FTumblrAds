//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMDictionaryRepresenting-Protocol.h"
#import "TMScreenIdentifying-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, TMReblogTrailViewModel, XExtensionItem;

@interface TMPostParameters : NSObject <TMDictionaryRepresenting, TMScreenIdentifying>
{
    _Bool _submission;
    _Bool _tweet;
    _Bool _facebook;
    _Bool _attachReblogTree;
    _Bool _allowsComment;
    _Bool _showsHideReblogButton;
    _Bool _allowsGIFComment;
    int _postFormat;
    int _postType;
    int _postState;
    int _originalPostType;
    int _queuedState;
    int _advertisementType;
    int _rebloggedPostType;
    int _postAppealNSFWUpdate;
    NSString *_screenIdentifier;
    NSString *_postID;
    NSString *_blogName;
    NSString *_slug;
    NSString *_contentSourceURL;
    NSArray *_tags;
    NSString *_rebloggedFromPlacementID;
    NSDate *_scheduledPublishTime;
    NSString *_tweetText;
    TMReblogTrailViewModel *_reblogTrailViewModel;
    NSString *_comments;
    NSString *_rebloggedFromName;
    NSString *_rebloggedFromID;
    NSString *_rootPostID;
    XExtensionItem *_xExtensionItem;
    NSMutableDictionary *_keysToAttributedMentionStrings;
    NSMutableArray *_HTMLEmbeds;
}

+ (id)postParametersForPostType:(int)arg1 blog:(id)arg2;
+ (id)postParametersForPostType:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *HTMLEmbeds; // @synthesize HTMLEmbeds=_HTMLEmbeds;
@property(retain, nonatomic) NSMutableDictionary *keysToAttributedMentionStrings; // @synthesize keysToAttributedMentionStrings=_keysToAttributedMentionStrings;
@property(retain, nonatomic) XExtensionItem *xExtensionItem; // @synthesize xExtensionItem=_xExtensionItem;
@property(nonatomic) int postAppealNSFWUpdate; // @synthesize postAppealNSFWUpdate=_postAppealNSFWUpdate;
@property(nonatomic) _Bool allowsGIFComment; // @synthesize allowsGIFComment=_allowsGIFComment;
@property(copy, nonatomic) NSString *rootPostID; // @synthesize rootPostID=_rootPostID;
@property(readonly, nonatomic) NSString *rebloggedFromID; // @synthesize rebloggedFromID=_rebloggedFromID;
@property(readonly, nonatomic) NSString *rebloggedFromName; // @synthesize rebloggedFromName=_rebloggedFromName;
@property(nonatomic) int rebloggedPostType; // @synthesize rebloggedPostType=_rebloggedPostType;
@property(nonatomic) _Bool showsHideReblogButton; // @synthesize showsHideReblogButton=_showsHideReblogButton;
@property(nonatomic) _Bool allowsComment; // @synthesize allowsComment=_allowsComment;
@property(copy, nonatomic) NSString *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) TMReblogTrailViewModel *reblogTrailViewModel; // @synthesize reblogTrailViewModel=_reblogTrailViewModel;
@property(nonatomic) _Bool attachReblogTree; // @synthesize attachReblogTree=_attachReblogTree;
@property(nonatomic) int advertisementType; // @synthesize advertisementType=_advertisementType;
@property(nonatomic) _Bool facebook; // @synthesize facebook=_facebook;
@property(retain, nonatomic) NSString *tweetText; // @synthesize tweetText=_tweetText;
@property(nonatomic) _Bool tweet; // @synthesize tweet=_tweet;
@property(retain, nonatomic) NSDate *scheduledPublishTime; // @synthesize scheduledPublishTime=_scheduledPublishTime;
@property(nonatomic) int queuedState; // @synthesize queuedState=_queuedState;
@property(nonatomic) int originalPostType; // @synthesize originalPostType=_originalPostType;
@property(nonatomic) int postState; // @synthesize postState=_postState;
@property(nonatomic) int postType; // @synthesize postType=_postType;
@property(nonatomic) int postFormat; // @synthesize postFormat=_postFormat;
@property(nonatomic, getter=isSubmission) _Bool submission; // @synthesize submission=_submission;
@property(copy, nonatomic) NSString *rebloggedFromPlacementID; // @synthesize rebloggedFromPlacementID=_rebloggedFromPlacementID;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *contentSourceURL; // @synthesize contentSourceURL=_contentSourceURL;
@property(copy, nonatomic) NSString *slug; // @synthesize slug=_slug;
@property(copy, nonatomic) NSString *blogName; // @synthesize blogName=_blogName;
@property(copy, nonatomic) NSString *postID; // @synthesize postID=_postID;
@property(copy, nonatomic) NSString *screenIdentifier; // @synthesize screenIdentifier=_screenIdentifier;
- (id)stringForPostState:(int)arg1;
- (id)htmlSafeValueFromMentionAttributedString:(id)arg1;
@property(readonly, nonatomic) NSArray *embeddedItems;
@property(readonly, nonatomic) _Bool showsSaveAsDraftAlert;
@property(readonly, nonatomic, getter=isScheduled) _Bool scheduled;
@property(readonly, nonatomic, getter=isQueued) _Bool queued;
@property(readonly, nonatomic, getter=isAnswer) _Bool isAnswer;
@property(readonly, nonatomic, getter=isReblog) _Bool reblog;
- (_Bool)maximumItemsEmbedded;
- (id)dictionaryWithInjectedEmbedsFromDictionary:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSDictionary *additionalParameters;
- (void)removeHTMLEmbed:(id)arg1;
- (void)addHTMLEmbed:(id)arg1;
- (id)stringByEscapingHTMLEntitiesIfPostInPlainTextFormat:(id)arg1;
- (void)addAttributedMentionString:(id)arg1 forKey:(id)arg2;
- (id)htmlSafeValueForKey:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)fillWithPostValues:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)init;
- (id)initWithXExtensionItem:(id)arg1;
@property(readonly, nonatomic) long long outgoingRequestType;
- (id)createPostOutgoingRequestWithRequest:(id)arg1 backgroundTaskToken:(id)arg2;
- (id)appealRequestWithRequestFactory:(id)arg1;
- (id)editRequestWithRequestFactory:(id)arg1;
- (id)requestWithRequestFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

