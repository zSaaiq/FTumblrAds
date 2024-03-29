//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, TMCustomButtonItem, UIBarButtonItem;

@interface _TtC6Tumblr28BlogNavigationOptionsManager : NSObject
{
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *barItemsView;
    MISSING_TYPE *leftBarItemsView;
    MISSING_TYPE *barButtonItem;
    MISSING_TYPE *leftBarButtonItem;
    MISSING_TYPE *optionsButton;
    MISSING_TYPE *snowmanButton;
    MISSING_TYPE *menuButton;
    MISSING_TYPE *followButton;
    MISSING_TYPE *messageButton;
    MISSING_TYPE *paletteButton;
    MISSING_TYPE *blogActionsButton;
    MISSING_TYPE *blogSelectionButton;
    MISSING_TYPE *searchButton;
    MISSING_TYPE *explicitBlogIsBeingPreviewed;
}

+ (id)otherUserBlogButtonSetWithTarget:(id)arg1 coreDataController:(id)arg2 followButtonConfiguration:(id)arg3 messageButtonConfiguration:(id)arg4 blogActionsButtonConfiguration:(id)arg5 searchButtonConfiguration:(id)arg6 isCensorPreview:(_Bool)arg7;
+ (id)ownBlogButtonSetWithTarget:(id)arg1 coreDataController:(id)arg2 snowmanButtonConfiguration:(id)arg3 menuButtonConfiguration:(id)arg4 paletteButtonConfiguration:(id)arg5 blogSelectionButtonConfiguration:(id)arg6 searchButtonConfiguration:(id)arg7;
- (void).cxx_destruct;
- (id)init;
- (void)updateSubscribed:(_Bool)arg1;
- (void)updateFollowing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateTitle:(id)arg1 blogTheme:(id)arg2 navigationItem:(id)arg3 tapHandler:(id)arg4 centersText:(_Bool)arg5 navigationFrameWidth:(double)arg6 isRootViewController:(_Bool)arg7 isSinglePost:(_Bool)arg8;
- (void)update:(id)arg1 navigationItem:(id)arg2 isRootViewController:(_Bool)arg3 isOwnBlog:(_Bool)arg4 animated:(_Bool)arg5 userInteractionEnabled:(_Bool)arg6;
- (id)initWithCoreDataController:(id)arg1;
@property(nonatomic, retain) TMCustomButtonItem *searchButton; // @synthesize searchButton;
@property(nonatomic, retain) TMCustomButtonItem *blogSelectionButton; // @synthesize blogSelectionButton;
@property(nonatomic, retain) TMCustomButtonItem *blogActionsButton; // @synthesize blogActionsButton;
@property(nonatomic, retain) TMCustomButtonItem *paletteButton; // @synthesize paletteButton;
@property(nonatomic, retain) TMCustomButtonItem *messageButton; // @synthesize messageButton;
@property(nonatomic, retain) TMCustomButtonItem *followButton; // @synthesize followButton;
@property(nonatomic, retain) TMCustomButtonItem *menuButton; // @synthesize menuButton;
@property(nonatomic, retain) TMCustomButtonItem *snowmanButton; // @synthesize snowmanButton;
@property(nonatomic, readonly) UIBarButtonItem *leftBarButtonItem; // @synthesize leftBarButtonItem;
@property(nonatomic, readonly) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem;

@end

