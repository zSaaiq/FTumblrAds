//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, TMBlog, TMBlogHeaderViewController, UITableView, UIViewController, _TtC10CoreTumblr10TMBlogInfo, _TtC11TumblrTheme7TMTheme, _TtC22TimelineViewManagement24TMTimelineViewController, _TtC6Tumblr24BlogCustomizationManager;
@protocol TMBlogHeaderViewControllerDelegate><_TtP11TumblrTheme9TMTheming_;

@protocol _TtP6Tumblr21BlogHeaderCoordinator_
@property(nonatomic, readonly) TMBlogHeaderViewController *headerViewController;
- (void)updateHeaderWithTimelineViewController:(_TtC22TimelineViewManagement24TMTimelineViewController *)arg1 navigationBarHeight:(double)arg2;
- (void)updateHeaderWithBlog:(TMBlog *)arg1 theme:(_TtC11TumblrTheme7TMTheme *)arg2 blogCustomizationManager:(_TtC6Tumblr24BlogCustomizationManager *)arg3;
- (void)addHeaderToViewController:(UIViewController *)arg1 headerDelegate:(id <TMBlogHeaderViewControllerDelegate><_TtP11TumblrTheme9TMTheming_>)arg2 tableView:(UITableView *)arg3 blogInfo:(_TtC10CoreTumblr10TMBlogInfo *)arg4 screenID:(NSString *)arg5 theme:(_TtC11TumblrTheme7TMTheme *)arg6;
@end

