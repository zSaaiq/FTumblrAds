//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TMAccountCreateBlogViewDelegate-Protocol.h"
#import "_TtP6Tumblr21TMBlogCreatorDelegate_-Protocol.h"

@class NSString, TMCreateBlogView, UIButton, _TtC6Tumblr13TMBlogCreator, _TtC6Tumblr19CreateBlogViewModel;
@protocol TMCreateBlogDelegate;

@interface TMCreateBlogViewController : UIViewController <TMAccountCreateBlogViewDelegate, _TtP6Tumblr21TMBlogCreatorDelegate_>
{
    id <TMCreateBlogDelegate> _delegate;
    TMCreateBlogView *_createBlogView;
    _TtC6Tumblr13TMBlogCreator *_blogCreator;
    double _horizontalPadding;
    _TtC6Tumblr19CreateBlogViewModel *_viewModel;
    struct CGSize _viewSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _TtC6Tumblr19CreateBlogViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(retain, nonatomic) _TtC6Tumblr13TMBlogCreator *blogCreator; // @synthesize blogCreator=_blogCreator;
@property(retain, nonatomic) TMCreateBlogView *createBlogView; // @synthesize createBlogView=_createBlogView;
@property(nonatomic) __weak id <TMCreateBlogDelegate> delegate; // @synthesize delegate=_delegate;
- (void)blogCreator:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)handleFailureWithError:(id)arg1;
- (void)createBlogViewDidClearBlogname:(id)arg1;
- (void)createBlogViewHeightDidChange:(id)arg1 byAmount:(double)arg2;
- (void)createBlogView:(id)arg1 didSubmitUsername:(id)arg2 theme:(id)arg3;
- (void)createBlogViewDidCloseBlogCreation:(id)arg1;
- (void)createBlogViewButtonTapped:(id)arg1;
@property(readonly, nonatomic) UIButton *createBlogButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1 session:(id)arg2 coreDataController:(id)arg3 viewSize:(struct CGSize)arg4 horizontalPadding:(double)arg5 viewModel:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

