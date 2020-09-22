//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPageViewController.h>

#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSNotificationCenter, NSString, NSValue, TMColorSwatchViewController, TMCustomizeColorGroup, UIColor, UIPageControl;
@protocol TMColorPalettePageViewControllerDelegate;

@interface TMColorPalettePageViewController : UIPageViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource>
{
    UIColor *_selectedColor;
    NSArray *_colorGroups;
    NSMutableDictionary *_colorGroupsToCurrentPages;
    TMCustomizeColorGroup *_currentGroup;
    id <TMColorPalettePageViewControllerDelegate> _colorGroupDelegate;
    UIPageControl *_pageControl;
    NSNotificationCenter *_notificationCenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) __weak id <TMColorPalettePageViewControllerDelegate> colorGroupDelegate; // @synthesize colorGroupDelegate=_colorGroupDelegate;
@property(nonatomic) __weak TMCustomizeColorGroup *currentGroup; // @synthesize currentGroup=_currentGroup;
@property(retain, nonatomic) NSMutableDictionary *colorGroupsToCurrentPages; // @synthesize colorGroupsToCurrentPages=_colorGroupsToCurrentPages;
@property(retain, nonatomic) NSArray *colorGroups; // @synthesize colorGroups=_colorGroups;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
- (id)nextViewControllerForCurrentViewController:(id)arg1 transformingIndexWithBlock:(CDUnknownBlockType)arg2 stayingInBoundsWithBlock:(CDUnknownBlockType)arg3 selectingNextVariationWithBlock:(CDUnknownBlockType)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
@property(readonly, nonatomic) NSValue *copyableCurrentGroupValue;
@property(readonly, nonatomic) TMColorSwatchViewController *currentViewController;
- (void)setPageControlCurrentPage:(unsigned long long)arg1;
- (void)setPageControlCurrentPageAndCacheValue:(unsigned long long)arg1;
- (void)showCachedCurrentPageForCurrentColorGroup;
- (void)showPageWithVariation:(id)arg1;
- (void)pageControlTapped;
- (void)colorSelectionNotificationReceived:(id)arg1;
- (void)selectColorGroup:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3;
- (id)initWithColorGroups:(id)arg1 selectedColor:(id)arg2 delegate:(id)arg3 notificationCenter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
