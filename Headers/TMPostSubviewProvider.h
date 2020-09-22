//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMPostSubviewProviding-Protocol.h"

@class NSString, UIViewController, _TtC6Tumblr16PhotoSizeChooser, _TtC6Tumblr32BlocksPostContentSubviewProvider;
@protocol TMSession, _TtP9Analytics14EventBuffering_;

@interface TMPostSubviewProvider : NSObject <TMPostSubviewProviding>
{
    _TtC6Tumblr16PhotoSizeChooser *_photoSizeChooser;
    _TtC6Tumblr32BlocksPostContentSubviewProvider *_blocksContentSubviewProvider;
    UIViewController *_currentViewController;
    id <TMSession> _session;
    id <_TtP9Analytics14EventBuffering_> _analyticsBuffer;
    NSString *_screenID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *screenID; // @synthesize screenID=_screenID;
@property(readonly, nonatomic) id <_TtP9Analytics14EventBuffering_> analyticsBuffer; // @synthesize analyticsBuffer=_analyticsBuffer;
@property(readonly, nonatomic) id <TMSession> session; // @synthesize session=_session;
@property(readonly, nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(readonly, nonatomic) _TtC6Tumblr32BlocksPostContentSubviewProvider *blocksContentSubviewProvider; // @synthesize blocksContentSubviewProvider=_blocksContentSubviewProvider;
@property(retain, nonatomic) _TtC6Tumblr16PhotoSizeChooser *photoSizeChooser; // @synthesize photoSizeChooser=_photoSizeChooser;
- (id)reblogView;
- (id)contentViewForPostViewModel:(id)arg1;
- (id)initWithCurrentViewController:(id)arg1 session:(id)arg2 screenID:(id)arg3 analyticsBuffer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

