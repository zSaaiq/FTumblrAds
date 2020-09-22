//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSSet, NSString, NSURL, TMBlog, TMPostParameters, TMSubmissionTerms, UIView, UIViewController;
@protocol TMPostDeliverer, TMReblogCellFactory, _TtP9ComposeUI17ReblogViewFactory_;

@protocol TMComposeOptionsProviding <NSObject>
- (_Bool)createdAsLegacy;
- (_Bool)shouldDismissAfterPostAutomatically;
- (_Bool)shouldShowGallery;
- (_Bool)shouldShowMiniMediaPicker;
- (_Bool)canAddAudios;
- (_Bool)canAddVideos;
- (_Bool)canAddImages;
- (_Bool)canAddGIFs;
- (_Bool)canShowCameraInput;
- (_Bool)canShowNewPostFormsCanvasForPostType:(int)arg1;
@property(nonatomic, readonly) _Bool useMultipleStepPosting;
@property(nonatomic, readonly) _Bool useAdvancedOptionsRedesign;
- (UIViewController *)URLHandlingViewControllerWithURL:(NSURL *)arg1;
- (Class)composeNavigationBarClass;
- (_Bool)canShowPopoverMediaPicker;
- (_Bool)cancellingVideoEditingShouldCancelComposing;
- (UIView *)customTitleView;
- (id <_TtP9ComposeUI17ReblogViewFactory_>)reblogViewFactory;
- (id <TMReblogCellFactory>)reblogCellFactory;
- (unsigned long long)composeActionsDisplayStyle;
- (NSArray *)suggestedTagNames;
- (NSSet *)permittedTagNames;
- (TMSubmissionTerms *)submissionTerms;
- (_Bool)isShare;
- (_Bool)shouldUseCurrentlyViewingBlogByDefault;
- (_Bool)shouldUsePreviouslyPostedBlogByDefault;
- (_Bool)isInterAppCommunication;
- (TMBlog *)askTargetBlog;
- (_Bool)isAsk;
- (_Bool)isSubmission;
- (_Bool)shouldShowButtonForSocialNetwork:(long long)arg1;
- (_Bool)shouldAllowUserGeneratedTags;
- (_Bool)shouldAllowDrafts;
- (_Bool)shouldShowContentSource;
- (_Bool)shouldShowPostSettings;
- (NSArray *)permittedComposeTypes;
@property(nonatomic, readonly) NSString *currentlyViewingBlogUUID;
@property(nonatomic) _Bool GIFFilter;
- (_Bool)isEditing;
@property(nonatomic, readonly) id <TMPostDeliverer> postDeliverer;
@property(nonatomic, retain) TMPostParameters *postParameters;

// Remaining properties
@property(nonatomic, readonly) _Bool editing;
@end

