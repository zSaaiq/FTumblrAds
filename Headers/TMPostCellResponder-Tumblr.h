//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMPostCellResponder.h"

@interface TMPostCellResponder (Tumblr)
- (void)tableCell:(id)arg1 userDidVote:(id)arg2 selection:(id)arg3 extras:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)tableCell:(id)arg1 userDidVoteInPoll:(id)arg2;
- (void)tableCell:(id)arg1 didTapOnNoteHighlights:(id)arg2;
- (void)tableCell:(id)arg1 didDisplayPost:(id)arg2 isOwnPost:(_Bool)arg3;
- (void)tableCell:(id)arg1 needsHandleLink:(id)arg2;
- (void)panoramaPhotoVisibilityThresholdReachedInTableCell:(id)arg1;
- (void)panoramaPhotoPannedInTableCell:(id)arg1;
- (void)tableCell:(id)arg1 panoramaPhotoTapped:(id)arg2;
- (void)tableCell:(id)arg1 photoCarouselSelectedAtOffset:(long long)arg2 withNativeURL:(id)arg3;
- (void)tableCell:(id)arg1 photoCarouselDidSlideFrom:(long long)arg2 to:(long long)arg3;
- (void)tableCell:(id)arg1 didFollowBlogWithName:(id)arg2;
- (void)tableCellDidTapReportMeatballs:(id)arg1 button:(id)arg2;
- (void)tableCellDidDismissRecommendedPost:(id)arg1;
- (void)tableCellDidSelectAppUpdatePrompt:(id)arg1;
- (void)tableCell:(id)arg1 didSelectReblogTrailAvatarForBlogNamed:(id)arg2;
- (void)tableCell:(id)arg1 didSelectReblogTrailPermalinkForBlogNamed:(id)arg2 postID:(id)arg3;
- (void)tableCell:(id)arg1 didSelectAppAttributionButton:(id)arg2;
- (void)tableCell:(id)arg1 didTapActionButtonWithURL:(id)arg2;
- (void)tableCell:(id)arg1 didSelectAppInstallation:(id)arg2;
- (void)tableCell:(id)arg1 didPressReadMoreButtonForPostWithID:(id)arg2 blogName:(id)arg3;
- (void)tableCell:(id)arg1 didSelectNativeClickthroughURL:(id)arg2;
- (void)tableCell:(id)arg1 didSelectClickthroughURL:(id)arg2;
- (void)tableCellDidScrubGIF:(id)arg1;
- (void)tableCell:(id)arg1 didSelectURLAttribute:(id)arg2;
- (void)tableCell:(id)arg1 didLongPressURLAttribute:(id)arg2 fromRect:(struct CGRect)arg3;
- (void)tableCell:(id)arg1 didSelectContentSource:(id)arg2;
- (void)tableCell:(id)arg1 didTapRecommendationReasonButton:(id)arg2 destinationType:(id)arg3;
- (void)tableCellDidExpandTagsView:(id)arg1;
- (void)tableCell:(id)arg1 didSelectTag:(id)arg2;
- (void)tableCell:(id)arg1 didLongPressTag:(id)arg2 fromRect:(struct CGRect)arg3;
- (void)tableCell:(id)arg1 didSelectBlog:(id)arg2;
- (void)tableCellDidLongPressLink:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)tableCellDidSelectHeader:(id)arg1;
- (void)tableCellDidSelectHeaderAvatar:(id)arg1;
- (void)tableCell:(id)arg1 didDoubleTapAtPoint:(struct CGPoint)arg2;
- (void)tableCellDidEndLongPress:(id)arg1;
- (void)tableCell:(id)arg1 didSelectDetailLabelWithDetailType:(long long)arg2;
@end

