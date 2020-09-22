//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP14DataDisplayKit26CollectionViewCellProvider_-Protocol.h"

@class Carousel, NSArray, NSString, UIViewController, _TtC10LinkRouter10LinkRouter, _TtC22TimelineViewManagement19ScrollOffsetUpdater, _TtC6Tumblr19ClientSideAdSources;
@protocol TMCarouselCollectionViewCellDelegate, TMSession, TMTumblrCoreDataController, _TtP10CoreTumblr19ImpressionReceiving_, _TtP9Analytics14EventBuffering_;

@interface TMCarouselDataSource : NSObject <_TtP14DataDisplayKit26CollectionViewCellProvider_>
{
    Carousel *_carousel;
    id <TMCarouselCollectionViewCellDelegate> _cellDelegate;
    _TtC22TimelineViewManagement19ScrollOffsetUpdater *_scrollUpdater;
    NSString *_screenIdentifier;
    UIViewController *_containingViewController;
    id <TMTumblrCoreDataController> _coreDataController;
    id <TMSession> _session;
    id <_TtP9Analytics14EventBuffering_> _analyticsBuffer;
    _TtC10LinkRouter10LinkRouter *_linkRouter;
    _TtC6Tumblr19ClientSideAdSources *_clientSideAdSources;
    id <_TtP10CoreTumblr19ImpressionReceiving_> _impressionReceiver;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <_TtP10CoreTumblr19ImpressionReceiving_> impressionReceiver; // @synthesize impressionReceiver=_impressionReceiver;
@property(readonly, nonatomic) _TtC6Tumblr19ClientSideAdSources *clientSideAdSources; // @synthesize clientSideAdSources=_clientSideAdSources;
@property(readonly, nonatomic) _TtC10LinkRouter10LinkRouter *linkRouter; // @synthesize linkRouter=_linkRouter;
@property(readonly, nonatomic) id <_TtP9Analytics14EventBuffering_> analyticsBuffer; // @synthesize analyticsBuffer=_analyticsBuffer;
@property(readonly, nonatomic) id <TMSession> session; // @synthesize session=_session;
@property(readonly, nonatomic) id <TMTumblrCoreDataController> coreDataController; // @synthesize coreDataController=_coreDataController;
@property(readonly, nonatomic) __weak UIViewController *containingViewController; // @synthesize containingViewController=_containingViewController;
@property(readonly, nonatomic) NSString *screenIdentifier; // @synthesize screenIdentifier=_screenIdentifier;
@property(nonatomic) __weak _TtC22TimelineViewManagement19ScrollOffsetUpdater *scrollUpdater; // @synthesize scrollUpdater=_scrollUpdater;
@property(nonatomic) __weak id <TMCarouselCollectionViewCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) Carousel *carousel; // @synthesize carousel=_carousel;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
@property(readonly, nonatomic) NSArray *carouselItems;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithCarousel:(id)arg1 cellDelegate:(id)arg2 scrollUpdater:(id)arg3 screenIdentifier:(id)arg4 containingViewController:(id)arg5 coreDataController:(id)arg6 session:(id)arg7 linkRouter:(id)arg8 analyticsBuffer:(id)arg9 clientSideAdSources:(id)arg10 impressionReceiver:(id)arg11;
- (id)init;

@end

