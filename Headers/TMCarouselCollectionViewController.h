//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "TMCarouselCollectionViewCellDelegate-Protocol.h"
#import "TMImpressionReceiverProvider-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"

@class Carousel, NSString, TMBlogPreviewContainer, TMCarouselAppInstallationCollectionViewCell, TMCarouselDataSource, TMHeaderLoader, TMLoadingControl, _TtC10LinkRouter10LinkRouter, _TtC21DataDisplayKitHelpers30ManagedObjectDataChangeApplier, _TtC22TimelineViewManagement19ScrollOffsetUpdater, _TtC22TimelineViewManagement21PostViewConfiguration, _TtC6Tumblr19ClientSideAdSources, _TtC6Tumblr23CarouselAdEventProvider, _TtC6Tumblr23ExploreTabEventProvider;
@protocol TMSession, TMTumblrCoreDataController, _TtP10CoreTumblr19ImpressionReceiving_, _TtP14DataDisplayKit17EmptyViewProvider_, _TtP14DataDisplayKit25PaginationAnalyticsSender_, _TtP14DataDisplayKit30DataDisplayViewDataCoordinator_, _TtP19NetworkAbstractions11DataService_, _TtP9Analytics14EventBuffering_;

@interface TMCarouselCollectionViewController : UICollectionViewController <TMCarouselCollectionViewCellDelegate, UIViewControllerPreviewingDelegate, TMImpressionReceiverProvider>
{
    id <_TtP10CoreTumblr19ImpressionReceiving_> _impressionReceiver;
    Carousel *_carousel;
    TMCarouselDataSource *_carouselDataSource;
    TMCarouselAppInstallationCollectionViewCell *_loadingAppInstallationCell;
    _TtC22TimelineViewManagement19ScrollOffsetUpdater *_scrollOffsetUpdater;
    id <TMTumblrCoreDataController> _coreDataController;
    id <TMSession> _session;
    id <_TtP9Analytics14EventBuffering_> _analyticsBuffer;
    TMBlogPreviewContainer *_blogPreviewContainer;
    _TtC22TimelineViewManagement21PostViewConfiguration *_postViewConfiguration;
    _TtC10LinkRouter10LinkRouter *_linkRouter;
    TMHeaderLoader *_headerLoader;
    TMLoadingControl *_footerLoader;
    id <_TtP14DataDisplayKit30DataDisplayViewDataCoordinator_> _coordinator;
    _TtC21DataDisplayKitHelpers30ManagedObjectDataChangeApplier *_dataChangeApplier;
    id <_TtP19NetworkAbstractions11DataService_> _dataService;
    id <_TtP14DataDisplayKit17EmptyViewProvider_> _emptyViewProvider;
    id <_TtP14DataDisplayKit25PaginationAnalyticsSender_> _paginationAnalyticsSender;
    NSString *_screenIdentifier;
    _TtC6Tumblr19ClientSideAdSources *_clientSideAdSources;
    _TtC6Tumblr23ExploreTabEventProvider *_exploreEventProvider;
    _TtC6Tumblr23CarouselAdEventProvider *_carouselAdEventProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _TtC6Tumblr23CarouselAdEventProvider *carouselAdEventProvider; // @synthesize carouselAdEventProvider=_carouselAdEventProvider;
@property(readonly, nonatomic) _TtC6Tumblr23ExploreTabEventProvider *exploreEventProvider; // @synthesize exploreEventProvider=_exploreEventProvider;
@property(readonly, nonatomic) _TtC6Tumblr19ClientSideAdSources *clientSideAdSources; // @synthesize clientSideAdSources=_clientSideAdSources;
@property(readonly, nonatomic) NSString *screenIdentifier; // @synthesize screenIdentifier=_screenIdentifier;
@property(readonly, nonatomic) id <_TtP14DataDisplayKit25PaginationAnalyticsSender_> paginationAnalyticsSender; // @synthesize paginationAnalyticsSender=_paginationAnalyticsSender;
@property(readonly, nonatomic) id <_TtP14DataDisplayKit17EmptyViewProvider_> emptyViewProvider; // @synthesize emptyViewProvider=_emptyViewProvider;
@property(readonly, nonatomic) id <_TtP19NetworkAbstractions11DataService_> dataService; // @synthesize dataService=_dataService;
@property(readonly, nonatomic) _TtC21DataDisplayKitHelpers30ManagedObjectDataChangeApplier *dataChangeApplier; // @synthesize dataChangeApplier=_dataChangeApplier;
@property(readonly, nonatomic) id <_TtP14DataDisplayKit30DataDisplayViewDataCoordinator_> coordinator; // @synthesize coordinator=_coordinator;
@property(readonly, nonatomic) TMLoadingControl *footerLoader; // @synthesize footerLoader=_footerLoader;
@property(readonly, nonatomic) TMHeaderLoader *headerLoader; // @synthesize headerLoader=_headerLoader;
@property(readonly, nonatomic) _TtC10LinkRouter10LinkRouter *linkRouter; // @synthesize linkRouter=_linkRouter;
@property(retain, nonatomic) _TtC22TimelineViewManagement21PostViewConfiguration *postViewConfiguration; // @synthesize postViewConfiguration=_postViewConfiguration;
@property(retain, nonatomic) TMBlogPreviewContainer *blogPreviewContainer; // @synthesize blogPreviewContainer=_blogPreviewContainer;
@property(readonly, nonatomic) id <_TtP9Analytics14EventBuffering_> analyticsBuffer; // @synthesize analyticsBuffer=_analyticsBuffer;
@property(readonly, nonatomic) id <TMSession> session; // @synthesize session=_session;
@property(readonly, nonatomic) id <TMTumblrCoreDataController> coreDataController; // @synthesize coreDataController=_coreDataController;
@property(retain, nonatomic) _TtC22TimelineViewManagement19ScrollOffsetUpdater *scrollOffsetUpdater; // @synthesize scrollOffsetUpdater=_scrollOffsetUpdater;
@property(nonatomic) __weak TMCarouselAppInstallationCollectionViewCell *loadingAppInstallationCell; // @synthesize loadingAppInstallationCell=_loadingAppInstallationCell;
@property(retain, nonatomic) TMCarouselDataSource *carouselDataSource; // @synthesize carouselDataSource=_carouselDataSource;
@property(retain, nonatomic) Carousel *carousel; // @synthesize carousel=_carousel;
@property(nonatomic) __weak id <_TtP10CoreTumblr19ImpressionReceiving_> impressionReceiver; // @synthesize impressionReceiver=_impressionReceiver;
- (void)presentRelatedBlogs:(id)arg1 carouselBlogCard:(id)arg2;
- (id)relatedBlogsViewControllerForBlogCardCell:(id)arg1 carouselBlogCard:(id)arg2;
- (void)openBadgeURLString:(id)arg1;
- (void)carouselBadgeTapped:(id)arg1;
- (void)carouselCollectionViewCell:(id)arg1 didTapChiclet:(id)arg2;
- (void)removeCollectionViewCellAtIndexPath:(id)arg1;
- (void)removeCollectionViewCell:(id)arg1;
- (void)markCarouselItemAsNonDisplayable:(id)arg1;
- (void)carouselCollectionViewCellDidTapFollowBlog:(id)arg1;
- (void)carouselCollectionViewCellDidTapSponsoredBadge:(id)arg1 withURLString:(id)arg2;
- (void)carouselCollectionViewCellDidTapDismissBlog:(id)arg1;
- (void)carouselCollectionViewCellDidTapBlog:(id)arg1 placementIdentifier:(id)arg2 postIdentifier:(id)arg3;
- (void)carouselCollectionViewCellDidBecomeVisible:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)reloadCells;
- (void)viewDidLoad;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)blogPreviewContextController;
- (id)createCoordinator:(id)arg1;
- (void)setupCollectionView;
- (id)initWithCollectionViewLayout:(id)arg1 parentViewController:(id)arg2 carousel:(id)arg3 dataService:(id)arg4 postViewConfiguration:(id)arg5 coreDataController:(id)arg6 analyticsBuffer:(id)arg7 linkRouter:(id)arg8 session:(id)arg9 clientSideAdSources:(id)arg10 emptyViewProvider:(id)arg11 paginationAnalyticsSender:(id)arg12 batchUpdateDelegate:(id)arg13 screenIdentifier:(id)arg14 impressionReceiver:(id)arg15;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

