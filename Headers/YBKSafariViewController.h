//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SFSafariViewControllerDelegate-Protocol.h"
#import "YBKCommonBrowserViewController-Protocol.h"

@class NSString, NSURL, SFSafariViewController;
@protocol YBKCommonBrowserViewControllerDelegate;

@interface YBKSafariViewController : UIViewController <SFSafariViewControllerDelegate, YBKCommonBrowserViewController>
{
    _Bool _isMakingGoldenGateCall;
    id <YBKCommonBrowserViewControllerDelegate> delegate;
    unsigned long long _allowedSupportedInterfaceOrientations;
    NSURL *_URL;
    SFSafariViewController *_safariViewController;
}

+ (id)yahooPurple;
- (void).cxx_destruct;
@property(nonatomic) _Bool isMakingGoldenGateCall; // @synthesize isMakingGoldenGateCall=_isMakingGoldenGateCall;
@property(retain, nonatomic) SFSafariViewController *safariViewController; // @synthesize safariViewController=_safariViewController;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) unsigned long long allowedSupportedInterfaceOrientations; // @synthesize allowedSupportedInterfaceOrientations=_allowedSupportedInterfaceOrientations;
@property(nonatomic) __weak id <YBKCommonBrowserViewControllerDelegate> delegate; // @synthesize delegate;
- (void)closeGGRequestAndLoadUrl;
- (void)addSafariView;
- (void)removeSafariView;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
@property(readonly, nonatomic) _Bool supportsTelemetryLogging;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
