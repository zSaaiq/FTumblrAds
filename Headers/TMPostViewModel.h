//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, TMPostActionsViewModel, TMPostAppInstallationViewModel, TMPostContentViewModel, TMPostHeaderViewModel, TMReblogTrailViewModel, _TtC10CoreTumblr12MediationIDs, _TtC10CoreTumblr14AdInstanceData, _TtC6Tumblr21PostControlsViewModel, _TtC6Tumblr22NoteHighlightViewModel, _TtC6Tumblr23AppAttributionViewModel, _TtC6Tumblr24RelatedTimelineViewModel, _TtC6Tumblr25PostFooterScrollViewModel, _TtC6Tumblr30PostOwnPostNSFWBannerViewModel;

@interface TMPostViewModel : NSObject
{
    _Bool _censored;
    _Bool _userFilteredByTag;
    _Bool _canPlayVideoInline;
    int _advertisementType;
    int _postType;
    int _postState;
    TMPostHeaderViewModel *_headerViewModel;
    TMPostContentViewModel *_contentViewModel;
    _TtC6Tumblr30PostOwnPostNSFWBannerViewModel *_ownPostBannerViewModel;
    TMPostActionsViewModel *_actionsViewModel;
    TMReblogTrailViewModel *_reblogTrailViewModel;
    TMPostAppInstallationViewModel *_appInstallationViewModel;
    _TtC6Tumblr25PostFooterScrollViewModel *_footerScrollViewModel;
    _TtC6Tumblr23AppAttributionViewModel *_appAttributionViewModel;
    _TtC6Tumblr21PostControlsViewModel *_postControlsViewModel;
    _TtC6Tumblr24RelatedTimelineViewModel *_relatedTimelineViewModel;
    _TtC6Tumblr22NoteHighlightViewModel *_noteHighlightsViewModel;
    NSString *_headerTitle;
    NSString *_postID;
    NSString *_rootPostID;
    NSString *_blogName;
    NSString *_blogUUID;
    NSString *_placementIdentifier;
    NSString *_impressionIdentifier;
    NSString *_flurrySyndicationIdentifier;
    NSArray *_tagList;
    NSString *_sponsoredBadgeURL;
    NSArray *_impressionEventURLs;
    _TtC10CoreTumblr14AdInstanceData *_adInstanceData;
    _TtC10CoreTumblr12MediationIDs *_mediationIDs;
    long long _noteCount;
    double _maxContentWidth;
    id _blockNotificationObserver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id blockNotificationObserver; // @synthesize blockNotificationObserver=_blockNotificationObserver;
@property(nonatomic) _Bool canPlayVideoInline; // @synthesize canPlayVideoInline=_canPlayVideoInline;
@property(nonatomic) double maxContentWidth; // @synthesize maxContentWidth=_maxContentWidth;
@property(nonatomic) long long noteCount; // @synthesize noteCount=_noteCount;
@property(readonly, copy, nonatomic) _TtC10CoreTumblr12MediationIDs *mediationIDs; // @synthesize mediationIDs=_mediationIDs;
@property(readonly, copy, nonatomic) _TtC10CoreTumblr14AdInstanceData *adInstanceData; // @synthesize adInstanceData=_adInstanceData;
@property(readonly, copy, nonatomic) NSArray *impressionEventURLs; // @synthesize impressionEventURLs=_impressionEventURLs;
@property(readonly, copy, nonatomic) NSString *sponsoredBadgeURL; // @synthesize sponsoredBadgeURL=_sponsoredBadgeURL;
@property(readonly, nonatomic) int postState; // @synthesize postState=_postState;
@property(readonly, nonatomic) int postType; // @synthesize postType=_postType;
@property(readonly, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(readonly, copy, nonatomic) NSString *flurrySyndicationIdentifier; // @synthesize flurrySyndicationIdentifier=_flurrySyndicationIdentifier;
@property(readonly, copy, nonatomic) NSString *impressionIdentifier; // @synthesize impressionIdentifier=_impressionIdentifier;
@property(readonly, copy, nonatomic) NSString *placementIdentifier; // @synthesize placementIdentifier=_placementIdentifier;
@property(readonly, copy, nonatomic) NSString *blogUUID; // @synthesize blogUUID=_blogUUID;
@property(readonly, copy, nonatomic) NSString *blogName; // @synthesize blogName=_blogName;
@property(readonly, nonatomic) int advertisementType; // @synthesize advertisementType=_advertisementType;
@property(readonly, copy, nonatomic) NSString *rootPostID; // @synthesize rootPostID=_rootPostID;
@property(readonly, copy, nonatomic) NSString *postID; // @synthesize postID=_postID;
@property(readonly, nonatomic) _Bool userFilteredByTag; // @synthesize userFilteredByTag=_userFilteredByTag;
@property(readonly, nonatomic) _Bool censored; // @synthesize censored=_censored;
@property(readonly, copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(readonly, nonatomic) _TtC6Tumblr22NoteHighlightViewModel *noteHighlightsViewModel; // @synthesize noteHighlightsViewModel=_noteHighlightsViewModel;
@property(readonly, nonatomic) _TtC6Tumblr24RelatedTimelineViewModel *relatedTimelineViewModel; // @synthesize relatedTimelineViewModel=_relatedTimelineViewModel;
@property(readonly, nonatomic) _TtC6Tumblr21PostControlsViewModel *postControlsViewModel; // @synthesize postControlsViewModel=_postControlsViewModel;
@property(readonly, nonatomic) _TtC6Tumblr23AppAttributionViewModel *appAttributionViewModel; // @synthesize appAttributionViewModel=_appAttributionViewModel;
@property(readonly, nonatomic) _TtC6Tumblr25PostFooterScrollViewModel *footerScrollViewModel; // @synthesize footerScrollViewModel=_footerScrollViewModel;
@property(readonly, nonatomic) TMPostAppInstallationViewModel *appInstallationViewModel; // @synthesize appInstallationViewModel=_appInstallationViewModel;
@property(readonly, nonatomic) TMReblogTrailViewModel *reblogTrailViewModel; // @synthesize reblogTrailViewModel=_reblogTrailViewModel;
@property(readonly, nonatomic) TMPostActionsViewModel *actionsViewModel; // @synthesize actionsViewModel=_actionsViewModel;
@property(readonly, nonatomic) _TtC6Tumblr30PostOwnPostNSFWBannerViewModel *ownPostBannerViewModel; // @synthesize ownPostBannerViewModel=_ownPostBannerViewModel;
@property(readonly, nonatomic) TMPostContentViewModel *contentViewModel; // @synthesize contentViewModel=_contentViewModel;
@property(readonly, nonatomic) TMPostHeaderViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
- (unsigned long long)hash;
- (_Bool)shouldShowAttributionView;
@property(readonly, nonatomic) _Bool isBlocksPost;
@property(readonly, nonatomic) NSString *noteHighlightDisplayVariants;
@property(readonly, nonatomic) NSNumber *numberOfNoteHighlights;
@property(readonly, copy, nonatomic) NSString *avatarBlogName;
- (id)postInfoRepresentation;
- (id)initWithPost:(id)arg1 viewConfiguration:(id)arg2 photoSizeChooser:(id)arg3 expanded:(_Bool)arg4 timelineHeightCalculating:(id)arg5 fastQueueEnabled:(_Bool)arg6 showNSFWBanner:(_Bool)arg7;

@end

