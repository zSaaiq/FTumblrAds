//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBVideoAdContentViewDelegate-Protocol.h"

@class FBAdVideoLogger, FBInstreamAdDataModel, FBVideoAdContentView, NSString, UIViewController;
@protocol FBVideoAdControllerDelegate;

@interface FBVideoAdController : NSObject <FBVideoAdContentViewDelegate>
{
    _Bool _contentViewLoaded;
    _Bool _started;
    FBVideoAdContentView *_contentView;
    id <FBVideoAdControllerDelegate> _delegate;
    FBInstreamAdDataModel *_dataModel;
    FBAdVideoLogger *_logger;
    UIViewController *_rootViewController;
}

@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) FBAdVideoLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) FBInstreamAdDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) _Bool contentViewLoaded; // @synthesize contentViewLoaded=_contentViewLoaded;
@property(nonatomic) __weak id <FBVideoAdControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBVideoAdContentView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)contentView:(id)arg1 didFailWithError:(id)arg2;
- (void)contentViewDidUnload:(id)arg1;
- (void)contentViewDidEnd:(id)arg1;
- (void)contentViewDidClickthrough:(id)arg1;
- (void)contentViewDidSkip:(id)arg1;
- (void)contentViewDidResume:(id)arg1;
- (void)contentViewDidPause:(id)arg1;
- (void)contentViewDidProgress:(id)arg1;
- (void)contentViewDidLoad:(id)arg1;
- (void)handleViewableImpression;
- (_Bool)showAdFromRootViewController:(id)arg1;
- (void)loadAdFromDataModel:(id)arg1 placementDefinition:(id)arg2;
- (_Bool)isNetworkOnline;
- (void)dealloc;
- (_Bool)isDataModelValid;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)initWithContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

