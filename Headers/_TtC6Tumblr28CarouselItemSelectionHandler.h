//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP14DataDisplayKit34CollectionViewItemSelectionHandler_-Protocol.h"

@class MISSING_TYPE;

@interface _TtC6Tumblr28CarouselItemSelectionHandler : NSObject <_TtP14DataDisplayKit34CollectionViewItemSelectionHandler_>
{
    MISSING_TYPE *presentingViewController;
    MISSING_TYPE *carousel;
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *analyticsBuffer;
    MISSING_TYPE *session;
    MISSING_TYPE *linkRouter;
    MISSING_TYPE *preferences;
    MISSING_TYPE *clientSideAdSources;
    MISSING_TYPE *screenIdentifier;
}

- (void).cxx_destruct;
- (id)init;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)initWithPresentingViewController:(id)arg1 carousel:(id)arg2 coreDataController:(id)arg3 analyticsBuffer:(id)arg4 session:(id)arg5 linkRouter:(id)arg6 preferences:(id)arg7 clientSideAdSources:(id)arg8 screenIdentifier:(id)arg9;

@end

