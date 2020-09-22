//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class YVLightboxCellView, YVStateValue, YVValue, YVideoContainerView;

@interface YVLightboxCellModel : NSObject
{
    YVideoContainerView *_videoContainer;
    YVStateValue *_videoAspectRatio;
    YVValue *_verticalLayout;
    YVValue *_contentOffset;
    YVValue *_contentLayout;
    YVValue *_contentHeight;
    YVValue *_relativeSnapPosition;
    YVValue *_snapPosition;
    YVValue *_visible;
    YVStateValue *_chromeVisible;
    YVValue *_tapGestureEnabled;
    YVStateValue *_airplayEnabled;
    YVStateValue *_chromecastEnabled;
    YVStateValue *_contentTitle;
    YVStateValue *_contentProvider;
    YVStateValue *_contentPublishDate;
    YVValue *_contentTitleDisplayText;
    YVValue *_contentProviderDateDisplayText;
    YVStateValue *_contentDescription;
    YVStateValue *_contentDescriptionExpanded;
    YVValue *_contentDescriptionCollapsedDisplayText;
    YVValue *_contentDescriptionExpandedDisplayText;
    YVValue *_contentDescriptionDisplayText;
    YVValue *_contextualAdapterRequested;
    YVStateValue *_contextualAdapterView;
    YVStateValue *_preferredContextualAdapterHeight;
    YVValue *_contextualAdapterHeight;
    YVStateValue *_playbackReady;
    YVValue *_videoAttached;
    YVLightboxCellView *_cell;
}

- (void).cxx_destruct;
@property(nonatomic) __weak YVLightboxCellView *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) YVValue *videoAttached; // @synthesize videoAttached=_videoAttached;
@property(retain, nonatomic) YVStateValue *playbackReady; // @synthesize playbackReady=_playbackReady;
@property(retain, nonatomic) YVValue *contextualAdapterHeight; // @synthesize contextualAdapterHeight=_contextualAdapterHeight;
@property(retain, nonatomic) YVStateValue *preferredContextualAdapterHeight; // @synthesize preferredContextualAdapterHeight=_preferredContextualAdapterHeight;
@property(retain, nonatomic) YVStateValue *contextualAdapterView; // @synthesize contextualAdapterView=_contextualAdapterView;
@property(retain, nonatomic) YVValue *contextualAdapterRequested; // @synthesize contextualAdapterRequested=_contextualAdapterRequested;
@property(retain, nonatomic) YVValue *contentDescriptionDisplayText; // @synthesize contentDescriptionDisplayText=_contentDescriptionDisplayText;
@property(retain, nonatomic) YVValue *contentDescriptionExpandedDisplayText; // @synthesize contentDescriptionExpandedDisplayText=_contentDescriptionExpandedDisplayText;
@property(retain, nonatomic) YVValue *contentDescriptionCollapsedDisplayText; // @synthesize contentDescriptionCollapsedDisplayText=_contentDescriptionCollapsedDisplayText;
@property(retain, nonatomic) YVStateValue *contentDescriptionExpanded; // @synthesize contentDescriptionExpanded=_contentDescriptionExpanded;
@property(retain, nonatomic) YVStateValue *contentDescription; // @synthesize contentDescription=_contentDescription;
@property(retain, nonatomic) YVValue *contentProviderDateDisplayText; // @synthesize contentProviderDateDisplayText=_contentProviderDateDisplayText;
@property(retain, nonatomic) YVValue *contentTitleDisplayText; // @synthesize contentTitleDisplayText=_contentTitleDisplayText;
@property(retain, nonatomic) YVStateValue *contentPublishDate; // @synthesize contentPublishDate=_contentPublishDate;
@property(retain, nonatomic) YVStateValue *contentProvider; // @synthesize contentProvider=_contentProvider;
@property(retain, nonatomic) YVStateValue *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(retain, nonatomic) YVStateValue *chromecastEnabled; // @synthesize chromecastEnabled=_chromecastEnabled;
@property(retain, nonatomic) YVStateValue *airplayEnabled; // @synthesize airplayEnabled=_airplayEnabled;
@property(retain, nonatomic) YVValue *tapGestureEnabled; // @synthesize tapGestureEnabled=_tapGestureEnabled;
@property(retain, nonatomic) YVStateValue *chromeVisible; // @synthesize chromeVisible=_chromeVisible;
@property(retain, nonatomic) YVValue *visible; // @synthesize visible=_visible;
@property(retain, nonatomic) YVValue *snapPosition; // @synthesize snapPosition=_snapPosition;
@property(retain, nonatomic) YVValue *relativeSnapPosition; // @synthesize relativeSnapPosition=_relativeSnapPosition;
@property(retain, nonatomic) YVValue *contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) YVValue *contentLayout; // @synthesize contentLayout=_contentLayout;
@property(retain, nonatomic) YVValue *contentOffset; // @synthesize contentOffset=_contentOffset;
@property(retain, nonatomic) YVValue *verticalLayout; // @synthesize verticalLayout=_verticalLayout;
@property(retain, nonatomic) YVStateValue *videoAspectRatio; // @synthesize videoAspectRatio=_videoAspectRatio;
@property(retain, nonatomic) YVideoContainerView *videoContainer; // @synthesize videoContainer=_videoContainer;

@end

