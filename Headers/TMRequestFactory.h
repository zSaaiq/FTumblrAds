//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol TMBaseURLDetermining;

@interface TMRequestFactory : NSObject
{
    id <TMBaseURLDetermining> _baseURLDeterminer;
}

+ (id)configuredFactoryWithUserDefaults:(id)arg1;
+ (id)configuredFactory;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <TMBaseURLDetermining> baseURLDeterminer; // @synthesize baseURLDeterminer=_baseURLDeterminer;
- (id)reblogPostRequestWithBlogName:(id)arg1 parameters:(id)arg2;
- (id)multipartPostRequestForParameters:(id)arg1 path:(id)arg2 requestBody:(id)arg3;
- (id)multipartPostRequestForParameters:(id)arg1 blogName:(id)arg2 requestBody:(id)arg3;
- (id)multipartPostRequestForParameters:(id)arg1 path:(id)arg2 type:(id)arg3 filePathArray:(id)arg4 contentTypeArray:(id)arg5 fileNameArray:(id)arg6 keys:(id)arg7;
- (id)multipartPostRequestForParameters:(id)arg1 blogName:(id)arg2 type:(id)arg3 filePathArray:(id)arg4 contentTypeArray:(id)arg5 fileNameArray:(id)arg6;
- (id)multipartPostRequestForParameters:(id)arg1 path:(id)arg2 type:(id)arg3 filePathArray:(id)arg4 contentTypeArray:(id)arg5 fileNameArray:(id)arg6;
- (id)sumbissionsRequestForBlog:(id)arg1 queryParameters:(id)arg2;
- (id)draftsRequestForBlog:(id)arg1 queryParameters:(id)arg2;
- (id)followersRequestForBlog:(id)arg1 queryParameters:(id)arg2;
- (id)editPostRequest:(id)arg1 parameters:(id)arg2;
- (id)postRequestWithBlogName:(id)arg1 type:(id)arg2 parameters:(id)arg3;
- (id)permalinkRequestWithBlogUUID:(id)arg1 postID:(id)arg2;
- (id)permalinkRequestWithBlogName:(id)arg1 postID:(id)arg2;
- (id)postsRequestWithBlogName:(id)arg1 type:(id)arg2 queryParameters:(id)arg3;
- (id)avatarWithBlogName:(id)arg1 size:(unsigned long long)arg2;
- (id)followingRequestWithParameters:(id)arg1;
- (id)queueRequestForBlogWithName:(id)arg1 queryParameters:(id)arg2;
- (id)blogInfoRequestForBlogUUID:(id)arg1;
- (id)blogInfoRequestForBlogName:(id)arg1;
- (id)likesRequestForBlogWithUUID:(id)arg1 queryParameters:(id)arg2;
- (id)likesRequestWithParameters:(id)arg1;
- (id)userInfoRequest;
- (id)unlikeRequest:(id)arg1 reblogKey:(id)arg2;
- (id)likeRequest:(id)arg1 reblogKey:(id)arg2 additionalParameters:(id)arg3;
- (id)likeRequest:(id)arg1 reblogKey:(id)arg2;
- (id)deletePostRequest:(id)arg1 postID:(id)arg2;
- (id)followRequest:(id)arg1 parameters:(id)arg2;
- (id)unfollowRequest:(id)arg1;
- (id)dashboardRequest:(id)arg1;
- (id)notesRequestWithPostID:(id)arg1 blogUUID:(id)arg2 beforeDate:(id)arg3;
@property(readonly, nonatomic) NSURL *baseURL;
- (id)requestWithPath:(id)arg1 method:(int)arg2 queryParameters:(id)arg3 requestBody:(id)arg4;
- (id)requestWithPath:(id)arg1 method:(int)arg2 queryParameters:(id)arg3;
- (id)POSTRequestWithPath:(id)arg1 JSONParameters:(id)arg2;
- (id)POSTRequestWithPath:(id)arg1 parameters:(id)arg2;
- (id)GETRequestWithPath:(id)arg1 parameters:(id)arg2;
- (id)init;
- (id)initWithBaseURLDeterminer:(id)arg1;
- (id)requestFrom:(id)arg1;
- (id)blogActivityUpdateLastSeenOffsetRequestWithBlogUUID:(id)arg1;
- (id)blogActivityUpdateLastSeenRequestWithBlogUUID:(id)arg1;
- (id)unblockBlogRequestWithBlogUUID:(id)arg1 fromBlogUUID:(id)arg2;
- (id)blockBlogRequestWithBlogUUID:(id)arg1 fromBlogUUID:(id)arg2;
- (id)blockPostRequestWithPostID:(id)arg1 fromBlogUUID:(id)arg2;
- (id)postsRequestWithBlogUUID:(id)arg1 type:(id)arg2 queryParameters:(id)arg3;
- (id)deleteBlogWithName:(id)arg1 parameters:(id)arg2;
- (id)validateBlogName:(id)arg1;
- (id)activityRequestForBlogName:(id)arg1 before:(id)arg2;
- (id)createBlogRequestWithBlogName:(id)arg1 avatarImageName:(id)arg2 headerImageName:(id)arg3 key:(id)arg4 password:(id)arg5;
- (id)createBlogKeyRequest;
- (id)toggleLabsFeatureSwitch:(id)arg1 enabled:(_Bool)arg2;
- (id)optIntoOrOutOfLabs:(_Bool)arg1;
- (id)labsSettings;
- (id)suggestedTagsRequest:(id)arg1 parentPostID:(id)arg2 parentBlogID:(id)arg3 postID:(id)arg4;
- (id)typeaheadTagsSearchRequest:(id)arg1;
- (id)unregisterPushNotificationsWithDeviceToken:(id)arg1;
- (id)registerPushNotificationsWithDeviceToken:(id)arg1 deviceClass:(unsigned long long)arg2;
- (id)registrationNonceRequest;
- (id)registrationRequestWithEmailAddress:(id)arg1 password:(id)arg2 blogName:(id)arg3 age:(unsigned long long)arg4 nonce:(id)arg5;
- (id)blogDeletionNonce;
- (id)suggestedSearchTags;
- (id)featuredTagsRequest;
- (id)mentionTypeaheadRequestWithQuery:(id)arg1 groupID:(id)arg2;
- (id)searchRequestWithQuery:(id)arg1 queryParameters:(id)arg2;
- (id)takeoverRequestWithTakeoverTerm:(id)arg1 queryParameters:(id)arg2;
- (id)submitUserSelectedTopicsRequest:(id)arg1 customPath:(id)arg2 seenTopics:(id)arg3 bucket:(id)arg4;
- (id)blogTagTypeaheadWithQuery:(id)arg1 queryParameters:(id)arg2;
- (id)mobileTokenVendingApplicationAuthorize:(id)arg1 method:(int)arg2 payload:(id)arg3;
- (id)mobileTokenVendingApplicationInfo:(id)arg1;
- (id)richNotesRequestWithPostID:(id)arg1 blogUUID:(id)arg2;
- (id)notesRequestWithPostID:(id)arg1 blogUUID:(id)arg2 beforeDate:(id)arg3 mode:(id)arg4;
- (id)modeRequestWithApp:(id)arg1;
- (id)videoMetaDataRequestForURL:(id)arg1;
- (id)linkBlockMetaDataRequestForURL:(id)arg1;
- (id)reportBlogRequestWithBlogUUID:(id)arg1 reason:(unsigned long long)arg2;
- (id)appealRequestWithPostID:(id)arg1 postBlogName:(id)arg2 parameters:(id)arg3;
- (id)reportPostRequestWithPostID:(id)arg1 postBlogUUID:(id)arg2 reason:(unsigned long long)arg3;
- (id)shortlinkLookupWithURL:(id)arg1;
- (id)GIFSearchFeedbackRequestWithFeedbackToken:(id)arg1 context:(id)arg2;
- (id)popularGIFRequestWithContext:(id)arg1;
- (id)blogSearchRequestWithQueryParameters:(id)arg1;
- (id)GIFSearchRequestWithQuery:(id)arg1 context:(id)arg2;
- (id)configurationRequest;
- (id)debugOnboardingFlows;
- (id)autheticationTypeWithEmail:(id)arg1 forceMode:(long long)arg2;
- (id)preonboardingSlides;
- (id)mentionInfoWithToken:(id)arg1;
- (id)postsMilestoneRequestInBucket:(id)arg1;
- (id)likesMilestoneRequestInBucket:(id)arg1;
- (id)milestoneRequest:(id)arg1 milestoneType:(id)arg2 count:(unsigned long long)arg3;
- (id)trendingAudioRequest;
- (id)audioSearchRequest:(id)arg1;
- (id)analyticsEventRequest:(id)arg1;
- (id)topPostsRequest:(id)arg1;
- (id)multipartPostRequestForParameters:(id)arg1 blogName:(id)arg2 type:(id)arg3 filePathArray:(id)arg4 contentTypeArray:(id)arg5 fileNameArray:(id)arg6 livePhotoFilePaths:(id)arg7 livePhotoContentTypes:(id)arg8 livePhotoFileNames:(id)arg9;
- (id)convertedPostRequest:(id)arg1 postID:(id)arg2 legacyFormat:(_Bool)arg3;
- (id)reorderQueuedPost:(id)arg1 afterPost:(id)arg2 forBlogName:(id)arg3;
- (id)updateQueueSettingsRequestForBlogName:(id)arg1 parameters:(id)arg2;
- (id)queueSettingsRequestForBlogName:(id)arg1;
- (id)persistFacebookAutopostRequest:(id)arg1 autopost:(_Bool)arg2;
- (id)persistTwitterAutopostRequest:(id)arg1 autopost:(_Bool)arg2;
- (id)unlinkFacebookRequest:(id)arg1;
- (id)linkFacebookPageRequest:(id)arg1 facebookPageID:(id)arg2 pageAccessToken:(id)arg3;
- (id)linkFacebookRequest:(id)arg1 facebookUserID:(id)arg2 openGraphAccessToken:(id)arg3;
- (id)unlinkTwitterRequest:(id)arg1;
- (id)linkTwitterRequest:(id)arg1 twitterUsername:(id)arg2 userToken:(id)arg3 userSecret:(id)arg4;
- (id)exploreHeader;
- (id)communityHubHeaderNamed:(id)arg1;
- (id)timelineRequestWithPath:(id)arg1 method:(int)arg2 queryParameters:(id)arg3;
- (id)communityHubNamed:(id)arg1 communityHubType:(id)arg2;
- (id)leaveGroupChatWithID:(id)arg1 blogUUID:(id)arg2;
- (id)groupChatWithID:(id)arg1 blogUUID:(id)arg2 context:(id)arg3;
- (id)flaggedPostPeek:(id)arg1 blogUUID:(id)arg2;
- (id)dashboardRequestWithParameters:(id)arg1;
- (id)timelinePanelOptions;
- (id)inBlogSearchResultsTimeline:(id)arg1 query:(id)arg2 parameters:(id)arg3;
- (id)searchResultsTimeline:(id)arg1;
- (id)legacySearchResultsTimeline:(id)arg1;
- (id)relatedTimelineRequest:(id)arg1;
- (id)followRecommendedBlogsTimeline;
- (id)topicDetailForID:(id)arg1 cursor:(id)arg2;
- (id)exploreRecommendedTimelineWithParameters:(id)arg1;
- (id)exploreTimeline;
- (id)resetGUCEConsent;
- (id)updateGUCEConsentWithParameters:(id)arg1;
- (id)completeUserAccountWithEmailAddress:(id)arg1 password:(id)arg2 userName:(id)arg3;
- (id)unsubscribeToNotificationsWithPath:(id)arg1 parameters:(id)arg2;
- (id)subscribeToNotificationsWithPath:(id)arg1 parameters:(id)arg2;
- (id)submitUserSettings:(id)arg1;
- (id)createPartialUserWithAge:(id)arg1 deviceCheckToken:(id)arg2 guceConsentParameters:(id)arg3;
- (id)removeFilteredContentRequestWithContent:(id)arg1;
- (id)addFilteredContentRequestWithContent:(id)arg1;
- (id)removeFilteredTagsRequestWithTag:(id)arg1;
- (id)addFilteredTagsRequestWithTag:(id)arg1;
- (id)untrackTagsRequest:(id)arg1;
- (id)sendMagicLinkEmailToEmailAddress:(id)arg1;
- (id)redeemMagicLinkTokenRequestWithToken:(id)arg1 tfaToken:(id)arg2 guceConsentFields:(id)arg3;
- (id)redeemMagicLinkTokenRequestWithToken:(id)arg1 guceConsentFields:(id)arg2;
- (id)trackTagsRequest:(id)arg1;
- (id)userSettings;
- (id)noticesRequest;
- (id)confirmNoticeRequestWithIdentifier:(id)arg1;
- (id)validateRequestWithEmailAddress:(id)arg1 blogName:(id)arg2;
- (id)userFilteredContent;
- (id)userFilteredTags;
- (id)updateUserSettingsWithParameters:(id)arg1;
- (id)trackedTagsRequest;
- (id)logExperiment:(id)arg1 bucket:(id)arg2;
- (id)replyWithMessage:(id)arg1 toPostWithID:(id)arg2 fromBlogNamed:(id)arg3 withReblogKey:(id)arg4;
- (id)markTrackedTagAsReadRequest:(id)arg1;
- (id)resetPassword:(id)arg1;
- (id)oneIDTokenRedemptionRequestWithToken:(id)arg1;
- (id)updateToNewPasswordWithCurrentPassword:(id)arg1 withNewPassword:(id)arg2;
- (id)updateToNewUserEmailAddress:(id)arg1 withPassword:(id)arg2;
- (id)updateUserEmailAddress:(id)arg1;
- (id)privacyToken;
- (id)mobileFormTokenRequestWithName:(id)arg1;

@end
