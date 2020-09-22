#line 1 "Tweak.xm"

#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class YMAdView; @class YMAdViewStateAnimationTracker; @class _TtC6Tumblr27YahooSponsoredMomentsAdView; @class FlurryJSONAdRequestBuilder; @class YMAdAssetFetcherRequest; @class TMImageBackfillAdCreative; @class YMAdAppPolicy; @class YMAdAssetCache; @class SMAdManager; @class YMAdBrowser; @class TMBackfillAdCreative; @class YMAdActionProxyVideo; @class SMAdPanoramaView; @class YMAdDynamicLayoutContext; @class YMAdActionProxy; @class SMAdView; @class FlurryManagedUIRequestManager; @class YMAdNibAsset; @class YMAdManager; @class YMAdDynamicViewSettingsCollection; @class YMAdReachability; @class YMAdAsset; @class SMAdPlayableView; @class YMAd; @class YMAdYI13NAnalytics; @class YMAdOnScreenMetrics; @class _TtC6Tumblr14BackfillAdCell; @class SMAdVideoView; @class GADOpener; @class YMAdVideoViewManager; @class YMAdViewConfig; @class YMAdActionProxyExpandable; @class YMAdActionButtons; @class YMAdVideo; @class YMAdViewResolver; @class YMAdViewComponents; @class YMAdVideoPlayerView; @class YMAdViewStateToViewDictionary; @class YMAdViewReuseManager; @class YMAdImageAsset; @class YMAdAppPolicyManifest; @class YMAdNullAnalytics; @class TMVideoBackfillAdCreative; @class YMAdAssetedPolicy; @class YMAdActionProxyFeedback; @class _TtC6Tumblr15DisplayIOAdView; @class TMBackfillAd; @class _TtC6Tumblr33YahooSponsoredMomentsViewsManager; @class YMAdViewOptions; @class YMAdDynamicViewAltSettings; @class YMAdReportingOptions; 
static void (*_logos_orig$_ungrouped$YMAdDynamicViewAltSettings$setPrimaryView$)(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicViewAltSettings* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdDynamicViewAltSettings$setPrimaryView$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicViewAltSettings* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdDynamicViewAltSettings$setAlternateViewKey$)(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicViewAltSettings* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdDynamicViewAltSettings$setAlternateViewKey$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicViewAltSettings* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdDynamicViewSettingsCollection$setLayoutHeight$forView$)(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicViewSettingsCollection* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$YMAdDynamicViewSettingsCollection$setLayoutHeight$forView$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicViewSettingsCollection* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$YMAdDynamicViewSettingsCollection$setSearchKey$)(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicViewSettingsCollection* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdDynamicViewSettingsCollection$setSearchKey$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicViewSettingsCollection* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdDynamicViewSettingsCollection$setSettingsCollection$)(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicViewSettingsCollection* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdDynamicViewSettingsCollection$setSettingsCollection$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicViewSettingsCollection* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdDynamicLayoutContext$setIsInSubtreeChangingAppearance$)(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAdDynamicLayoutContext$setIsInSubtreeChangingAppearance$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAdDynamicLayoutContext$setSubtreeAppearing$)(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAdDynamicLayoutContext$setSubtreeAppearing$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAdDynamicLayoutContext$setCompletion$)(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdDynamicLayoutContext$setCompletion$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdDynamicLayoutContext$setAnimationDuration$)(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST, SEL, float); static void _logos_method$_ungrouped$YMAdDynamicLayoutContext$setAnimationDuration$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST, SEL, float); static void (*_logos_orig$_ungrouped$YMAdDynamicLayoutContext$setSettingsCollection$)(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdDynamicLayoutContext$setSettingsCollection$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST, SEL, id); static bool (*_logos_orig$_ungrouped$YMAdDynamicLayoutContext$isInAppearingSubtree)(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST, SEL); static bool _logos_method$_ungrouped$YMAdDynamicLayoutContext$isInAppearingSubtree(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST, SEL); static bool (*_logos_orig$_ungrouped$YMAdDynamicLayoutContext$isInDisappearingSubtree)(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST, SEL); static bool _logos_method$_ungrouped$YMAdDynamicLayoutContext$isInDisappearingSubtree(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST, SEL); static bool (*_logos_orig$_ungrouped$YMAdDynamicLayoutContext$subtreeAppearing)(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST, SEL); static bool _logos_method$_ungrouped$YMAdDynamicLayoutContext$subtreeAppearing(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdReportingOptions$setPresentingViewController$)(_LOGOS_SELF_TYPE_NORMAL YMAdReportingOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdReportingOptions$setPresentingViewController$(_LOGOS_SELF_TYPE_NORMAL YMAdReportingOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdReportingOptions$setImpressionPosition$)(_LOGOS_SELF_TYPE_NORMAL YMAdReportingOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdReportingOptions$setImpressionPosition$(_LOGOS_SELF_TYPE_NORMAL YMAdReportingOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdReportingOptions$setInstrumentationTag$)(_LOGOS_SELF_TYPE_NORMAL YMAdReportingOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdReportingOptions$setInstrumentationTag$(_LOGOS_SELF_TYPE_NORMAL YMAdReportingOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdReportingOptions$setDoNotPresentPage$)(_LOGOS_SELF_TYPE_NORMAL YMAdReportingOptions* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAdReportingOptions$setDoNotPresentPage$(_LOGOS_SELF_TYPE_NORMAL YMAdReportingOptions* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAd$setViewabilityForPlayback$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, float); static void _logos_method$_ungrouped$YMAd$setViewabilityForPlayback$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, float); static void (*_logos_orig$_ungrouped$YMAd$setForcePlayback$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAd$setForcePlayback$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAd$loadVideo)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAd$loadVideo(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAd$play)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAd$play(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAd$setVideoPlayerDelegate$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setVideoPlayerDelegate$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportVideoQuartile100)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAd$reportVideoQuartile100(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAd$reportVideoQuartile75)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAd$reportVideoQuartile75(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAd$reportVideoQuartile50)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAd$reportVideoQuartile50(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAd$reportVideoQuartile25)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAd$reportVideoQuartile25(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAd$reportVideoTickedToPosition$withDuration$params$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, float, float, id); static void _logos_method$_ungrouped$YMAd$reportVideoTickedToPosition$withDuration$params$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, float, float, id); static void (*_logos_orig$_ungrouped$YMAd$reportVideoClickQuartile100)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAd$reportVideoClickQuartile100(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAd$reportHide$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$reportHide$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportHideReason$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$reportHideReason$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportVideoBeacon$params$forceBeacon$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, int, id, bool); static void _logos_method$_ungrouped$YMAd$reportVideoBeacon$params$forceBeacon$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, int, id, bool); static void (*_logos_orig$_ungrouped$YMAd$trackViewabilityWithView$withType$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id, long long); static void _logos_method$_ungrouped$YMAd$trackViewabilityWithView$withType$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id, long long); static void (*_logos_orig$_ungrouped$YMAd$untrackViewability)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAd$untrackViewability(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAd$setImpressionPosition$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setImpressionPosition$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportPageLoadTime)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAd$reportPageLoadTime(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAd$reportAdClose)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAd$reportAdClose(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAd$reportInfoIconClick)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAd$reportInfoIconClick(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAd$reportClick)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAd$reportClick(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAd$reportClickWithPresentingViewController$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$reportClickWithPresentingViewController$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setImpressionOptions$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setImpressionOptions$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportClickWithOptions$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$reportClickWithOptions$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportFeedbackClickWithPresentingViewController$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$reportFeedbackClickWithPresentingViewController$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportInfoIconClickWithPresentingViewController$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$reportInfoIconClickWithPresentingViewController$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportInfoIconClickWithOptions$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$reportInfoIconClickWithOptions$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportCallToActionClickWithPresentingViewController$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$reportCallToActionClickWithPresentingViewController$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportCallAction$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$reportCallAction$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportWebEndCardImpression$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$reportWebEndCardImpression$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportWebEndCardClick$presentingViewController$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$YMAd$reportWebEndCardClick$presentingViewController$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$YMAd$setAdUnit$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setAdUnit$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setAdID$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setAdID$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportSponsoredAdAction$withParams$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, long long, id); static void _logos_method$_ungrouped$YMAd$reportSponsoredAdAction$withParams$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, long long, id); static void (*_logos_orig$_ungrouped$YMAd$setHeadline$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setHeadline$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setIsPlaceholder$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAd$setIsPlaceholder$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAd$setHeadlineStylized$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setHeadlineStylized$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setSummary$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setSummary$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setSummaryStylized$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setSummaryStylized$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setSponsor$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setSponsor$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setSponsorLabel$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setSponsorLabel$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setShareURL$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setShareURL$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setLanguageCode$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setLanguageCode$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setInventorySourceID$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setInventorySourceID$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setSponsoredAd$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setSponsoredAd$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setRenderingPolicy$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setRenderingPolicy$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setLayoutTypeString$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setLayoutTypeString$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setLayoutType$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, long long); static void _logos_method$_ungrouped$YMAd$setLayoutType$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, long long); static void (*_logos_orig$_ungrouped$YMAd$setInteractionType$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, long long); static void _logos_method$_ungrouped$YMAd$setInteractionType$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, long long); static void (*_logos_orig$_ungrouped$YMAd$setOnScreenMetrics$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setOnScreenMetrics$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setIsInMutedState$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAd$setIsInMutedState$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAd$setIsInMutedByUser$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAd$setIsInMutedByUser$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAd$setCreativeID$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setCreativeID$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setTileAssetsJson$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setTileAssetsJson$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setTileRendererURL$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setTileRendererURL$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setIsTileAd$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAd$setIsTileAd$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAd$setIsReengagementAd$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAd$setIsReengagementAd$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAd$setLandingPageURL$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setLandingPageURL$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setIsFlashSaleAd$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAd$setIsFlashSaleAd$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAd$setFlashSaleExpiration$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setFlashSaleExpiration$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setVideoURL$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setVideoURL$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setEndCardWebURL$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setEndCardWebURL$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setAssetIndex$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setAssetIndex$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setAssetId$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setAssetId$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setExternalBeaconKeyValues$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setExternalBeaconKeyValues$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setPhoto$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setPhoto$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setClickURLString$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setClickURLString$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setRawJSON$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setRawJSON$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setImpressionURLFormat$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setImpressionURLFormat$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setClickURLFormat$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setClickURLFormat$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setInfoIconDestinationURL$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setInfoIconDestinationURL$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setAdManager$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setAdManager$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setForceNativeBrowser$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAd$setForceNativeBrowser$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAd$setTimeOfCreation$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setTimeOfCreation$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setViewabilityPercentForPlayback$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, float); static void _logos_method$_ungrouped$YMAd$setViewabilityPercentForPlayback$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, float); static void (*_logos_orig$_ungrouped$YMAd$setForceFlag$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAd$setForceFlag$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAd$setLoadVideoFlag$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAd$setLoadVideoFlag$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAd$setVideoPlayerStatusDelegate$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setVideoPlayerStatusDelegate$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setViewToTrack$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setViewToTrack$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setVideoViewToTrack$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setVideoViewToTrack$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setVideoPlayTag$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setVideoPlayTag$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setVideoPauseTag$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setVideoPauseTag$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setTrackerIsActive$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAd$setTrackerIsActive$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAd$setState$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setState$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setVideo$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setVideo$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setApp$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setApp$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setFeedback$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setFeedback$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setCallToAction$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setCallToAction$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setFlurryAdReporting$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setFlurryAdReporting$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$setVideoPlayerControlsDelegate$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setVideoPlayerControlsDelegate$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$unmute$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAd$unmute$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAd$pause)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAd$pause(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAd$reportVideoCharge)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAd$reportVideoCharge(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAd$reportVideoStart$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$reportVideoStart$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportVideoCharge$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$reportVideoCharge$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportVideoQuartile25$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$reportVideoQuartile25$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportVideoQuartile50$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$reportVideoQuartile50$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportVideoQuartile100$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$reportVideoQuartile100$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportVideoQuartile75$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$reportVideoQuartile75$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportVideoClickQuartile100$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$reportVideoClickQuartile100$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$reportVideoPaused)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAd$reportVideoPaused(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAd$reportVideoReplay)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAd$reportVideoReplay(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAd$resetVideoProgressBeaconFlags)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAd$resetVideoProgressBeaconFlags(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAd$trackViewabilityWithView$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$trackViewabilityWithView$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$trackingViewSetActive$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAd$trackingViewSetActive$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAd$setMutedState$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAd$setMutedState$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAd$modifyOptions$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$modifyOptions$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAd$resetBeaconFlag$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, int); static void _logos_method$_ungrouped$YMAd$resetBeaconFlag$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, int); static void (*_logos_orig$_ungrouped$YMAd$setIdentifier$)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAd$setIdentifier$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL, id); static bool (*_logos_orig$_ungrouped$YMAd$shouldAutoplay)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static bool _logos_method$_ungrouped$YMAd$shouldAutoplay(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static bool (*_logos_orig$_ungrouped$YMAd$hasPhoto)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static bool _logos_method$_ungrouped$YMAd$hasPhoto(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static bool (*_logos_orig$_ungrouped$YMAd$hasFlashSale)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static bool _logos_method$_ungrouped$YMAd$hasFlashSale(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static bool (*_logos_orig$_ungrouped$YMAd$flashSaleIsDisplayable)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static bool _logos_method$_ungrouped$YMAd$flashSaleIsDisplayable(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static id (*_logos_orig$_ungrouped$YMAd$photo)(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static id _logos_method$_ungrouped$YMAd$photo(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdOnScreenMetrics$setAreaPercentageThreshold$)(_LOGOS_SELF_TYPE_NORMAL YMAdOnScreenMetrics* _LOGOS_SELF_CONST, SEL, unsigned long long); static void _logos_method$_ungrouped$YMAdOnScreenMetrics$setAreaPercentageThreshold$(_LOGOS_SELF_TYPE_NORMAL YMAdOnScreenMetrics* _LOGOS_SELF_CONST, SEL, unsigned long long); static void (*_logos_orig$_ungrouped$YMAdOnScreenMetrics$setDurationThreshold$)(_LOGOS_SELF_TYPE_NORMAL YMAdOnScreenMetrics* _LOGOS_SELF_CONST, SEL, float); static void _logos_method$_ungrouped$YMAdOnScreenMetrics$setDurationThreshold$(_LOGOS_SELF_TYPE_NORMAL YMAdOnScreenMetrics* _LOGOS_SELF_CONST, SEL, float); static void (*_logos_orig$_ungrouped$YMAdActionButtons$applyViewOptions$)(_LOGOS_SELF_TYPE_NORMAL YMAdActionButtons* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdActionButtons$applyViewOptions$(_LOGOS_SELF_TYPE_NORMAL YMAdActionButtons* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdActionButtons$setAdInfo$)(_LOGOS_SELF_TYPE_NORMAL YMAdActionButtons* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdActionButtons$setAdInfo$(_LOGOS_SELF_TYPE_NORMAL YMAdActionButtons* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdActionButtons$applyFontOptions$)(_LOGOS_SELF_TYPE_NORMAL YMAdActionButtons* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdActionButtons$applyFontOptions$(_LOGOS_SELF_TYPE_NORMAL YMAdActionButtons* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdActionButtons$setLearnMoreLabels$)(_LOGOS_SELF_TYPE_NORMAL YMAdActionButtons* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdActionButtons$setLearnMoreLabels$(_LOGOS_SELF_TYPE_NORMAL YMAdActionButtons* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdActionButtons$setInstallButtons$)(_LOGOS_SELF_TYPE_NORMAL YMAdActionButtons* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdActionButtons$setInstallButtons$(_LOGOS_SELF_TYPE_NORMAL YMAdActionButtons* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdActionProxy$setTargetSelector$)(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxy* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdActionProxy$setTargetSelector$(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxy* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdActionProxyExpandable$expand)(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdActionProxyExpandable$expand(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdActionProxyExpandable$beginExpand)(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdActionProxyExpandable$beginExpand(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdActionProxyExpandable$beginCollapse)(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdActionProxyExpandable$beginCollapse(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdActionProxyExpandable$endExpand)(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdActionProxyExpandable$endExpand(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdActionProxyExpandable$collapse)(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdActionProxyExpandable$collapse(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdActionProxyExpandable$endCollapse)(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdActionProxyExpandable$endCollapse(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdActionProxyFeedback$setToHiddenLayout)(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyFeedback* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdActionProxyFeedback$setToHiddenLayout(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyFeedback* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdActionProxyFeedback$setToThanksLayout)(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyFeedback* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdActionProxyFeedback$setToThanksLayout(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyFeedback* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdActionProxyVideo$willEnterScreen)(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyVideo* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdActionProxyVideo$willEnterScreen(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyVideo* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdActionProxyVideo$enableAutoplay)(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyVideo* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdActionProxyVideo$enableAutoplay(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyVideo* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdActionProxyVideo$disableAutoplay)(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyVideo* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdActionProxyVideo$disableAutoplay(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyVideo* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdActionProxyVideo$didLeaveScreen)(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyVideo* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdActionProxyVideo$didLeaveScreen(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyVideo* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdYI13NAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$options$)(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST, SEL, int, id, id, id, id, id, id); static void _logos_method$_ungrouped$YMAdYI13NAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$options$(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST, SEL, int, id, id, id, id, id, id); static void (*_logos_orig$_ungrouped$YMAdYI13NAnalytics$logAdActionEvent$value$apiKey$ad$adUnit$requestID$targetURL$options$)(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST, SEL, int, id, id, id, id, id, id, id); static void _logos_method$_ungrouped$YMAdYI13NAnalytics$logAdActionEvent$value$apiKey$ad$adUnit$requestID$targetURL$options$(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST, SEL, int, id, id, id, id, id, id, id); static void (*_logos_orig$_ungrouped$YMAdYI13NAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$)(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST, SEL, int, id, id, id, id, id); static void _logos_method$_ungrouped$YMAdYI13NAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST, SEL, int, id, id, id, id, id); static void (*_logos_orig$_ungrouped$YMAdYI13NAnalytics$logErrorEvent$value$ad$adUnit$requestID$targetURL$)(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST, SEL, int, id, id, id, id, id); static void _logos_method$_ungrouped$YMAdYI13NAnalytics$logErrorEvent$value$ad$adUnit$requestID$targetURL$(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST, SEL, int, id, id, id, id, id); static void (*_logos_orig$_ungrouped$YMAdYI13NAnalytics$setLogger$)(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdYI13NAnalytics$setLogger$(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdYI13NAnalytics$setFlurryAnalytics$)(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdYI13NAnalytics$setFlurryAnalytics$(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdYI13NAnalytics$setApiKey$)(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdYI13NAnalytics$setApiKey$(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdYI13NAnalytics$setSnoopyAnalytics$)(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdYI13NAnalytics$setSnoopyAnalytics$(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdNullAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$)(_LOGOS_SELF_TYPE_NORMAL YMAdNullAnalytics* _LOGOS_SELF_CONST, SEL, int, id, id, id, id, id); static void _logos_method$_ungrouped$YMAdNullAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$(_LOGOS_SELF_TYPE_NORMAL YMAdNullAnalytics* _LOGOS_SELF_CONST, SEL, int, id, id, id, id, id); static void (*_logos_orig$_ungrouped$YMAdNullAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$options$)(_LOGOS_SELF_TYPE_NORMAL YMAdNullAnalytics* _LOGOS_SELF_CONST, SEL, int, id, id, id, id, id, id); static void _logos_method$_ungrouped$YMAdNullAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$options$(_LOGOS_SELF_TYPE_NORMAL YMAdNullAnalytics* _LOGOS_SELF_CONST, SEL, int, id, id, id, id, id, id); static void (*_logos_orig$_ungrouped$YMAdNullAnalytics$logErrorEvent$value$ad$adUnit$requestID$targetURL$)(_LOGOS_SELF_TYPE_NORMAL YMAdNullAnalytics* _LOGOS_SELF_CONST, SEL, int, id, id, id, id, id); static void _logos_method$_ungrouped$YMAdNullAnalytics$logErrorEvent$value$ad$adUnit$requestID$targetURL$(_LOGOS_SELF_TYPE_NORMAL YMAdNullAnalytics* _LOGOS_SELF_CONST, SEL, int, id, id, id, id, id); static void (*_logos_orig$_ungrouped$YMAdNullAnalytics$logAdActionEvent$value$apiKey$ad$adUnit$requestID$targetURL$options$)(_LOGOS_SELF_TYPE_NORMAL YMAdNullAnalytics* _LOGOS_SELF_CONST, SEL, int, id, id, id, id, id, id, id); static void _logos_method$_ungrouped$YMAdNullAnalytics$logAdActionEvent$value$apiKey$ad$adUnit$requestID$targetURL$options$(_LOGOS_SELF_TYPE_NORMAL YMAdNullAnalytics* _LOGOS_SELF_CONST, SEL, int, id, id, id, id, id, id, id); static void (*_logos_orig$_ungrouped$YMAdAppPolicy$setReuseIDs$)(_LOGOS_SELF_TYPE_NORMAL YMAdAppPolicy* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdAppPolicy$setReuseIDs$(_LOGOS_SELF_TYPE_NORMAL YMAdAppPolicy* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdAppPolicy$setMinTimeBetweenRequests$)(_LOGOS_SELF_TYPE_NORMAL YMAdAppPolicy* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdAppPolicy$setMinTimeBetweenRequests$(_LOGOS_SELF_TYPE_NORMAL YMAdAppPolicy* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdAppPolicyManifest$setMinTimeBetweenRequests$)(_LOGOS_SELF_TYPE_NORMAL YMAdAppPolicyManifest* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdAppPolicyManifest$setMinTimeBetweenRequests$(_LOGOS_SELF_TYPE_NORMAL YMAdAppPolicyManifest* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdAppPolicyManifest$setReuseIDs$)(_LOGOS_SELF_TYPE_NORMAL YMAdAppPolicyManifest* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdAppPolicyManifest$setReuseIDs$(_LOGOS_SELF_TYPE_NORMAL YMAdAppPolicyManifest* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdAsset$setPreloaded$)(_LOGOS_SELF_TYPE_NORMAL YMAdAsset* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAdAsset$setPreloaded$(_LOGOS_SELF_TYPE_NORMAL YMAdAsset* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_meta_orig$_ungrouped$YMAdAsset$initialize)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL); static void _logos_meta_method$_ungrouped$YMAdAsset$initialize(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdAsset$setCachingSize$)(_LOGOS_SELF_TYPE_NORMAL YMAdAsset* _LOGOS_SELF_CONST, SEL, unsigned long long); static void _logos_method$_ungrouped$YMAdAsset$setCachingSize$(_LOGOS_SELF_TYPE_NORMAL YMAdAsset* _LOGOS_SELF_CONST, SEL, unsigned long long); static void (*_logos_orig$_ungrouped$YMAdNibAsset$setNib$)(_LOGOS_SELF_TYPE_NORMAL YMAdNibAsset* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdNibAsset$setNib$(_LOGOS_SELF_TYPE_NORMAL YMAdNibAsset* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdAssetFetcherRequest$addCompletionBlock$)(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdAssetFetcherRequest$addCompletionBlock$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdAssetFetcherRequest$notifyCompleteAndCleanup$asset$error$)(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST, SEL, id, id, id); static void _logos_method$_ungrouped$YMAdAssetFetcherRequest$notifyCompleteAndCleanup$asset$error$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST, SEL, id, id, id); static void (*_logos_orig$_ungrouped$YMAdAssetFetcherRequest$setCompletionBlocks$)(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdAssetFetcherRequest$setCompletionBlocks$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdAssetFetcherRequest$setAssetType$)(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdAssetFetcherRequest$setAssetType$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdAssetFetcherRequest$setSignatureY64$)(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdAssetFetcherRequest$setSignatureY64$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdAssetFetcherRequest$setFetchOperation$)(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdAssetFetcherRequest$setFetchOperation$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdImageAsset$setImage$)(_LOGOS_SELF_TYPE_NORMAL YMAdImageAsset* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdImageAsset$setImage$(_LOGOS_SELF_TYPE_NORMAL YMAdImageAsset* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdAssetCache$triggerPreLoadFromDisk$ofType$signature$)(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL, id, id, id); static void _logos_method$_ungrouped$YMAdAssetCache$triggerPreLoadFromDisk$ofType$signature$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL, id, id, id); static void (*_logos_orig$_ungrouped$YMAdAssetCache$dealloc)(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdAssetCache$dealloc(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdAssetCache$onFetchCompleteForURL$data$error$)(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL, id, id, id); static void _logos_method$_ungrouped$YMAdAssetCache$onFetchCompleteForURL$data$error$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL, id, id, id); static void (*_logos_orig$_ungrouped$YMAdAssetCache$instrumentRefetch$assetType$)(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$YMAdAssetCache$instrumentRefetch$assetType$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$YMAdAssetCache$setAssetFetcher$)(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdAssetCache$setAssetFetcher$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdAssetCache$setQueuedFetches$)(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdAssetCache$setQueuedFetches$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdAssetCache$setPreloads$)(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdAssetCache$setPreloads$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdAssetCache$setMemoryCache$)(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdAssetCache$setMemoryCache$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdAssetCache$setAssetLog$)(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdAssetCache$setAssetLog$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdAssetedPolicy$getImageAsset$completion$)(_LOGOS_SELF_TYPE_NORMAL YMAdAssetedPolicy* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$YMAdAssetedPolicy$getImageAsset$completion$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetedPolicy* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$YMAdAssetedPolicy$setAssetCache$)(_LOGOS_SELF_TYPE_NORMAL YMAdAssetedPolicy* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdAssetedPolicy$setAssetCache$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetedPolicy* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdReachability$dealloc)(_LOGOS_SELF_TYPE_NORMAL YMAdReachability* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdReachability$dealloc(_LOGOS_SELF_TYPE_NORMAL YMAdReachability* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdReachability$stopNotifier)(_LOGOS_SELF_TYPE_NORMAL YMAdReachability* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdReachability$stopNotifier(_LOGOS_SELF_TYPE_NORMAL YMAdReachability* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$FlurryManagedUIRequestManager$setYmadVersion$)(_LOGOS_SELF_TYPE_NORMAL FlurryManagedUIRequestManager* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$FlurryManagedUIRequestManager$setYmadVersion$(_LOGOS_SELF_TYPE_NORMAL FlurryManagedUIRequestManager* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$FlurryJSONAdRequestBuilder$setYmadVersion$)(_LOGOS_SELF_TYPE_NORMAL FlurryJSONAdRequestBuilder* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$FlurryJSONAdRequestBuilder$setYmadVersion$(_LOGOS_SELF_TYPE_NORMAL FlurryJSONAdRequestBuilder* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$_TtC6Tumblr15DisplayIOAdView$willMoveToWindow$)(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr15DisplayIOAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$_TtC6Tumblr15DisplayIOAdView$willMoveToWindow$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr15DisplayIOAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$_TtC6Tumblr15DisplayIOAdView$ctaClick)(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr15DisplayIOAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$_TtC6Tumblr15DisplayIOAdView$ctaClick(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr15DisplayIOAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$_TtC6Tumblr14BackfillAdCell$updateColors$)(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$updateColors$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$_TtC6Tumblr14BackfillAdCell$updateTheming$)(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$updateTheming$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$_TtC6Tumblr14BackfillAdCell$layoutSubviews)(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$layoutSubviews(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$_TtC6Tumblr14BackfillAdCell$setBloglessAdView$)(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$setBloglessAdView$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$_TtC6Tumblr14BackfillAdCell$setupWithBackfillAd$viewConfiguration$appColorScheme$bloglessAdViewDelegate$postCellResponder$spacerHeight$yahooVideoPlayerProvider$)(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST, SEL, id, id, id, id, id, float, id); static void _logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$setupWithBackfillAd$viewConfiguration$appColorScheme$bloglessAdViewDelegate$postCellResponder$spacerHeight$yahooVideoPlayerProvider$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST, SEL, id, id, id, id, id, float, id); static void (*_logos_orig$_ungrouped$_TtC6Tumblr14BackfillAdCell$updateWithAppColorSource$)(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$updateWithAppColorSource$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$TMBackfillAd$setType$)(_LOGOS_SELF_TYPE_NORMAL TMBackfillAd* _LOGOS_SELF_CONST, SEL, int); static void _logos_method$_ungrouped$TMBackfillAd$setType$(_LOGOS_SELF_TYPE_NORMAL TMBackfillAd* _LOGOS_SELF_CONST, SEL, int); static void (*_logos_orig$_ungrouped$TMBackfillAd$updateWithDictionary$)(_LOGOS_SELF_TYPE_NORMAL TMBackfillAd* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$TMBackfillAd$updateWithDictionary$(_LOGOS_SELF_TYPE_NORMAL TMBackfillAd* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$TMBackfillAdCreative$updateWithDictionary$)(_LOGOS_SELF_TYPE_NORMAL TMBackfillAdCreative* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$TMBackfillAdCreative$updateWithDictionary$(_LOGOS_SELF_TYPE_NORMAL TMBackfillAdCreative* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$TMImageBackfillAdCreative$updateWithDictionary$)(_LOGOS_SELF_TYPE_NORMAL TMImageBackfillAdCreative* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$TMImageBackfillAdCreative$updateWithDictionary$(_LOGOS_SELF_TYPE_NORMAL TMImageBackfillAdCreative* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$TMVideoBackfillAdCreative$updateWithDictionary$)(_LOGOS_SELF_TYPE_NORMAL TMVideoBackfillAdCreative* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$TMVideoBackfillAdCreative$updateWithDictionary$(_LOGOS_SELF_TYPE_NORMAL TMVideoBackfillAdCreative* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$GADOpener$setAdView$)(_LOGOS_SELF_TYPE_NORMAL GADOpener* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$GADOpener$setAdView$(_LOGOS_SELF_TYPE_NORMAL GADOpener* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$GADOpener$setSlot$)(_LOGOS_SELF_TYPE_NORMAL GADOpener* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$GADOpener$setSlot$(_LOGOS_SELF_TYPE_NORMAL GADOpener* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$GADOpener$setReferringURL$)(_LOGOS_SELF_TYPE_NORMAL GADOpener* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$GADOpener$setReferringURL$(_LOGOS_SELF_TYPE_NORMAL GADOpener* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$GADOpener$setViewController$)(_LOGOS_SELF_TYPE_NORMAL GADOpener* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$GADOpener$setViewController$(_LOGOS_SELF_TYPE_NORMAL GADOpener* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setTileTapToOpenLabel$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setTileTapToOpenLabel$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setTapToOpenOverlay$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setTapToOpenOverlay$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$showHideSubviewsForAd$viewState$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id, int); static void _logos_method$_ungrouped$YMAdView$showHideSubviewsForAd$viewState$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id, int); static void (*_logos_orig$_ungrouped$YMAdView$setPrimaryAdInfo$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setPrimaryAdInfo$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$applyViewOptions$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$applyViewOptions$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$applyFontOptions$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$applyFontOptions$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$respondToScrollViewEvent$scrollOffsetY$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, float, float); static void _logos_method$_ungrouped$YMAdView$respondToScrollViewEvent$scrollOffsetY$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, float, float); static void (*_logos_orig$_ungrouped$YMAdView$updateAdjustableViewForAdContainerWithHeight$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$updateAdjustableViewForAdContainerWithHeight$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setSizing$viewState$containerWidth$animated$completion$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id, int, float, bool, id); static void _logos_method$_ungrouped$YMAdView$setSizing$viewState$containerWidth$animated$completion$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id, int, float, bool, id); static void (*_logos_orig$_ungrouped$YMAdView$awakeFromNib)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdView$awakeFromNib(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdView$applyVisualState$initializing$animated$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, int, bool, bool); static void _logos_method$_ungrouped$YMAdView$applyVisualState$initializing$animated$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, int, bool, bool); static void (*_logos_orig$_ungrouped$YMAdView$relayout)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdView$relayout(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdView$setContainerWidth$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, float); static void _logos_method$_ungrouped$YMAdView$setContainerWidth$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, float); static void (*_logos_orig$_ungrouped$YMAdView$updateWithAd$delegates$containerWidth$viewState$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id, id, float, int); static void _logos_method$_ungrouped$YMAdView$updateWithAd$delegates$containerWidth$viewState$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id, id, float, int); static void (*_logos_orig$_ungrouped$YMAdView$layoutWithAd$viewState$containerWidth$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id, int, float); static void _logos_method$_ungrouped$YMAdView$layoutWithAd$viewState$containerWidth$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id, int, float); static void (*_logos_orig$_ungrouped$YMAdView$setAdInfo$viewState$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id, int); static void _logos_method$_ungrouped$YMAdView$setAdInfo$viewState$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id, int); static void (*_logos_orig$_ungrouped$YMAdView$updateVisualState$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, int); static void _logos_method$_ungrouped$YMAdView$updateVisualState$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, int); static void (*_logos_orig$_ungrouped$YMAdView$setInfoIconImage$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setInfoIconImage$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$regsiterViewForVisibility)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdView$regsiterViewForVisibility(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdView$regsiterViewForNoLongerVisible)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdView$regsiterViewForNoLongerVisible(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdView$regsiterViewForVideoVisibility)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdView$regsiterViewForVideoVisibility(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdView$regsiterViewForVideoNoLongerVisibile)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdView$regsiterViewForVideoNoLongerVisibile(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdView$deregisterVideoTrackers)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdView$deregisterVideoTrackers(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdView$play)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdView$play(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdView$presentClickVideoView)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdView$presentClickVideoView(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdView$showTileCTA)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdView$showTileCTA(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdView$setTileLightningIconImage$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setTileLightningIconImage$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$hideTileCTA)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdView$hideTileCTA(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdView$handleExpand)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdView$handleExpand(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdView$setExpandIconImage$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setExpandIconImage$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$hideExpandIcon)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdView$hideExpandIcon(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdView$showExpandIcon)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdView$showExpandIcon(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdView$setAdPhotoImage$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setAdPhotoImage$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setAdPhotoWithAnimatedImageView$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setAdPhotoWithAnimatedImageView$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setAppIconImage$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setAppIconImage$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setAdThumbnailImage$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setAdThumbnailImage$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setAdThumbnailWithAnimatedImageView$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setAdThumbnailWithAnimatedImageView$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$mergeViewOptions$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$mergeViewOptions$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setFontScale$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, float); static void _logos_method$_ungrouped$YMAdView$setFontScale$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, float); static void (*_logos_orig$_ungrouped$YMAdView$initViewOptionsFromPolicy$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$initViewOptionsFromPolicy$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$infoIconTapped$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$infoIconTapped$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$adTapped$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$adTapped$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$installNowTapped$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$installNowTapped$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$cpiRegionTapped$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$cpiRegionTapped$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$learnMoreTapped$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$learnMoreTapped$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$adPhotoTapped$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$adPhotoTapped$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$viewWithRegionTapped$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$viewWithRegionTapped$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$adFeedbackPopoverIconTapped$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$adFeedbackPopoverIconTapped$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$delegateTapOn$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, int); static void _logos_method$_ungrouped$YMAdView$delegateTapOn$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, int); static void (*_logos_orig$_ungrouped$YMAdView$skAppStoreDismiss)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdView$skAppStoreDismiss(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdView$skAppStoreLoad)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdView$skAppStoreLoad(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdView$setContainerView$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setContainerView$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setViewOptions$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setViewOptions$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setInstrumentationTag$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setInstrumentationTag$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setAd$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setAd$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setViewConfig$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setViewConfig$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setFontOptions$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setFontOptions$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setDelegates$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setDelegates$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setHeadline$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setHeadline$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setSponsorLabel$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setSponsorLabel$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setSummary$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setSummary$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setSponsor$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setSponsor$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setExpandIcon$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setExpandIcon$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setTileLightningIcon$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setTileLightningIcon$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setInfoIcon$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setInfoIcon$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setAdPhoto$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setAdPhoto$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setThumbNailImage$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setThumbNailImage$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setCpiRegion$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setCpiRegion$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setViewComponents$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setViewComponents$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setVideoPlayerView$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setVideoPlayerView$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setCpcRegion$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setCpcRegion$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setAdContentView$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setAdContentView$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setAdFeedbackView$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setAdFeedbackView$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setAdFeedbackPopoverIcon$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setAdFeedbackPopoverIcon$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setCtaButton$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setCtaButton$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setFlashSaleTimerView$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setFlashSaleTimerView$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setMeasuringView$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setMeasuringView$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setHeightConstraint$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setHeightConstraint$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setWidthConstraint$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setWidthConstraint$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setVideoViewComponent$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setVideoViewComponent$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$set_containerWidth$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, float); static void _logos_method$_ungrouped$YMAdView$set_containerWidth$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, float); static void (*_logos_orig$_ungrouped$YMAdView$setTileExpandedTag$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setTileExpandedTag$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setAnimationTracker$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setAnimationTracker$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setTileCollasedTag$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdView$setTileCollasedTag$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdView$setAlreadyPlayed$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAdView$setAlreadyPlayed$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAdView$setWasPlaying$)(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAdView$setWasPlaying$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAdVideoViewManager$addKeyToUsedList$withAutoLoopEnabled$)(_LOGOS_SELF_TYPE_NORMAL YMAdVideoViewManager* _LOGOS_SELF_CONST, SEL, id, bool); static void _logos_method$_ungrouped$YMAdVideoViewManager$addKeyToUsedList$withAutoLoopEnabled$(_LOGOS_SELF_TYPE_NORMAL YMAdVideoViewManager* _LOGOS_SELF_CONST, SEL, id, bool); static void (*_logos_orig$_ungrouped$YMAdVideoViewManager$setActiveVideo$didChangeAdViews$withAutoLoopEnabled$)(_LOGOS_SELF_TYPE_NORMAL YMAdVideoViewManager* _LOGOS_SELF_CONST, SEL, id, bool, bool); static void _logos_method$_ungrouped$YMAdVideoViewManager$setActiveVideo$didChangeAdViews$withAutoLoopEnabled$(_LOGOS_SELF_TYPE_NORMAL YMAdVideoViewManager* _LOGOS_SELF_CONST, SEL, id, bool, bool); static void (*_logos_orig$_ungrouped$YMAdManager$openAppStoreForAd$parentViewController$complete$)(_LOGOS_SELF_TYPE_NORMAL YMAdManager* _LOGOS_SELF_CONST, SEL, id, id, id); static void _logos_method$_ungrouped$YMAdManager$openAppStoreForAd$parentViewController$complete$(_LOGOS_SELF_TYPE_NORMAL YMAdManager* _LOGOS_SELF_CONST, SEL, id, id, id); static void (*_logos_orig$_ungrouped$YMAdManager$openYahooBrowserWithURL$parentViewController$useNativeBrowser$telemetryIdentifier$)(_LOGOS_SELF_TYPE_NORMAL YMAdManager* _LOGOS_SELF_CONST, SEL, id, id, bool, id); static void _logos_method$_ungrouped$YMAdManager$openYahooBrowserWithURL$parentViewController$useNativeBrowser$telemetryIdentifier$(_LOGOS_SELF_TYPE_NORMAL YMAdManager* _LOGOS_SELF_CONST, SEL, id, id, bool, id); static void (*_logos_orig$_ungrouped$YMAdVideo$setAutoLoopEnabled$)(_LOGOS_SELF_TYPE_NORMAL YMAdVideo* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAdVideo$setAutoLoopEnabled$(_LOGOS_SELF_TYPE_NORMAL YMAdVideo* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAdBrowser$openURL$presentingViewController$useNativeBrowser$telemetryIdentifier$)(_LOGOS_SELF_TYPE_NORMAL YMAdBrowser* _LOGOS_SELF_CONST, SEL, id, id, bool, id); static void _logos_method$_ungrouped$YMAdBrowser$openURL$presentingViewController$useNativeBrowser$telemetryIdentifier$(_LOGOS_SELF_TYPE_NORMAL YMAdBrowser* _LOGOS_SELF_CONST, SEL, id, id, bool, id); static void (*_logos_orig$_ungrouped$SMAdView$openBrowserForURL$)(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$SMAdView$openBrowserForURL$(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$SMAdView$buildSponsoredMomentsAdElementsView)(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$SMAdView$buildSponsoredMomentsAdElementsView(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$SMAdView$buildSponsoredMomentsAdFlashSaleTimerView)(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$SMAdView$buildSponsoredMomentsAdFlashSaleTimerView(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$SMAdView$buildSponsoredMomentsAdTopLabelViews)(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$SMAdView$buildSponsoredMomentsAdTopLabelViews(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$SMAdView$setupSponsoredMomentsTopLabel$)(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$SMAdView$setupSponsoredMomentsTopLabel$(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$SMAdView$setSponsoredMomentsAd$)(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$SMAdView$setSponsoredMomentsAd$(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$SMAdView$setSponsoredMomentsAdElementsView$)(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$SMAdView$setSponsoredMomentsAdElementsView$(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$SMAdView$setSponsoredMomentsAdTopLabelViewRight$)(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$SMAdView$setSponsoredMomentsAdTopLabelViewRight$(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$SMAdView$setSponsoredMomentsAdTopLabelViewLeft$)(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$SMAdView$setSponsoredMomentsAdTopLabelViewLeft$(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$SMAdView$setSponsoredMomentsAdFlashSaleTimerView$)(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$SMAdView$setSponsoredMomentsAdFlashSaleTimerView$(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewStateToViewDictionary$eachViewDoAction$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateToViewDictionary* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewStateToViewDictionary$eachViewDoAction$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateToViewDictionary* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewStateToViewDictionary$awakeFromNib)(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateToViewDictionary* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdViewStateToViewDictionary$awakeFromNib(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateToViewDictionary* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdViewStateToViewDictionary$setViews$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateToViewDictionary* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewStateToViewDictionary$setViews$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateToViewDictionary* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewStateToViewDictionary$eachViewOfType$doAction$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateToViewDictionary* _LOGOS_SELF_CONST, SEL, Class, id); static void _logos_method$_ungrouped$YMAdViewStateToViewDictionary$eachViewOfType$doAction$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateToViewDictionary* _LOGOS_SELF_CONST, SEL, Class, id); static void (*_logos_orig$_ungrouped$YMAdViewStateToViewDictionary$setViewDictionary$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateToViewDictionary* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewStateToViewDictionary$setViewDictionary$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateToViewDictionary* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdVideoPlayerView$ymadViewExpandButtonTapped)(_LOGOS_SELF_TYPE_NORMAL YMAdVideoPlayerView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdVideoPlayerView$ymadViewExpandButtonTapped(_LOGOS_SELF_TYPE_NORMAL YMAdVideoPlayerView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdViewConfig$setMinContainerWidth$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewConfig$setMinContainerWidth$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewConfig$setAdHeightType$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewConfig$setAdHeightType$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewConfig$setAdWidthType$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewConfig$setAdWidthType$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewConfig$setAdFeedbackNibName$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewConfig$setAdFeedbackNibName$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewConfig$setAdFeedbackShadow$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewConfig$setAdFeedbackShadow$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewConfig$setInfoIconColoringView$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewConfig$setInfoIconColoringView$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewConfig$setInfoIconAlpha$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewConfig$setInfoIconAlpha$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewConfig$setHeightPadding$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewConfig$setHeightPadding$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewConfig$setFontScalingEnabled$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewConfig$setFontScalingEnabled$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewConfig$setViewID$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewConfig$setViewID$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewConfig$setAdjustableViewForAdContainer$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewConfig$setAdjustableViewForAdContainer$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewConfig$setSettingsCollection$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewConfig$setSettingsCollection$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewComponents$setAdOnAdViewComponents$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewComponents$setAdOnAdViewComponents$(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewComponents$eachComponentOfType$doAction$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$YMAdViewComponents$eachComponentOfType$doAction$(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$YMAdViewComponents$eachFontScalableComponentDoAction$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewComponents$eachFontScalableComponentDoAction$(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewComponents$eachThemableComponentDoAction$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewComponents$eachThemableComponentDoAction$(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewComponents$eachStatefulComponentDoAction$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewComponents$eachStatefulComponentDoAction$(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewComponents$setViewComponents$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewComponents$setViewComponents$(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewComponents$eachLayoutComponentDoAction$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewComponents$eachLayoutComponentDoAction$(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$merge$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewOptions$merge$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$setBackgroundColor$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewOptions$setBackgroundColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$setHeadlineColor$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewOptions$setHeadlineColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$setSummaryColor$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewOptions$setSummaryColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$setButtonColor$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewOptions$setButtonColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$setButtonTextColor$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewOptions$setButtonTextColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$setButtonTextSize$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewOptions$setButtonTextSize$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$setButtonBackgroundColor$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewOptions$setButtonBackgroundColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$setButtonIcon$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewOptions$setButtonIcon$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$setLinkColor$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewOptions$setLinkColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$setSponsorTextColor$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewOptions$setSponsorTextColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$setSponsorColor$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewOptions$setSponsorColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$setStateLabelColor$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewOptions$setStateLabelColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$setAppNameColor$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewOptions$setAppNameColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$setAppCategoryColor$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewOptions$setAppCategoryColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$setExpandCloseTextColor$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewOptions$setExpandCloseTextColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$setBackgroundOpacity$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewOptions$setBackgroundOpacity$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewOptions$setShouldShowAvatar$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, bool); static void _logos_method$_ungrouped$YMAdViewOptions$setShouldShowAvatar$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST, SEL, bool); static void (*_logos_orig$_ungrouped$YMAdViewResolver$addVideoNibs$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewResolver$addVideoNibs$(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewResolver$addCardNibs$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewResolver$addCardNibs$(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewResolver$addDefaultNibs$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewResolver$addDefaultNibs$(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewResolver$setAdToNibBundleMapping$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewResolver$setAdToNibBundleMapping$(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewResolver$setAdToNibBundleCache$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewResolver$setAdToNibBundleCache$(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewResolver$setReuseIdentifierToTemplateKeyMap$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewResolver$setReuseIdentifierToTemplateKeyMap$(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewResolver$setNibPackageCache$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewResolver$setNibPackageCache$(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewReuseManager$setPlaceholderAdUnits$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewReuseManager* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewReuseManager$setPlaceholderAdUnits$(_LOGOS_SELF_TYPE_NORMAL YMAdViewReuseManager* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewReuseManager$setSizingViews$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewReuseManager* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewReuseManager$setSizingViews$(_LOGOS_SELF_TYPE_NORMAL YMAdViewReuseManager* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewReuseManager$set_reuseIdentifiers$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewReuseManager* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewReuseManager$set_reuseIdentifiers$(_LOGOS_SELF_TYPE_NORMAL YMAdViewReuseManager* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewReuseManager$setAdUI$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewReuseManager* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewReuseManager$setAdUI$(_LOGOS_SELF_TYPE_NORMAL YMAdViewReuseManager* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewReuseManager$setFixedHeights$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewReuseManager* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewReuseManager$setFixedHeights$(_LOGOS_SELF_TYPE_NORMAL YMAdViewReuseManager* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewStateAnimationTracker$setCurrentAnimatingIdentifier$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST, SEL, unsigned long long); static void _logos_method$_ungrouped$YMAdViewStateAnimationTracker$setCurrentAnimatingIdentifier$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST, SEL, unsigned long long); static void (*_logos_orig$_ungrouped$YMAdViewStateAnimationTracker$layoutCompletedForTrackerIdentifier$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST, SEL, unsigned long long); static void _logos_method$_ungrouped$YMAdViewStateAnimationTracker$layoutCompletedForTrackerIdentifier$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST, SEL, unsigned long long); static void (*_logos_orig$_ungrouped$YMAdViewStateAnimationTracker$reset)(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$YMAdViewStateAnimationTracker$reset(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$YMAdViewStateAnimationTracker$setOwningAdView$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$YMAdViewStateAnimationTracker$setOwningAdView$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$YMAdViewStateAnimationTracker$set_currentAnimatingIdentifier$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST, SEL, unsigned long long); static void _logos_method$_ungrouped$YMAdViewStateAnimationTracker$set_currentAnimatingIdentifier$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST, SEL, unsigned long long); static void (*_logos_orig$_ungrouped$YMAdViewStateAnimationTracker$setNextAvailableAnimatingIdentifier$)(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST, SEL, unsigned long long); static void _logos_method$_ungrouped$YMAdViewStateAnimationTracker$setNextAvailableAnimatingIdentifier$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST, SEL, unsigned long long); static void (*_logos_orig$_ungrouped$SMAdPanoramaView$buildSponsoredMomentsAdElementsView)(_LOGOS_SELF_TYPE_NORMAL SMAdPanoramaView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$SMAdPanoramaView$buildSponsoredMomentsAdElementsView(_LOGOS_SELF_TYPE_NORMAL SMAdPanoramaView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$SMAdPanoramaView$buildSponsoredMomentsAdFooterElementsView)(_LOGOS_SELF_TYPE_NORMAL SMAdPanoramaView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$SMAdPanoramaView$buildSponsoredMomentsAdFooterElementsView(_LOGOS_SELF_TYPE_NORMAL SMAdPanoramaView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$SMAdPanoramaView$setSponsoredMomentsAdFooterElementsView$)(_LOGOS_SELF_TYPE_NORMAL SMAdPanoramaView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$SMAdPanoramaView$setSponsoredMomentsAdFooterElementsView$(_LOGOS_SELF_TYPE_NORMAL SMAdPanoramaView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$SMAdPlayableView$buildSponsoredMomentsAdElementsView)(_LOGOS_SELF_TYPE_NORMAL SMAdPlayableView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$SMAdPlayableView$buildSponsoredMomentsAdElementsView(_LOGOS_SELF_TYPE_NORMAL SMAdPlayableView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$SMAdVideoView$buildSponsoredMomentsAdElementsView)(_LOGOS_SELF_TYPE_NORMAL SMAdVideoView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$SMAdVideoView$buildSponsoredMomentsAdElementsView(_LOGOS_SELF_TYPE_NORMAL SMAdVideoView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$SMAdVideoView$buildSponsoredMomentsAdFooterElementsView)(_LOGOS_SELF_TYPE_NORMAL SMAdVideoView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$SMAdVideoView$buildSponsoredMomentsAdFooterElementsView(_LOGOS_SELF_TYPE_NORMAL SMAdVideoView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$SMAdVideoView$setSponsoredMomentsAdFooterElementsView$)(_LOGOS_SELF_TYPE_NORMAL SMAdVideoView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$SMAdVideoView$setSponsoredMomentsAdFooterElementsView$(_LOGOS_SELF_TYPE_NORMAL SMAdVideoView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewDidCompleteFade$)(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr27YahooSponsoredMomentsAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewDidCompleteFade$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr27YahooSponsoredMomentsAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewContentsDidChange$)(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr27YahooSponsoredMomentsAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewContentsDidChange$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr27YahooSponsoredMomentsAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewDidFinishLoading$)(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr27YahooSponsoredMomentsAdView* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewDidFinishLoading$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr27YahooSponsoredMomentsAdView* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewDidFinishLoading$withError$)(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr27YahooSponsoredMomentsAdView* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewDidFinishLoading$withError$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr27YahooSponsoredMomentsAdView* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$_TtC6Tumblr33YahooSponsoredMomentsViewsManager$dealloc)(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr33YahooSponsoredMomentsViewsManager* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$_TtC6Tumblr33YahooSponsoredMomentsViewsManager$dealloc(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr33YahooSponsoredMomentsViewsManager* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$_TtC6Tumblr33YahooSponsoredMomentsViewsManager$contentOffsetCalculator$offsetChanged$inView$)(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr33YahooSponsoredMomentsViewsManager* _LOGOS_SELF_CONST, SEL, id, struct CGPoint, id); static void _logos_method$_ungrouped$_TtC6Tumblr33YahooSponsoredMomentsViewsManager$contentOffsetCalculator$offsetChanged$inView$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr33YahooSponsoredMomentsViewsManager* _LOGOS_SELF_CONST, SEL, id, struct CGPoint, id); static void (*_logos_orig$_ungrouped$SMAdManager$setSponsoredMomentsAdLastShownTimeStamp$)(_LOGOS_SELF_TYPE_NORMAL SMAdManager* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$SMAdManager$setSponsoredMomentsAdLastShownTimeStamp$(_LOGOS_SELF_TYPE_NORMAL SMAdManager* _LOGOS_SELF_CONST, SEL, id); 

#line 1 "Tweak.xm"

static void _logos_method$_ungrouped$YMAdDynamicViewAltSettings$setPrimaryView$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicViewAltSettings* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdDynamicViewAltSettings$setAlternateViewKey$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicViewAltSettings* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdDynamicViewSettingsCollection$setLayoutHeight$forView$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicViewSettingsCollection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
  return;
}



static void _logos_method$_ungrouped$YMAdDynamicViewSettingsCollection$setSearchKey$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicViewSettingsCollection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdDynamicViewSettingsCollection$setSettingsCollection$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicViewSettingsCollection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdDynamicLayoutContext$setIsInSubtreeChangingAppearance$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdDynamicLayoutContext$setSubtreeAppearing$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdDynamicLayoutContext$setCompletion$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdReportingOptions$setPresentingViewController$(_LOGOS_SELF_TYPE_NORMAL YMAdReportingOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdReportingOptions$setImpressionPosition$(_LOGOS_SELF_TYPE_NORMAL YMAdReportingOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdReportingOptions$setInstrumentationTag$(_LOGOS_SELF_TYPE_NORMAL YMAdReportingOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdReportingOptions$setDoNotPresentPage$(_LOGOS_SELF_TYPE_NORMAL YMAdReportingOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setViewabilityForPlayback$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, float arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setForcePlayback$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$loadVideo(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAd$play(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setVideoPlayerDelegate$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportVideoQuartile100(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportVideoQuartile75(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportVideoQuartile50(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportVideoQuartile25(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportVideoTickedToPosition$withDuration$params$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, float arg1, float arg2, id arg3) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportVideoClickQuartile100(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportHide$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportHideReason$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportVideoBeacon$params$forceBeacon$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1, id arg2, bool arg3) {
  return;
}



static void _logos_method$_ungrouped$YMAd$trackViewabilityWithView$withType$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, long long arg2) {
  return;
}



static void _logos_method$_ungrouped$YMAd$untrackViewability(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setImpressionPosition$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportPageLoadTime(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportAdClose(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportInfoIconClick(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportClick(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportClickWithPresentingViewController$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setImpressionOptions$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportClickWithOptions$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportFeedbackClickWithPresentingViewController$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportInfoIconClickWithPresentingViewController$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportInfoIconClickWithOptions$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportCallToActionClickWithPresentingViewController$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportCallAction$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportWebEndCardImpression$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportWebEndCardClick$presentingViewController$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setAdUnit$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setAdID$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportSponsoredAdAction$withParams$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1, id arg2) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setHeadline$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setIsPlaceholder$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setHeadlineStylized$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setSummary$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setSummaryStylized$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setSponsor$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setSponsorLabel$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setShareURL$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setLanguageCode$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setInventorySourceID$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setSponsoredAd$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setRenderingPolicy$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setLayoutTypeString$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setLayoutType$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setInteractionType$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setOnScreenMetrics$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setIsInMutedState$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setIsInMutedByUser$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setCreativeID$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setTileAssetsJson$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setTileRendererURL$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setIsTileAd$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setIsReengagementAd$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setLandingPageURL$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setIsFlashSaleAd$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setFlashSaleExpiration$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setVideoURL$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setEndCardWebURL$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setAssetIndex$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setAssetId$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setExternalBeaconKeyValues$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setPhoto$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setClickURLString$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setRawJSON$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setImpressionURLFormat$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setClickURLFormat$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setInfoIconDestinationURL$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setAdManager$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setForceNativeBrowser$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setTimeOfCreation$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setViewabilityPercentForPlayback$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, float arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setForceFlag$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setLoadVideoFlag$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setVideoPlayerStatusDelegate$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setViewToTrack$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setVideoViewToTrack$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setVideoPlayTag$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setVideoPauseTag$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setTrackerIsActive$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setState$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setVideo$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setApp$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setFeedback$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setCallToAction$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setFlurryAdReporting$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setVideoPlayerControlsDelegate$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdOnScreenMetrics$setAreaPercentageThreshold$(_LOGOS_SELF_TYPE_NORMAL YMAdOnScreenMetrics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionButtons$applyViewOptions$(_LOGOS_SELF_TYPE_NORMAL YMAdActionButtons* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionButtons$setAdInfo$(_LOGOS_SELF_TYPE_NORMAL YMAdActionButtons* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdOnScreenMetrics$setDurationThreshold$(_LOGOS_SELF_TYPE_NORMAL YMAdOnScreenMetrics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, float arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionButtons$applyFontOptions$(_LOGOS_SELF_TYPE_NORMAL YMAdActionButtons* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionButtons$setLearnMoreLabels$(_LOGOS_SELF_TYPE_NORMAL YMAdActionButtons* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionProxy$setTargetSelector$(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxy* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionButtons$setInstallButtons$(_LOGOS_SELF_TYPE_NORMAL YMAdActionButtons* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionProxyExpandable$expand(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionProxyExpandable$beginExpand(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionProxyExpandable$beginCollapse(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionProxyExpandable$endExpand(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionProxyExpandable$collapse(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionProxyExpandable$endCollapse(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyExpandable* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionProxyFeedback$setToHiddenLayout(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyFeedback* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionProxyFeedback$setToThanksLayout(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyFeedback* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionProxyVideo$willEnterScreen(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyVideo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionProxyVideo$enableAutoplay(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyVideo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionProxyVideo$disableAutoplay(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyVideo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdActionProxyVideo$didLeaveScreen(_LOGOS_SELF_TYPE_NORMAL YMAdActionProxyVideo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdYI13NAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$options$(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1, id arg2, id arg3, id arg4, id arg5, id arg6, id arg7) {
  return;
}



static void _logos_method$_ungrouped$YMAdYI13NAnalytics$logAdActionEvent$value$apiKey$ad$adUnit$requestID$targetURL$options$(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1, id arg2, id arg3, id arg4, id arg5, id arg6, id arg7, id arg8) {
  return;
}



static void _logos_method$_ungrouped$YMAdYI13NAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1, id arg2, id arg3, id arg4, id arg5, id arg6) {
  return;
}



static void _logos_method$_ungrouped$YMAdYI13NAnalytics$logErrorEvent$value$ad$adUnit$requestID$targetURL$(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1, id arg2, id arg3, id arg4, id arg5, id arg6) {
  return;
}



static void _logos_method$_ungrouped$YMAdYI13NAnalytics$setLogger$(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdYI13NAnalytics$setFlurryAnalytics$(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdYI13NAnalytics$setApiKey$(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdYI13NAnalytics$setSnoopyAnalytics$(_LOGOS_SELF_TYPE_NORMAL YMAdYI13NAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdNullAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$(_LOGOS_SELF_TYPE_NORMAL YMAdNullAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1, id arg2, id arg3, id arg4, id arg5, id arg6) {
  return;
}



static void _logos_method$_ungrouped$YMAdNullAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$options$(_LOGOS_SELF_TYPE_NORMAL YMAdNullAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1, id arg2, id arg3, id arg4, id arg5, id arg6, id arg7) {
  return;
}



static void _logos_method$_ungrouped$YMAdNullAnalytics$logErrorEvent$value$ad$adUnit$requestID$targetURL$(_LOGOS_SELF_TYPE_NORMAL YMAdNullAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1, id arg2, id arg3, id arg4, id arg5, id arg6) {
  return;
}



static void _logos_method$_ungrouped$YMAdNullAnalytics$logAdActionEvent$value$apiKey$ad$adUnit$requestID$targetURL$options$(_LOGOS_SELF_TYPE_NORMAL YMAdNullAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1, id arg2, id arg3, id arg4, id arg5, id arg6, id arg7, id arg8) {
  return;
}



static void _logos_method$_ungrouped$YMAdAppPolicy$setReuseIDs$(_LOGOS_SELF_TYPE_NORMAL YMAdAppPolicy* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdAppPolicy$setMinTimeBetweenRequests$(_LOGOS_SELF_TYPE_NORMAL YMAdAppPolicy* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdAppPolicyManifest$setMinTimeBetweenRequests$(_LOGOS_SELF_TYPE_NORMAL YMAdAppPolicyManifest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdAsset$setPreloaded$(_LOGOS_SELF_TYPE_NORMAL YMAdAsset* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_meta_method$_ungrouped$YMAdAsset$initialize(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdNibAsset$setNib$(_LOGOS_SELF_TYPE_NORMAL YMAdNibAsset* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdAsset$setCachingSize$(_LOGOS_SELF_TYPE_NORMAL YMAdAsset* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdAppPolicyManifest$setReuseIDs$(_LOGOS_SELF_TYPE_NORMAL YMAdAppPolicyManifest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdAssetFetcherRequest$addCompletionBlock$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdAssetFetcherRequest$notifyCompleteAndCleanup$asset$error$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
  return;
}



static void _logos_method$_ungrouped$YMAdImageAsset$setImage$(_LOGOS_SELF_TYPE_NORMAL YMAdImageAsset* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdAssetFetcherRequest$setCompletionBlocks$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdAssetFetcherRequest$setAssetType$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdAssetFetcherRequest$setSignatureY64$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdAssetCache$triggerPreLoadFromDisk$ofType$signature$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
  return;
}



static void _logos_method$_ungrouped$YMAdAssetFetcherRequest$setFetchOperation$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetFetcherRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdAssetCache$dealloc(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdAssetCache$onFetchCompleteForURL$data$error$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
  return;
}



static void _logos_method$_ungrouped$YMAdAssetCache$instrumentRefetch$assetType$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
  return;
}



static void _logos_method$_ungrouped$YMAdAssetCache$setAssetFetcher$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdAssetCache$setQueuedFetches$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdAssetCache$setPreloads$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdAssetCache$setMemoryCache$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdAssetCache$setAssetLog$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetCache* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdAssetedPolicy$getImageAsset$completion$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetedPolicy* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
  return;
}



static void _logos_method$_ungrouped$YMAdAssetedPolicy$setAssetCache$(_LOGOS_SELF_TYPE_NORMAL YMAdAssetedPolicy* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdReachability$dealloc(_LOGOS_SELF_TYPE_NORMAL YMAdReachability* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdReachability$stopNotifier(_LOGOS_SELF_TYPE_NORMAL YMAdReachability* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$FlurryManagedUIRequestManager$setYmadVersion$(_LOGOS_SELF_TYPE_NORMAL FlurryManagedUIRequestManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$FlurryJSONAdRequestBuilder$setYmadVersion$(_LOGOS_SELF_TYPE_NORMAL FlurryJSONAdRequestBuilder* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdDynamicLayoutContext$setAnimationDuration$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, float arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdDynamicLayoutContext$setSettingsCollection$(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$unmute$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$pause(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportVideoCharge(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportVideoStart$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportVideoCharge$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportVideoQuartile25$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportVideoQuartile50$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportVideoQuartile100$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportVideoQuartile75$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportVideoClickQuartile100$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportVideoPaused(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAd$reportVideoReplay(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAd$resetVideoProgressBeaconFlags(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAd$trackViewabilityWithView$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$trackingViewSetActive$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setMutedState$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$modifyOptions$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$resetBeaconFlag$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAd$setIdentifier$(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static bool _logos_method$_ungrouped$YMAdDynamicLayoutContext$isInAppearingSubtree(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return 0;
}



static bool _logos_method$_ungrouped$YMAdDynamicLayoutContext$isInDisappearingSubtree(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return NO;
}



static bool _logos_method$_ungrouped$YMAdDynamicLayoutContext$subtreeAppearing(_LOGOS_SELF_TYPE_NORMAL YMAdDynamicLayoutContext* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return 0;
}



static bool _logos_method$_ungrouped$YMAd$shouldAutoplay(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return 0;
}



static bool _logos_method$_ungrouped$YMAd$hasPhoto(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return NO;
}



static bool _logos_method$_ungrouped$YMAd$hasFlashSale(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return NO;
}



static bool _logos_method$_ungrouped$YMAd$flashSaleIsDisplayable(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return NO;
}



static id _logos_method$_ungrouped$YMAd$photo(_LOGOS_SELF_TYPE_NORMAL YMAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return NULL;
}



static void _logos_method$_ungrouped$_TtC6Tumblr15DisplayIOAdView$willMoveToWindow$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr15DisplayIOAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$_TtC6Tumblr15DisplayIOAdView$ctaClick(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr15DisplayIOAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$updateColors$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$updateTheming$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$layoutSubviews(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$setBloglessAdView$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$setupWithBackfillAd$viewConfiguration$appColorScheme$bloglessAdViewDelegate$postCellResponder$spacerHeight$yahooVideoPlayerProvider$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4, id arg5, float arg6, id arg7) {
  return;
}



static void _logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$updateWithAppColorSource$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr14BackfillAdCell* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$TMBackfillAd$setType$(_LOGOS_SELF_TYPE_NORMAL TMBackfillAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
  return;
}



static void _logos_method$_ungrouped$TMBackfillAd$updateWithDictionary$(_LOGOS_SELF_TYPE_NORMAL TMBackfillAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$TMBackfillAdCreative$updateWithDictionary$(_LOGOS_SELF_TYPE_NORMAL TMBackfillAdCreative* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$TMImageBackfillAdCreative$updateWithDictionary$(_LOGOS_SELF_TYPE_NORMAL TMImageBackfillAdCreative* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$TMVideoBackfillAdCreative$updateWithDictionary$(_LOGOS_SELF_TYPE_NORMAL TMVideoBackfillAdCreative* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$GADOpener$setAdView$(_LOGOS_SELF_TYPE_NORMAL GADOpener* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$GADOpener$setSlot$(_LOGOS_SELF_TYPE_NORMAL GADOpener* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$GADOpener$setReferringURL$(_LOGOS_SELF_TYPE_NORMAL GADOpener* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$GADOpener$setViewController$(_LOGOS_SELF_TYPE_NORMAL GADOpener* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setTileTapToOpenLabel$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setTapToOpenOverlay$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdVideoViewManager$addKeyToUsedList$withAutoLoopEnabled$(_LOGOS_SELF_TYPE_NORMAL YMAdVideoViewManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, bool arg2) {
  return;
}



static void _logos_method$_ungrouped$YMAdVideoViewManager$setActiveVideo$didChangeAdViews$withAutoLoopEnabled$(_LOGOS_SELF_TYPE_NORMAL YMAdVideoViewManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, bool arg2, bool arg3) {
  return;
}



static void _logos_method$_ungrouped$YMAdManager$openAppStoreForAd$parentViewController$complete$(_LOGOS_SELF_TYPE_NORMAL YMAdManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
  return;
}



static void _logos_method$_ungrouped$YMAdManager$openYahooBrowserWithURL$parentViewController$useNativeBrowser$telemetryIdentifier$(_LOGOS_SELF_TYPE_NORMAL YMAdManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, bool arg3, id arg4) {
  return;
}



static void _logos_method$_ungrouped$YMAdVideo$setAutoLoopEnabled$(_LOGOS_SELF_TYPE_NORMAL YMAdVideo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdBrowser$openURL$presentingViewController$useNativeBrowser$telemetryIdentifier$(_LOGOS_SELF_TYPE_NORMAL YMAdBrowser* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, bool arg3, id arg4) {
  return;
}



static void _logos_method$_ungrouped$SMAdView$openBrowserForURL$(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewStateToViewDictionary$eachViewDoAction$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateToViewDictionary* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewStateToViewDictionary$awakeFromNib(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateToViewDictionary* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewStateToViewDictionary$setViews$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateToViewDictionary* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewStateToViewDictionary$eachViewOfType$doAction$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateToViewDictionary* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, Class arg1, id arg2) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewStateToViewDictionary$setViewDictionary$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateToViewDictionary* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdVideoPlayerView$ymadViewExpandButtonTapped(_LOGOS_SELF_TYPE_NORMAL YMAdVideoPlayerView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$showHideSubviewsForAd$viewState$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, int arg2) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setPrimaryAdInfo$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$applyViewOptions$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$applyFontOptions$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$respondToScrollViewEvent$scrollOffsetY$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, float arg1, float arg2) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$updateAdjustableViewForAdContainerWithHeight$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setSizing$viewState$containerWidth$animated$completion$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, int arg2, float arg3, bool arg4, id arg5) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$awakeFromNib(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$applyVisualState$initializing$animated$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1, bool arg2, bool arg3) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$relayout(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setContainerWidth$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, float arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$updateWithAd$delegates$containerWidth$viewState$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, float arg3, int arg4) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$layoutWithAd$viewState$containerWidth$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, int arg2, float arg3) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setAdInfo$viewState$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, int arg2) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$updateVisualState$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setInfoIconImage$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$regsiterViewForVisibility(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$regsiterViewForNoLongerVisible(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$regsiterViewForVideoVisibility(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$regsiterViewForVideoNoLongerVisibile(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$deregisterVideoTrackers(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$play(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$presentClickVideoView(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$showTileCTA(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setTileLightningIconImage$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$hideTileCTA(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$handleExpand(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setExpandIconImage$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$hideExpandIcon(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$showExpandIcon(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setAdPhotoImage$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setAdPhotoWithAnimatedImageView$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setAppIconImage$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setAdThumbnailImage$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setAdThumbnailWithAnimatedImageView$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$mergeViewOptions$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setFontScale$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, float arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$initViewOptionsFromPolicy$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$infoIconTapped$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$adTapped$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$installNowTapped$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$cpiRegionTapped$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$learnMoreTapped$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$adPhotoTapped$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$viewWithRegionTapped$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$adFeedbackPopoverIconTapped$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$delegateTapOn$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$skAppStoreDismiss(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$skAppStoreLoad(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setContainerView$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setViewOptions$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setInstrumentationTag$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setAd$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setViewConfig$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setFontOptions$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setDelegates$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setHeadline$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setSponsorLabel$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setSummary$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setSponsor$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setExpandIcon$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setTileLightningIcon$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setInfoIcon$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setAdPhoto$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setThumbNailImage$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setCpiRegion$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setViewComponents$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setVideoPlayerView$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setCpcRegion$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setAdContentView$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setAdFeedbackView$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setAdFeedbackPopoverIcon$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setCtaButton$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setFlashSaleTimerView$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setMeasuringView$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setHeightConstraint$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setWidthConstraint$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setVideoViewComponent$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$set_containerWidth$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, float arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setTileExpandedTag$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setAnimationTracker$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setTileCollasedTag$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setAlreadyPlayed$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdView$setWasPlaying$(_LOGOS_SELF_TYPE_NORMAL YMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewConfig$setMinContainerWidth$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewConfig$setAdHeightType$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewConfig$setAdWidthType$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewConfig$setAdFeedbackNibName$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewConfig$setAdFeedbackShadow$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewConfig$setInfoIconColoringView$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewConfig$setInfoIconAlpha$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewConfig$setHeightPadding$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewConfig$setFontScalingEnabled$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewConfig$setViewID$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewConfig$setAdjustableViewForAdContainer$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewConfig$setSettingsCollection$(_LOGOS_SELF_TYPE_NORMAL YMAdViewConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewComponents$setAdOnAdViewComponents$(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewComponents$eachComponentOfType$doAction$(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewComponents$eachFontScalableComponentDoAction$(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewComponents$eachThemableComponentDoAction$(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewComponents$eachStatefulComponentDoAction$(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewComponents$setViewComponents$(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewComponents$eachLayoutComponentDoAction$(_LOGOS_SELF_TYPE_NORMAL YMAdViewComponents* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$merge$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$setBackgroundColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$setHeadlineColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$setSummaryColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$setButtonColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$setButtonTextColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$setButtonTextSize$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$setButtonBackgroundColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$setButtonIcon$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$setLinkColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$setSponsorTextColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$setSponsorColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$setStateLabelColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$setAppNameColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$setAppCategoryColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$setExpandCloseTextColor$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$setBackgroundOpacity$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewOptions$setShouldShowAvatar$(_LOGOS_SELF_TYPE_NORMAL YMAdViewOptions* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewResolver$addVideoNibs$(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewResolver$addCardNibs$(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewResolver$addDefaultNibs$(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewResolver$setAdToNibBundleMapping$(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewResolver$setAdToNibBundleCache$(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewResolver$setReuseIdentifierToTemplateKeyMap$(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewResolver$setNibPackageCache$(_LOGOS_SELF_TYPE_NORMAL YMAdViewResolver* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewReuseManager$setPlaceholderAdUnits$(_LOGOS_SELF_TYPE_NORMAL YMAdViewReuseManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewReuseManager$setSizingViews$(_LOGOS_SELF_TYPE_NORMAL YMAdViewReuseManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewReuseManager$set_reuseIdentifiers$(_LOGOS_SELF_TYPE_NORMAL YMAdViewReuseManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewReuseManager$setAdUI$(_LOGOS_SELF_TYPE_NORMAL YMAdViewReuseManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewStateAnimationTracker$setCurrentAnimatingIdentifier$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewStateAnimationTracker$layoutCompletedForTrackerIdentifier$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewReuseManager$setFixedHeights$(_LOGOS_SELF_TYPE_NORMAL YMAdViewReuseManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewStateAnimationTracker$reset(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewStateAnimationTracker$setOwningAdView$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewStateAnimationTracker$set_currentAnimatingIdentifier$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
  return;
}



static void _logos_method$_ungrouped$YMAdViewStateAnimationTracker$setNextAvailableAnimatingIdentifier$(_LOGOS_SELF_TYPE_NORMAL YMAdViewStateAnimationTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
  return;
}



static void _logos_method$_ungrouped$SMAdPanoramaView$buildSponsoredMomentsAdElementsView(_LOGOS_SELF_TYPE_NORMAL SMAdPanoramaView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}

static void _logos_method$_ungrouped$SMAdPanoramaView$buildSponsoredMomentsAdFooterElementsView(_LOGOS_SELF_TYPE_NORMAL SMAdPanoramaView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}

static void _logos_method$_ungrouped$SMAdPanoramaView$setSponsoredMomentsAdFooterElementsView$(_LOGOS_SELF_TYPE_NORMAL SMAdPanoramaView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$SMAdPlayableView$buildSponsoredMomentsAdElementsView(_LOGOS_SELF_TYPE_NORMAL SMAdPlayableView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}



static void _logos_method$_ungrouped$SMAdVideoView$buildSponsoredMomentsAdElementsView(_LOGOS_SELF_TYPE_NORMAL SMAdVideoView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}
static void _logos_method$_ungrouped$SMAdVideoView$buildSponsoredMomentsAdFooterElementsView(_LOGOS_SELF_TYPE_NORMAL SMAdVideoView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}
static void _logos_method$_ungrouped$SMAdVideoView$setSponsoredMomentsAdFooterElementsView$(_LOGOS_SELF_TYPE_NORMAL SMAdVideoView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$SMAdView$buildSponsoredMomentsAdElementsView(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}
static void _logos_method$_ungrouped$SMAdView$buildSponsoredMomentsAdFlashSaleTimerView(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}
static void _logos_method$_ungrouped$SMAdView$buildSponsoredMomentsAdTopLabelViews(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}
static void _logos_method$_ungrouped$SMAdView$setupSponsoredMomentsTopLabel$(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}
static void _logos_method$_ungrouped$SMAdView$setSponsoredMomentsAd$(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}
static void _logos_method$_ungrouped$SMAdView$setSponsoredMomentsAdElementsView$(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}
static void _logos_method$_ungrouped$SMAdView$setSponsoredMomentsAdTopLabelViewRight$(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}
static void _logos_method$_ungrouped$SMAdView$setSponsoredMomentsAdTopLabelViewLeft$(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}
static void _logos_method$_ungrouped$SMAdView$setSponsoredMomentsAdFlashSaleTimerView$(_LOGOS_SELF_TYPE_NORMAL SMAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}



static void _logos_method$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewDidCompleteFade$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr27YahooSponsoredMomentsAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}
static void _logos_method$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewContentsDidChange$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr27YahooSponsoredMomentsAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}
static void _logos_method$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewDidFinishLoading$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr27YahooSponsoredMomentsAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}
static void _logos_method$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewDidFinishLoading$withError$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr27YahooSponsoredMomentsAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
  return;
}



static void _logos_method$_ungrouped$_TtC6Tumblr33YahooSponsoredMomentsViewsManager$dealloc(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr33YahooSponsoredMomentsViewsManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  return;
}
static void _logos_method$_ungrouped$_TtC6Tumblr33YahooSponsoredMomentsViewsManager$contentOffsetCalculator$offsetChanged$inView$(_LOGOS_SELF_TYPE_NORMAL _TtC6Tumblr33YahooSponsoredMomentsViewsManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, struct CGPoint arg2, id arg3) {
  return;
}



static void _logos_method$_ungrouped$SMAdManager$setSponsoredMomentsAdLastShownTimeStamp$(_LOGOS_SELF_TYPE_NORMAL SMAdManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
  return;
}

static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$YMAdDynamicViewAltSettings = objc_getClass("YMAdDynamicViewAltSettings"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdDynamicViewAltSettings, @selector(setPrimaryView:), (IMP)&_logos_method$_ungrouped$YMAdDynamicViewAltSettings$setPrimaryView$, (IMP*)&_logos_orig$_ungrouped$YMAdDynamicViewAltSettings$setPrimaryView$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdDynamicViewAltSettings, @selector(setAlternateViewKey:), (IMP)&_logos_method$_ungrouped$YMAdDynamicViewAltSettings$setAlternateViewKey$, (IMP*)&_logos_orig$_ungrouped$YMAdDynamicViewAltSettings$setAlternateViewKey$);}Class _logos_class$_ungrouped$YMAdDynamicViewSettingsCollection = objc_getClass("YMAdDynamicViewSettingsCollection"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdDynamicViewSettingsCollection, @selector(setLayoutHeight:forView:), (IMP)&_logos_method$_ungrouped$YMAdDynamicViewSettingsCollection$setLayoutHeight$forView$, (IMP*)&_logos_orig$_ungrouped$YMAdDynamicViewSettingsCollection$setLayoutHeight$forView$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdDynamicViewSettingsCollection, @selector(setSearchKey:), (IMP)&_logos_method$_ungrouped$YMAdDynamicViewSettingsCollection$setSearchKey$, (IMP*)&_logos_orig$_ungrouped$YMAdDynamicViewSettingsCollection$setSearchKey$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdDynamicViewSettingsCollection, @selector(setSettingsCollection:), (IMP)&_logos_method$_ungrouped$YMAdDynamicViewSettingsCollection$setSettingsCollection$, (IMP*)&_logos_orig$_ungrouped$YMAdDynamicViewSettingsCollection$setSettingsCollection$);}Class _logos_class$_ungrouped$YMAdDynamicLayoutContext = objc_getClass("YMAdDynamicLayoutContext"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdDynamicLayoutContext, @selector(setIsInSubtreeChangingAppearance:), (IMP)&_logos_method$_ungrouped$YMAdDynamicLayoutContext$setIsInSubtreeChangingAppearance$, (IMP*)&_logos_orig$_ungrouped$YMAdDynamicLayoutContext$setIsInSubtreeChangingAppearance$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdDynamicLayoutContext, @selector(setSubtreeAppearing:), (IMP)&_logos_method$_ungrouped$YMAdDynamicLayoutContext$setSubtreeAppearing$, (IMP*)&_logos_orig$_ungrouped$YMAdDynamicLayoutContext$setSubtreeAppearing$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdDynamicLayoutContext, @selector(setCompletion:), (IMP)&_logos_method$_ungrouped$YMAdDynamicLayoutContext$setCompletion$, (IMP*)&_logos_orig$_ungrouped$YMAdDynamicLayoutContext$setCompletion$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdDynamicLayoutContext, @selector(setAnimationDuration:), (IMP)&_logos_method$_ungrouped$YMAdDynamicLayoutContext$setAnimationDuration$, (IMP*)&_logos_orig$_ungrouped$YMAdDynamicLayoutContext$setAnimationDuration$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdDynamicLayoutContext, @selector(setSettingsCollection:), (IMP)&_logos_method$_ungrouped$YMAdDynamicLayoutContext$setSettingsCollection$, (IMP*)&_logos_orig$_ungrouped$YMAdDynamicLayoutContext$setSettingsCollection$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdDynamicLayoutContext, @selector(isInAppearingSubtree), (IMP)&_logos_method$_ungrouped$YMAdDynamicLayoutContext$isInAppearingSubtree, (IMP*)&_logos_orig$_ungrouped$YMAdDynamicLayoutContext$isInAppearingSubtree);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdDynamicLayoutContext, @selector(isInDisappearingSubtree), (IMP)&_logos_method$_ungrouped$YMAdDynamicLayoutContext$isInDisappearingSubtree, (IMP*)&_logos_orig$_ungrouped$YMAdDynamicLayoutContext$isInDisappearingSubtree);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdDynamicLayoutContext, @selector(subtreeAppearing), (IMP)&_logos_method$_ungrouped$YMAdDynamicLayoutContext$subtreeAppearing, (IMP*)&_logos_orig$_ungrouped$YMAdDynamicLayoutContext$subtreeAppearing);}Class _logos_class$_ungrouped$YMAdReportingOptions = objc_getClass("YMAdReportingOptions"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdReportingOptions, @selector(setPresentingViewController:), (IMP)&_logos_method$_ungrouped$YMAdReportingOptions$setPresentingViewController$, (IMP*)&_logos_orig$_ungrouped$YMAdReportingOptions$setPresentingViewController$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdReportingOptions, @selector(setImpressionPosition:), (IMP)&_logos_method$_ungrouped$YMAdReportingOptions$setImpressionPosition$, (IMP*)&_logos_orig$_ungrouped$YMAdReportingOptions$setImpressionPosition$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdReportingOptions, @selector(setInstrumentationTag:), (IMP)&_logos_method$_ungrouped$YMAdReportingOptions$setInstrumentationTag$, (IMP*)&_logos_orig$_ungrouped$YMAdReportingOptions$setInstrumentationTag$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdReportingOptions, @selector(setDoNotPresentPage:), (IMP)&_logos_method$_ungrouped$YMAdReportingOptions$setDoNotPresentPage$, (IMP*)&_logos_orig$_ungrouped$YMAdReportingOptions$setDoNotPresentPage$);}Class _logos_class$_ungrouped$YMAd = objc_getClass("YMAd"); { MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setViewabilityForPlayback:), (IMP)&_logos_method$_ungrouped$YMAd$setViewabilityForPlayback$, (IMP*)&_logos_orig$_ungrouped$YMAd$setViewabilityForPlayback$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setForcePlayback:), (IMP)&_logos_method$_ungrouped$YMAd$setForcePlayback$, (IMP*)&_logos_orig$_ungrouped$YMAd$setForcePlayback$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(loadVideo), (IMP)&_logos_method$_ungrouped$YMAd$loadVideo, (IMP*)&_logos_orig$_ungrouped$YMAd$loadVideo);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(play), (IMP)&_logos_method$_ungrouped$YMAd$play, (IMP*)&_logos_orig$_ungrouped$YMAd$play);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setVideoPlayerDelegate:), (IMP)&_logos_method$_ungrouped$YMAd$setVideoPlayerDelegate$, (IMP*)&_logos_orig$_ungrouped$YMAd$setVideoPlayerDelegate$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportVideoQuartile100), (IMP)&_logos_method$_ungrouped$YMAd$reportVideoQuartile100, (IMP*)&_logos_orig$_ungrouped$YMAd$reportVideoQuartile100);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportVideoQuartile75), (IMP)&_logos_method$_ungrouped$YMAd$reportVideoQuartile75, (IMP*)&_logos_orig$_ungrouped$YMAd$reportVideoQuartile75);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportVideoQuartile50), (IMP)&_logos_method$_ungrouped$YMAd$reportVideoQuartile50, (IMP*)&_logos_orig$_ungrouped$YMAd$reportVideoQuartile50);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportVideoQuartile25), (IMP)&_logos_method$_ungrouped$YMAd$reportVideoQuartile25, (IMP*)&_logos_orig$_ungrouped$YMAd$reportVideoQuartile25);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportVideoTickedToPosition:withDuration:params:), (IMP)&_logos_method$_ungrouped$YMAd$reportVideoTickedToPosition$withDuration$params$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportVideoTickedToPosition$withDuration$params$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportVideoClickQuartile100), (IMP)&_logos_method$_ungrouped$YMAd$reportVideoClickQuartile100, (IMP*)&_logos_orig$_ungrouped$YMAd$reportVideoClickQuartile100);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportHide:), (IMP)&_logos_method$_ungrouped$YMAd$reportHide$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportHide$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportHideReason:), (IMP)&_logos_method$_ungrouped$YMAd$reportHideReason$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportHideReason$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportVideoBeacon:params:forceBeacon:), (IMP)&_logos_method$_ungrouped$YMAd$reportVideoBeacon$params$forceBeacon$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportVideoBeacon$params$forceBeacon$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(trackViewabilityWithView:withType:), (IMP)&_logos_method$_ungrouped$YMAd$trackViewabilityWithView$withType$, (IMP*)&_logos_orig$_ungrouped$YMAd$trackViewabilityWithView$withType$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(untrackViewability), (IMP)&_logos_method$_ungrouped$YMAd$untrackViewability, (IMP*)&_logos_orig$_ungrouped$YMAd$untrackViewability);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setImpressionPosition:), (IMP)&_logos_method$_ungrouped$YMAd$setImpressionPosition$, (IMP*)&_logos_orig$_ungrouped$YMAd$setImpressionPosition$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportPageLoadTime), (IMP)&_logos_method$_ungrouped$YMAd$reportPageLoadTime, (IMP*)&_logos_orig$_ungrouped$YMAd$reportPageLoadTime);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportAdClose), (IMP)&_logos_method$_ungrouped$YMAd$reportAdClose, (IMP*)&_logos_orig$_ungrouped$YMAd$reportAdClose);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportInfoIconClick), (IMP)&_logos_method$_ungrouped$YMAd$reportInfoIconClick, (IMP*)&_logos_orig$_ungrouped$YMAd$reportInfoIconClick);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportClick), (IMP)&_logos_method$_ungrouped$YMAd$reportClick, (IMP*)&_logos_orig$_ungrouped$YMAd$reportClick);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportClickWithPresentingViewController:), (IMP)&_logos_method$_ungrouped$YMAd$reportClickWithPresentingViewController$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportClickWithPresentingViewController$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setImpressionOptions:), (IMP)&_logos_method$_ungrouped$YMAd$setImpressionOptions$, (IMP*)&_logos_orig$_ungrouped$YMAd$setImpressionOptions$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportClickWithOptions:), (IMP)&_logos_method$_ungrouped$YMAd$reportClickWithOptions$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportClickWithOptions$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportFeedbackClickWithPresentingViewController:), (IMP)&_logos_method$_ungrouped$YMAd$reportFeedbackClickWithPresentingViewController$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportFeedbackClickWithPresentingViewController$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportInfoIconClickWithPresentingViewController:), (IMP)&_logos_method$_ungrouped$YMAd$reportInfoIconClickWithPresentingViewController$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportInfoIconClickWithPresentingViewController$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportInfoIconClickWithOptions:), (IMP)&_logos_method$_ungrouped$YMAd$reportInfoIconClickWithOptions$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportInfoIconClickWithOptions$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportCallToActionClickWithPresentingViewController:), (IMP)&_logos_method$_ungrouped$YMAd$reportCallToActionClickWithPresentingViewController$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportCallToActionClickWithPresentingViewController$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportCallAction:), (IMP)&_logos_method$_ungrouped$YMAd$reportCallAction$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportCallAction$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportWebEndCardImpression:), (IMP)&_logos_method$_ungrouped$YMAd$reportWebEndCardImpression$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportWebEndCardImpression$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportWebEndCardClick:presentingViewController:), (IMP)&_logos_method$_ungrouped$YMAd$reportWebEndCardClick$presentingViewController$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportWebEndCardClick$presentingViewController$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setAdUnit:), (IMP)&_logos_method$_ungrouped$YMAd$setAdUnit$, (IMP*)&_logos_orig$_ungrouped$YMAd$setAdUnit$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setAdID:), (IMP)&_logos_method$_ungrouped$YMAd$setAdID$, (IMP*)&_logos_orig$_ungrouped$YMAd$setAdID$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportSponsoredAdAction:withParams:), (IMP)&_logos_method$_ungrouped$YMAd$reportSponsoredAdAction$withParams$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportSponsoredAdAction$withParams$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setHeadline:), (IMP)&_logos_method$_ungrouped$YMAd$setHeadline$, (IMP*)&_logos_orig$_ungrouped$YMAd$setHeadline$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setIsPlaceholder:), (IMP)&_logos_method$_ungrouped$YMAd$setIsPlaceholder$, (IMP*)&_logos_orig$_ungrouped$YMAd$setIsPlaceholder$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setHeadlineStylized:), (IMP)&_logos_method$_ungrouped$YMAd$setHeadlineStylized$, (IMP*)&_logos_orig$_ungrouped$YMAd$setHeadlineStylized$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setSummary:), (IMP)&_logos_method$_ungrouped$YMAd$setSummary$, (IMP*)&_logos_orig$_ungrouped$YMAd$setSummary$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setSummaryStylized:), (IMP)&_logos_method$_ungrouped$YMAd$setSummaryStylized$, (IMP*)&_logos_orig$_ungrouped$YMAd$setSummaryStylized$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setSponsor:), (IMP)&_logos_method$_ungrouped$YMAd$setSponsor$, (IMP*)&_logos_orig$_ungrouped$YMAd$setSponsor$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setSponsorLabel:), (IMP)&_logos_method$_ungrouped$YMAd$setSponsorLabel$, (IMP*)&_logos_orig$_ungrouped$YMAd$setSponsorLabel$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setShareURL:), (IMP)&_logos_method$_ungrouped$YMAd$setShareURL$, (IMP*)&_logos_orig$_ungrouped$YMAd$setShareURL$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setLanguageCode:), (IMP)&_logos_method$_ungrouped$YMAd$setLanguageCode$, (IMP*)&_logos_orig$_ungrouped$YMAd$setLanguageCode$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setInventorySourceID:), (IMP)&_logos_method$_ungrouped$YMAd$setInventorySourceID$, (IMP*)&_logos_orig$_ungrouped$YMAd$setInventorySourceID$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setSponsoredAd:), (IMP)&_logos_method$_ungrouped$YMAd$setSponsoredAd$, (IMP*)&_logos_orig$_ungrouped$YMAd$setSponsoredAd$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setRenderingPolicy:), (IMP)&_logos_method$_ungrouped$YMAd$setRenderingPolicy$, (IMP*)&_logos_orig$_ungrouped$YMAd$setRenderingPolicy$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setLayoutTypeString:), (IMP)&_logos_method$_ungrouped$YMAd$setLayoutTypeString$, (IMP*)&_logos_orig$_ungrouped$YMAd$setLayoutTypeString$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setLayoutType:), (IMP)&_logos_method$_ungrouped$YMAd$setLayoutType$, (IMP*)&_logos_orig$_ungrouped$YMAd$setLayoutType$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setInteractionType:), (IMP)&_logos_method$_ungrouped$YMAd$setInteractionType$, (IMP*)&_logos_orig$_ungrouped$YMAd$setInteractionType$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setOnScreenMetrics:), (IMP)&_logos_method$_ungrouped$YMAd$setOnScreenMetrics$, (IMP*)&_logos_orig$_ungrouped$YMAd$setOnScreenMetrics$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setIsInMutedState:), (IMP)&_logos_method$_ungrouped$YMAd$setIsInMutedState$, (IMP*)&_logos_orig$_ungrouped$YMAd$setIsInMutedState$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setIsInMutedByUser:), (IMP)&_logos_method$_ungrouped$YMAd$setIsInMutedByUser$, (IMP*)&_logos_orig$_ungrouped$YMAd$setIsInMutedByUser$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setCreativeID:), (IMP)&_logos_method$_ungrouped$YMAd$setCreativeID$, (IMP*)&_logos_orig$_ungrouped$YMAd$setCreativeID$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setTileAssetsJson:), (IMP)&_logos_method$_ungrouped$YMAd$setTileAssetsJson$, (IMP*)&_logos_orig$_ungrouped$YMAd$setTileAssetsJson$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setTileRendererURL:), (IMP)&_logos_method$_ungrouped$YMAd$setTileRendererURL$, (IMP*)&_logos_orig$_ungrouped$YMAd$setTileRendererURL$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setIsTileAd:), (IMP)&_logos_method$_ungrouped$YMAd$setIsTileAd$, (IMP*)&_logos_orig$_ungrouped$YMAd$setIsTileAd$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setIsReengagementAd:), (IMP)&_logos_method$_ungrouped$YMAd$setIsReengagementAd$, (IMP*)&_logos_orig$_ungrouped$YMAd$setIsReengagementAd$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setLandingPageURL:), (IMP)&_logos_method$_ungrouped$YMAd$setLandingPageURL$, (IMP*)&_logos_orig$_ungrouped$YMAd$setLandingPageURL$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setIsFlashSaleAd:), (IMP)&_logos_method$_ungrouped$YMAd$setIsFlashSaleAd$, (IMP*)&_logos_orig$_ungrouped$YMAd$setIsFlashSaleAd$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setFlashSaleExpiration:), (IMP)&_logos_method$_ungrouped$YMAd$setFlashSaleExpiration$, (IMP*)&_logos_orig$_ungrouped$YMAd$setFlashSaleExpiration$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setVideoURL:), (IMP)&_logos_method$_ungrouped$YMAd$setVideoURL$, (IMP*)&_logos_orig$_ungrouped$YMAd$setVideoURL$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setEndCardWebURL:), (IMP)&_logos_method$_ungrouped$YMAd$setEndCardWebURL$, (IMP*)&_logos_orig$_ungrouped$YMAd$setEndCardWebURL$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setAssetIndex:), (IMP)&_logos_method$_ungrouped$YMAd$setAssetIndex$, (IMP*)&_logos_orig$_ungrouped$YMAd$setAssetIndex$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setAssetId:), (IMP)&_logos_method$_ungrouped$YMAd$setAssetId$, (IMP*)&_logos_orig$_ungrouped$YMAd$setAssetId$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setExternalBeaconKeyValues:), (IMP)&_logos_method$_ungrouped$YMAd$setExternalBeaconKeyValues$, (IMP*)&_logos_orig$_ungrouped$YMAd$setExternalBeaconKeyValues$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setPhoto:), (IMP)&_logos_method$_ungrouped$YMAd$setPhoto$, (IMP*)&_logos_orig$_ungrouped$YMAd$setPhoto$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setClickURLString:), (IMP)&_logos_method$_ungrouped$YMAd$setClickURLString$, (IMP*)&_logos_orig$_ungrouped$YMAd$setClickURLString$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setRawJSON:), (IMP)&_logos_method$_ungrouped$YMAd$setRawJSON$, (IMP*)&_logos_orig$_ungrouped$YMAd$setRawJSON$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setImpressionURLFormat:), (IMP)&_logos_method$_ungrouped$YMAd$setImpressionURLFormat$, (IMP*)&_logos_orig$_ungrouped$YMAd$setImpressionURLFormat$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setClickURLFormat:), (IMP)&_logos_method$_ungrouped$YMAd$setClickURLFormat$, (IMP*)&_logos_orig$_ungrouped$YMAd$setClickURLFormat$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setInfoIconDestinationURL:), (IMP)&_logos_method$_ungrouped$YMAd$setInfoIconDestinationURL$, (IMP*)&_logos_orig$_ungrouped$YMAd$setInfoIconDestinationURL$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setAdManager:), (IMP)&_logos_method$_ungrouped$YMAd$setAdManager$, (IMP*)&_logos_orig$_ungrouped$YMAd$setAdManager$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setForceNativeBrowser:), (IMP)&_logos_method$_ungrouped$YMAd$setForceNativeBrowser$, (IMP*)&_logos_orig$_ungrouped$YMAd$setForceNativeBrowser$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setTimeOfCreation:), (IMP)&_logos_method$_ungrouped$YMAd$setTimeOfCreation$, (IMP*)&_logos_orig$_ungrouped$YMAd$setTimeOfCreation$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setViewabilityPercentForPlayback:), (IMP)&_logos_method$_ungrouped$YMAd$setViewabilityPercentForPlayback$, (IMP*)&_logos_orig$_ungrouped$YMAd$setViewabilityPercentForPlayback$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setForceFlag:), (IMP)&_logos_method$_ungrouped$YMAd$setForceFlag$, (IMP*)&_logos_orig$_ungrouped$YMAd$setForceFlag$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setLoadVideoFlag:), (IMP)&_logos_method$_ungrouped$YMAd$setLoadVideoFlag$, (IMP*)&_logos_orig$_ungrouped$YMAd$setLoadVideoFlag$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setVideoPlayerStatusDelegate:), (IMP)&_logos_method$_ungrouped$YMAd$setVideoPlayerStatusDelegate$, (IMP*)&_logos_orig$_ungrouped$YMAd$setVideoPlayerStatusDelegate$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setViewToTrack:), (IMP)&_logos_method$_ungrouped$YMAd$setViewToTrack$, (IMP*)&_logos_orig$_ungrouped$YMAd$setViewToTrack$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setVideoViewToTrack:), (IMP)&_logos_method$_ungrouped$YMAd$setVideoViewToTrack$, (IMP*)&_logos_orig$_ungrouped$YMAd$setVideoViewToTrack$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setVideoPlayTag:), (IMP)&_logos_method$_ungrouped$YMAd$setVideoPlayTag$, (IMP*)&_logos_orig$_ungrouped$YMAd$setVideoPlayTag$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setVideoPauseTag:), (IMP)&_logos_method$_ungrouped$YMAd$setVideoPauseTag$, (IMP*)&_logos_orig$_ungrouped$YMAd$setVideoPauseTag$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setTrackerIsActive:), (IMP)&_logos_method$_ungrouped$YMAd$setTrackerIsActive$, (IMP*)&_logos_orig$_ungrouped$YMAd$setTrackerIsActive$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setState:), (IMP)&_logos_method$_ungrouped$YMAd$setState$, (IMP*)&_logos_orig$_ungrouped$YMAd$setState$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setVideo:), (IMP)&_logos_method$_ungrouped$YMAd$setVideo$, (IMP*)&_logos_orig$_ungrouped$YMAd$setVideo$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setApp:), (IMP)&_logos_method$_ungrouped$YMAd$setApp$, (IMP*)&_logos_orig$_ungrouped$YMAd$setApp$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setFeedback:), (IMP)&_logos_method$_ungrouped$YMAd$setFeedback$, (IMP*)&_logos_orig$_ungrouped$YMAd$setFeedback$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setCallToAction:), (IMP)&_logos_method$_ungrouped$YMAd$setCallToAction$, (IMP*)&_logos_orig$_ungrouped$YMAd$setCallToAction$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setFlurryAdReporting:), (IMP)&_logos_method$_ungrouped$YMAd$setFlurryAdReporting$, (IMP*)&_logos_orig$_ungrouped$YMAd$setFlurryAdReporting$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setVideoPlayerControlsDelegate:), (IMP)&_logos_method$_ungrouped$YMAd$setVideoPlayerControlsDelegate$, (IMP*)&_logos_orig$_ungrouped$YMAd$setVideoPlayerControlsDelegate$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(unmute:), (IMP)&_logos_method$_ungrouped$YMAd$unmute$, (IMP*)&_logos_orig$_ungrouped$YMAd$unmute$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(pause), (IMP)&_logos_method$_ungrouped$YMAd$pause, (IMP*)&_logos_orig$_ungrouped$YMAd$pause);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportVideoCharge), (IMP)&_logos_method$_ungrouped$YMAd$reportVideoCharge, (IMP*)&_logos_orig$_ungrouped$YMAd$reportVideoCharge);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportVideoStart:), (IMP)&_logos_method$_ungrouped$YMAd$reportVideoStart$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportVideoStart$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportVideoCharge:), (IMP)&_logos_method$_ungrouped$YMAd$reportVideoCharge$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportVideoCharge$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportVideoQuartile25:), (IMP)&_logos_method$_ungrouped$YMAd$reportVideoQuartile25$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportVideoQuartile25$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportVideoQuartile50:), (IMP)&_logos_method$_ungrouped$YMAd$reportVideoQuartile50$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportVideoQuartile50$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportVideoQuartile100:), (IMP)&_logos_method$_ungrouped$YMAd$reportVideoQuartile100$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportVideoQuartile100$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportVideoQuartile75:), (IMP)&_logos_method$_ungrouped$YMAd$reportVideoQuartile75$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportVideoQuartile75$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportVideoClickQuartile100:), (IMP)&_logos_method$_ungrouped$YMAd$reportVideoClickQuartile100$, (IMP*)&_logos_orig$_ungrouped$YMAd$reportVideoClickQuartile100$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportVideoPaused), (IMP)&_logos_method$_ungrouped$YMAd$reportVideoPaused, (IMP*)&_logos_orig$_ungrouped$YMAd$reportVideoPaused);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(reportVideoReplay), (IMP)&_logos_method$_ungrouped$YMAd$reportVideoReplay, (IMP*)&_logos_orig$_ungrouped$YMAd$reportVideoReplay);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(resetVideoProgressBeaconFlags), (IMP)&_logos_method$_ungrouped$YMAd$resetVideoProgressBeaconFlags, (IMP*)&_logos_orig$_ungrouped$YMAd$resetVideoProgressBeaconFlags);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(trackViewabilityWithView:), (IMP)&_logos_method$_ungrouped$YMAd$trackViewabilityWithView$, (IMP*)&_logos_orig$_ungrouped$YMAd$trackViewabilityWithView$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(trackingViewSetActive:), (IMP)&_logos_method$_ungrouped$YMAd$trackingViewSetActive$, (IMP*)&_logos_orig$_ungrouped$YMAd$trackingViewSetActive$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setMutedState:), (IMP)&_logos_method$_ungrouped$YMAd$setMutedState$, (IMP*)&_logos_orig$_ungrouped$YMAd$setMutedState$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(modifyOptions:), (IMP)&_logos_method$_ungrouped$YMAd$modifyOptions$, (IMP*)&_logos_orig$_ungrouped$YMAd$modifyOptions$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(resetBeaconFlag:), (IMP)&_logos_method$_ungrouped$YMAd$resetBeaconFlag$, (IMP*)&_logos_orig$_ungrouped$YMAd$resetBeaconFlag$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(setIdentifier:), (IMP)&_logos_method$_ungrouped$YMAd$setIdentifier$, (IMP*)&_logos_orig$_ungrouped$YMAd$setIdentifier$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(shouldAutoplay), (IMP)&_logos_method$_ungrouped$YMAd$shouldAutoplay, (IMP*)&_logos_orig$_ungrouped$YMAd$shouldAutoplay);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(hasPhoto), (IMP)&_logos_method$_ungrouped$YMAd$hasPhoto, (IMP*)&_logos_orig$_ungrouped$YMAd$hasPhoto);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(hasFlashSale), (IMP)&_logos_method$_ungrouped$YMAd$hasFlashSale, (IMP*)&_logos_orig$_ungrouped$YMAd$hasFlashSale);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(flashSaleIsDisplayable), (IMP)&_logos_method$_ungrouped$YMAd$flashSaleIsDisplayable, (IMP*)&_logos_orig$_ungrouped$YMAd$flashSaleIsDisplayable);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAd, @selector(photo), (IMP)&_logos_method$_ungrouped$YMAd$photo, (IMP*)&_logos_orig$_ungrouped$YMAd$photo);}Class _logos_class$_ungrouped$YMAdOnScreenMetrics = objc_getClass("YMAdOnScreenMetrics"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdOnScreenMetrics, @selector(setAreaPercentageThreshold:), (IMP)&_logos_method$_ungrouped$YMAdOnScreenMetrics$setAreaPercentageThreshold$, (IMP*)&_logos_orig$_ungrouped$YMAdOnScreenMetrics$setAreaPercentageThreshold$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdOnScreenMetrics, @selector(setDurationThreshold:), (IMP)&_logos_method$_ungrouped$YMAdOnScreenMetrics$setDurationThreshold$, (IMP*)&_logos_orig$_ungrouped$YMAdOnScreenMetrics$setDurationThreshold$);}Class _logos_class$_ungrouped$YMAdActionButtons = objc_getClass("YMAdActionButtons"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdActionButtons, @selector(applyViewOptions:), (IMP)&_logos_method$_ungrouped$YMAdActionButtons$applyViewOptions$, (IMP*)&_logos_orig$_ungrouped$YMAdActionButtons$applyViewOptions$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdActionButtons, @selector(setAdInfo:), (IMP)&_logos_method$_ungrouped$YMAdActionButtons$setAdInfo$, (IMP*)&_logos_orig$_ungrouped$YMAdActionButtons$setAdInfo$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdActionButtons, @selector(applyFontOptions:), (IMP)&_logos_method$_ungrouped$YMAdActionButtons$applyFontOptions$, (IMP*)&_logos_orig$_ungrouped$YMAdActionButtons$applyFontOptions$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdActionButtons, @selector(setLearnMoreLabels:), (IMP)&_logos_method$_ungrouped$YMAdActionButtons$setLearnMoreLabels$, (IMP*)&_logos_orig$_ungrouped$YMAdActionButtons$setLearnMoreLabels$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdActionButtons, @selector(setInstallButtons:), (IMP)&_logos_method$_ungrouped$YMAdActionButtons$setInstallButtons$, (IMP*)&_logos_orig$_ungrouped$YMAdActionButtons$setInstallButtons$);}Class _logos_class$_ungrouped$YMAdActionProxy = objc_getClass("YMAdActionProxy"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdActionProxy, @selector(setTargetSelector:), (IMP)&_logos_method$_ungrouped$YMAdActionProxy$setTargetSelector$, (IMP*)&_logos_orig$_ungrouped$YMAdActionProxy$setTargetSelector$);}Class _logos_class$_ungrouped$YMAdActionProxyExpandable = objc_getClass("YMAdActionProxyExpandable"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdActionProxyExpandable, @selector(expand), (IMP)&_logos_method$_ungrouped$YMAdActionProxyExpandable$expand, (IMP*)&_logos_orig$_ungrouped$YMAdActionProxyExpandable$expand);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdActionProxyExpandable, @selector(beginExpand), (IMP)&_logos_method$_ungrouped$YMAdActionProxyExpandable$beginExpand, (IMP*)&_logos_orig$_ungrouped$YMAdActionProxyExpandable$beginExpand);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdActionProxyExpandable, @selector(beginCollapse), (IMP)&_logos_method$_ungrouped$YMAdActionProxyExpandable$beginCollapse, (IMP*)&_logos_orig$_ungrouped$YMAdActionProxyExpandable$beginCollapse);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdActionProxyExpandable, @selector(endExpand), (IMP)&_logos_method$_ungrouped$YMAdActionProxyExpandable$endExpand, (IMP*)&_logos_orig$_ungrouped$YMAdActionProxyExpandable$endExpand);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdActionProxyExpandable, @selector(collapse), (IMP)&_logos_method$_ungrouped$YMAdActionProxyExpandable$collapse, (IMP*)&_logos_orig$_ungrouped$YMAdActionProxyExpandable$collapse);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdActionProxyExpandable, @selector(endCollapse), (IMP)&_logos_method$_ungrouped$YMAdActionProxyExpandable$endCollapse, (IMP*)&_logos_orig$_ungrouped$YMAdActionProxyExpandable$endCollapse);}Class _logos_class$_ungrouped$YMAdActionProxyFeedback = objc_getClass("YMAdActionProxyFeedback"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdActionProxyFeedback, @selector(setToHiddenLayout), (IMP)&_logos_method$_ungrouped$YMAdActionProxyFeedback$setToHiddenLayout, (IMP*)&_logos_orig$_ungrouped$YMAdActionProxyFeedback$setToHiddenLayout);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdActionProxyFeedback, @selector(setToThanksLayout), (IMP)&_logos_method$_ungrouped$YMAdActionProxyFeedback$setToThanksLayout, (IMP*)&_logos_orig$_ungrouped$YMAdActionProxyFeedback$setToThanksLayout);}Class _logos_class$_ungrouped$YMAdActionProxyVideo = objc_getClass("YMAdActionProxyVideo"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdActionProxyVideo, @selector(willEnterScreen), (IMP)&_logos_method$_ungrouped$YMAdActionProxyVideo$willEnterScreen, (IMP*)&_logos_orig$_ungrouped$YMAdActionProxyVideo$willEnterScreen);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdActionProxyVideo, @selector(enableAutoplay), (IMP)&_logos_method$_ungrouped$YMAdActionProxyVideo$enableAutoplay, (IMP*)&_logos_orig$_ungrouped$YMAdActionProxyVideo$enableAutoplay);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdActionProxyVideo, @selector(disableAutoplay), (IMP)&_logos_method$_ungrouped$YMAdActionProxyVideo$disableAutoplay, (IMP*)&_logos_orig$_ungrouped$YMAdActionProxyVideo$disableAutoplay);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdActionProxyVideo, @selector(didLeaveScreen), (IMP)&_logos_method$_ungrouped$YMAdActionProxyVideo$didLeaveScreen, (IMP*)&_logos_orig$_ungrouped$YMAdActionProxyVideo$didLeaveScreen);}Class _logos_class$_ungrouped$YMAdYI13NAnalytics = objc_getClass("YMAdYI13NAnalytics"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdYI13NAnalytics, @selector(logAdActionEvent:value:ad:adUnit:requestID:targetURL:options:), (IMP)&_logos_method$_ungrouped$YMAdYI13NAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$options$, (IMP*)&_logos_orig$_ungrouped$YMAdYI13NAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$options$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdYI13NAnalytics, @selector(logAdActionEvent:value:apiKey:ad:adUnit:requestID:targetURL:options:), (IMP)&_logos_method$_ungrouped$YMAdYI13NAnalytics$logAdActionEvent$value$apiKey$ad$adUnit$requestID$targetURL$options$, (IMP*)&_logos_orig$_ungrouped$YMAdYI13NAnalytics$logAdActionEvent$value$apiKey$ad$adUnit$requestID$targetURL$options$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdYI13NAnalytics, @selector(logAdActionEvent:value:ad:adUnit:requestID:targetURL:), (IMP)&_logos_method$_ungrouped$YMAdYI13NAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$, (IMP*)&_logos_orig$_ungrouped$YMAdYI13NAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdYI13NAnalytics, @selector(logErrorEvent:value:ad:adUnit:requestID:targetURL:), (IMP)&_logos_method$_ungrouped$YMAdYI13NAnalytics$logErrorEvent$value$ad$adUnit$requestID$targetURL$, (IMP*)&_logos_orig$_ungrouped$YMAdYI13NAnalytics$logErrorEvent$value$ad$adUnit$requestID$targetURL$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdYI13NAnalytics, @selector(setLogger:), (IMP)&_logos_method$_ungrouped$YMAdYI13NAnalytics$setLogger$, (IMP*)&_logos_orig$_ungrouped$YMAdYI13NAnalytics$setLogger$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdYI13NAnalytics, @selector(setFlurryAnalytics:), (IMP)&_logos_method$_ungrouped$YMAdYI13NAnalytics$setFlurryAnalytics$, (IMP*)&_logos_orig$_ungrouped$YMAdYI13NAnalytics$setFlurryAnalytics$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdYI13NAnalytics, @selector(setApiKey:), (IMP)&_logos_method$_ungrouped$YMAdYI13NAnalytics$setApiKey$, (IMP*)&_logos_orig$_ungrouped$YMAdYI13NAnalytics$setApiKey$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdYI13NAnalytics, @selector(setSnoopyAnalytics:), (IMP)&_logos_method$_ungrouped$YMAdYI13NAnalytics$setSnoopyAnalytics$, (IMP*)&_logos_orig$_ungrouped$YMAdYI13NAnalytics$setSnoopyAnalytics$);}Class _logos_class$_ungrouped$YMAdNullAnalytics = objc_getClass("YMAdNullAnalytics"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdNullAnalytics, @selector(logAdActionEvent:value:ad:adUnit:requestID:targetURL:), (IMP)&_logos_method$_ungrouped$YMAdNullAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$, (IMP*)&_logos_orig$_ungrouped$YMAdNullAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdNullAnalytics, @selector(logAdActionEvent:value:ad:adUnit:requestID:targetURL:options:), (IMP)&_logos_method$_ungrouped$YMAdNullAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$options$, (IMP*)&_logos_orig$_ungrouped$YMAdNullAnalytics$logAdActionEvent$value$ad$adUnit$requestID$targetURL$options$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdNullAnalytics, @selector(logErrorEvent:value:ad:adUnit:requestID:targetURL:), (IMP)&_logos_method$_ungrouped$YMAdNullAnalytics$logErrorEvent$value$ad$adUnit$requestID$targetURL$, (IMP*)&_logos_orig$_ungrouped$YMAdNullAnalytics$logErrorEvent$value$ad$adUnit$requestID$targetURL$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdNullAnalytics, @selector(logAdActionEvent:value:apiKey:ad:adUnit:requestID:targetURL:options:), (IMP)&_logos_method$_ungrouped$YMAdNullAnalytics$logAdActionEvent$value$apiKey$ad$adUnit$requestID$targetURL$options$, (IMP*)&_logos_orig$_ungrouped$YMAdNullAnalytics$logAdActionEvent$value$apiKey$ad$adUnit$requestID$targetURL$options$);}Class _logos_class$_ungrouped$YMAdAppPolicy = objc_getClass("YMAdAppPolicy"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdAppPolicy, @selector(setReuseIDs:), (IMP)&_logos_method$_ungrouped$YMAdAppPolicy$setReuseIDs$, (IMP*)&_logos_orig$_ungrouped$YMAdAppPolicy$setReuseIDs$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdAppPolicy, @selector(setMinTimeBetweenRequests:), (IMP)&_logos_method$_ungrouped$YMAdAppPolicy$setMinTimeBetweenRequests$, (IMP*)&_logos_orig$_ungrouped$YMAdAppPolicy$setMinTimeBetweenRequests$);}Class _logos_class$_ungrouped$YMAdAppPolicyManifest = objc_getClass("YMAdAppPolicyManifest"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdAppPolicyManifest, @selector(setMinTimeBetweenRequests:), (IMP)&_logos_method$_ungrouped$YMAdAppPolicyManifest$setMinTimeBetweenRequests$, (IMP*)&_logos_orig$_ungrouped$YMAdAppPolicyManifest$setMinTimeBetweenRequests$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdAppPolicyManifest, @selector(setReuseIDs:), (IMP)&_logos_method$_ungrouped$YMAdAppPolicyManifest$setReuseIDs$, (IMP*)&_logos_orig$_ungrouped$YMAdAppPolicyManifest$setReuseIDs$);}Class _logos_class$_ungrouped$YMAdAsset = objc_getClass("YMAdAsset"); Class _logos_metaclass$_ungrouped$YMAdAsset = object_getClass(_logos_class$_ungrouped$YMAdAsset); { MSHookMessageEx(_logos_class$_ungrouped$YMAdAsset, @selector(setPreloaded:), (IMP)&_logos_method$_ungrouped$YMAdAsset$setPreloaded$, (IMP*)&_logos_orig$_ungrouped$YMAdAsset$setPreloaded$);}{ MSHookMessageEx(_logos_metaclass$_ungrouped$YMAdAsset, @selector(initialize), (IMP)&_logos_meta_method$_ungrouped$YMAdAsset$initialize, (IMP*)&_logos_meta_orig$_ungrouped$YMAdAsset$initialize);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdAsset, @selector(setCachingSize:), (IMP)&_logos_method$_ungrouped$YMAdAsset$setCachingSize$, (IMP*)&_logos_orig$_ungrouped$YMAdAsset$setCachingSize$);}Class _logos_class$_ungrouped$YMAdNibAsset = objc_getClass("YMAdNibAsset"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdNibAsset, @selector(setNib:), (IMP)&_logos_method$_ungrouped$YMAdNibAsset$setNib$, (IMP*)&_logos_orig$_ungrouped$YMAdNibAsset$setNib$);}Class _logos_class$_ungrouped$YMAdAssetFetcherRequest = objc_getClass("YMAdAssetFetcherRequest"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdAssetFetcherRequest, @selector(addCompletionBlock:), (IMP)&_logos_method$_ungrouped$YMAdAssetFetcherRequest$addCompletionBlock$, (IMP*)&_logos_orig$_ungrouped$YMAdAssetFetcherRequest$addCompletionBlock$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdAssetFetcherRequest, @selector(notifyCompleteAndCleanup:asset:error:), (IMP)&_logos_method$_ungrouped$YMAdAssetFetcherRequest$notifyCompleteAndCleanup$asset$error$, (IMP*)&_logos_orig$_ungrouped$YMAdAssetFetcherRequest$notifyCompleteAndCleanup$asset$error$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdAssetFetcherRequest, @selector(setCompletionBlocks:), (IMP)&_logos_method$_ungrouped$YMAdAssetFetcherRequest$setCompletionBlocks$, (IMP*)&_logos_orig$_ungrouped$YMAdAssetFetcherRequest$setCompletionBlocks$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdAssetFetcherRequest, @selector(setAssetType:), (IMP)&_logos_method$_ungrouped$YMAdAssetFetcherRequest$setAssetType$, (IMP*)&_logos_orig$_ungrouped$YMAdAssetFetcherRequest$setAssetType$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdAssetFetcherRequest, @selector(setSignatureY64:), (IMP)&_logos_method$_ungrouped$YMAdAssetFetcherRequest$setSignatureY64$, (IMP*)&_logos_orig$_ungrouped$YMAdAssetFetcherRequest$setSignatureY64$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdAssetFetcherRequest, @selector(setFetchOperation:), (IMP)&_logos_method$_ungrouped$YMAdAssetFetcherRequest$setFetchOperation$, (IMP*)&_logos_orig$_ungrouped$YMAdAssetFetcherRequest$setFetchOperation$);}Class _logos_class$_ungrouped$YMAdImageAsset = objc_getClass("YMAdImageAsset"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdImageAsset, @selector(setImage:), (IMP)&_logos_method$_ungrouped$YMAdImageAsset$setImage$, (IMP*)&_logos_orig$_ungrouped$YMAdImageAsset$setImage$);}Class _logos_class$_ungrouped$YMAdAssetCache = objc_getClass("YMAdAssetCache"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdAssetCache, @selector(triggerPreLoadFromDisk:ofType:signature:), (IMP)&_logos_method$_ungrouped$YMAdAssetCache$triggerPreLoadFromDisk$ofType$signature$, (IMP*)&_logos_orig$_ungrouped$YMAdAssetCache$triggerPreLoadFromDisk$ofType$signature$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdAssetCache, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$YMAdAssetCache$dealloc, (IMP*)&_logos_orig$_ungrouped$YMAdAssetCache$dealloc);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdAssetCache, @selector(onFetchCompleteForURL:data:error:), (IMP)&_logos_method$_ungrouped$YMAdAssetCache$onFetchCompleteForURL$data$error$, (IMP*)&_logos_orig$_ungrouped$YMAdAssetCache$onFetchCompleteForURL$data$error$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdAssetCache, @selector(instrumentRefetch:assetType:), (IMP)&_logos_method$_ungrouped$YMAdAssetCache$instrumentRefetch$assetType$, (IMP*)&_logos_orig$_ungrouped$YMAdAssetCache$instrumentRefetch$assetType$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdAssetCache, @selector(setAssetFetcher:), (IMP)&_logos_method$_ungrouped$YMAdAssetCache$setAssetFetcher$, (IMP*)&_logos_orig$_ungrouped$YMAdAssetCache$setAssetFetcher$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdAssetCache, @selector(setQueuedFetches:), (IMP)&_logos_method$_ungrouped$YMAdAssetCache$setQueuedFetches$, (IMP*)&_logos_orig$_ungrouped$YMAdAssetCache$setQueuedFetches$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdAssetCache, @selector(setPreloads:), (IMP)&_logos_method$_ungrouped$YMAdAssetCache$setPreloads$, (IMP*)&_logos_orig$_ungrouped$YMAdAssetCache$setPreloads$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdAssetCache, @selector(setMemoryCache:), (IMP)&_logos_method$_ungrouped$YMAdAssetCache$setMemoryCache$, (IMP*)&_logos_orig$_ungrouped$YMAdAssetCache$setMemoryCache$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdAssetCache, @selector(setAssetLog:), (IMP)&_logos_method$_ungrouped$YMAdAssetCache$setAssetLog$, (IMP*)&_logos_orig$_ungrouped$YMAdAssetCache$setAssetLog$);}Class _logos_class$_ungrouped$YMAdAssetedPolicy = objc_getClass("YMAdAssetedPolicy"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdAssetedPolicy, @selector(getImageAsset:completion:), (IMP)&_logos_method$_ungrouped$YMAdAssetedPolicy$getImageAsset$completion$, (IMP*)&_logos_orig$_ungrouped$YMAdAssetedPolicy$getImageAsset$completion$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdAssetedPolicy, @selector(setAssetCache:), (IMP)&_logos_method$_ungrouped$YMAdAssetedPolicy$setAssetCache$, (IMP*)&_logos_orig$_ungrouped$YMAdAssetedPolicy$setAssetCache$);}Class _logos_class$_ungrouped$YMAdReachability = objc_getClass("YMAdReachability"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdReachability, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$YMAdReachability$dealloc, (IMP*)&_logos_orig$_ungrouped$YMAdReachability$dealloc);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdReachability, @selector(stopNotifier), (IMP)&_logos_method$_ungrouped$YMAdReachability$stopNotifier, (IMP*)&_logos_orig$_ungrouped$YMAdReachability$stopNotifier);}Class _logos_class$_ungrouped$FlurryManagedUIRequestManager = objc_getClass("FlurryManagedUIRequestManager"); { MSHookMessageEx(_logos_class$_ungrouped$FlurryManagedUIRequestManager, @selector(setYmadVersion:), (IMP)&_logos_method$_ungrouped$FlurryManagedUIRequestManager$setYmadVersion$, (IMP*)&_logos_orig$_ungrouped$FlurryManagedUIRequestManager$setYmadVersion$);}Class _logos_class$_ungrouped$FlurryJSONAdRequestBuilder = objc_getClass("FlurryJSONAdRequestBuilder"); { MSHookMessageEx(_logos_class$_ungrouped$FlurryJSONAdRequestBuilder, @selector(setYmadVersion:), (IMP)&_logos_method$_ungrouped$FlurryJSONAdRequestBuilder$setYmadVersion$, (IMP*)&_logos_orig$_ungrouped$FlurryJSONAdRequestBuilder$setYmadVersion$);}Class _logos_class$_ungrouped$_TtC6Tumblr15DisplayIOAdView = objc_getClass("_TtC6Tumblr15DisplayIOAdView"); { MSHookMessageEx(_logos_class$_ungrouped$_TtC6Tumblr15DisplayIOAdView, @selector(willMoveToWindow:), (IMP)&_logos_method$_ungrouped$_TtC6Tumblr15DisplayIOAdView$willMoveToWindow$, (IMP*)&_logos_orig$_ungrouped$_TtC6Tumblr15DisplayIOAdView$willMoveToWindow$);}{ MSHookMessageEx(_logos_class$_ungrouped$_TtC6Tumblr15DisplayIOAdView, @selector(ctaClick), (IMP)&_logos_method$_ungrouped$_TtC6Tumblr15DisplayIOAdView$ctaClick, (IMP*)&_logos_orig$_ungrouped$_TtC6Tumblr15DisplayIOAdView$ctaClick);}Class _logos_class$_ungrouped$_TtC6Tumblr14BackfillAdCell = objc_getClass("_TtC6Tumblr14BackfillAdCell"); { MSHookMessageEx(_logos_class$_ungrouped$_TtC6Tumblr14BackfillAdCell, @selector(updateColors:), (IMP)&_logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$updateColors$, (IMP*)&_logos_orig$_ungrouped$_TtC6Tumblr14BackfillAdCell$updateColors$);}{ MSHookMessageEx(_logos_class$_ungrouped$_TtC6Tumblr14BackfillAdCell, @selector(updateTheming:), (IMP)&_logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$updateTheming$, (IMP*)&_logos_orig$_ungrouped$_TtC6Tumblr14BackfillAdCell$updateTheming$);}{ MSHookMessageEx(_logos_class$_ungrouped$_TtC6Tumblr14BackfillAdCell, @selector(layoutSubviews), (IMP)&_logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$layoutSubviews, (IMP*)&_logos_orig$_ungrouped$_TtC6Tumblr14BackfillAdCell$layoutSubviews);}{ MSHookMessageEx(_logos_class$_ungrouped$_TtC6Tumblr14BackfillAdCell, @selector(setBloglessAdView:), (IMP)&_logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$setBloglessAdView$, (IMP*)&_logos_orig$_ungrouped$_TtC6Tumblr14BackfillAdCell$setBloglessAdView$);}{ MSHookMessageEx(_logos_class$_ungrouped$_TtC6Tumblr14BackfillAdCell, @selector(setupWithBackfillAd:viewConfiguration:appColorScheme:bloglessAdViewDelegate:postCellResponder:spacerHeight:yahooVideoPlayerProvider:), (IMP)&_logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$setupWithBackfillAd$viewConfiguration$appColorScheme$bloglessAdViewDelegate$postCellResponder$spacerHeight$yahooVideoPlayerProvider$, (IMP*)&_logos_orig$_ungrouped$_TtC6Tumblr14BackfillAdCell$setupWithBackfillAd$viewConfiguration$appColorScheme$bloglessAdViewDelegate$postCellResponder$spacerHeight$yahooVideoPlayerProvider$);}{ MSHookMessageEx(_logos_class$_ungrouped$_TtC6Tumblr14BackfillAdCell, @selector(updateWithAppColorSource:), (IMP)&_logos_method$_ungrouped$_TtC6Tumblr14BackfillAdCell$updateWithAppColorSource$, (IMP*)&_logos_orig$_ungrouped$_TtC6Tumblr14BackfillAdCell$updateWithAppColorSource$);}Class _logos_class$_ungrouped$TMBackfillAd = objc_getClass("TMBackfillAd"); { MSHookMessageEx(_logos_class$_ungrouped$TMBackfillAd, @selector(setType:), (IMP)&_logos_method$_ungrouped$TMBackfillAd$setType$, (IMP*)&_logos_orig$_ungrouped$TMBackfillAd$setType$);}{ MSHookMessageEx(_logos_class$_ungrouped$TMBackfillAd, @selector(updateWithDictionary:), (IMP)&_logos_method$_ungrouped$TMBackfillAd$updateWithDictionary$, (IMP*)&_logos_orig$_ungrouped$TMBackfillAd$updateWithDictionary$);}Class _logos_class$_ungrouped$TMBackfillAdCreative = objc_getClass("TMBackfillAdCreative"); { MSHookMessageEx(_logos_class$_ungrouped$TMBackfillAdCreative, @selector(updateWithDictionary:), (IMP)&_logos_method$_ungrouped$TMBackfillAdCreative$updateWithDictionary$, (IMP*)&_logos_orig$_ungrouped$TMBackfillAdCreative$updateWithDictionary$);}Class _logos_class$_ungrouped$TMImageBackfillAdCreative = objc_getClass("TMImageBackfillAdCreative"); { MSHookMessageEx(_logos_class$_ungrouped$TMImageBackfillAdCreative, @selector(updateWithDictionary:), (IMP)&_logos_method$_ungrouped$TMImageBackfillAdCreative$updateWithDictionary$, (IMP*)&_logos_orig$_ungrouped$TMImageBackfillAdCreative$updateWithDictionary$);}Class _logos_class$_ungrouped$TMVideoBackfillAdCreative = objc_getClass("TMVideoBackfillAdCreative"); { MSHookMessageEx(_logos_class$_ungrouped$TMVideoBackfillAdCreative, @selector(updateWithDictionary:), (IMP)&_logos_method$_ungrouped$TMVideoBackfillAdCreative$updateWithDictionary$, (IMP*)&_logos_orig$_ungrouped$TMVideoBackfillAdCreative$updateWithDictionary$);}Class _logos_class$_ungrouped$GADOpener = objc_getClass("GADOpener"); { MSHookMessageEx(_logos_class$_ungrouped$GADOpener, @selector(setAdView:), (IMP)&_logos_method$_ungrouped$GADOpener$setAdView$, (IMP*)&_logos_orig$_ungrouped$GADOpener$setAdView$);}{ MSHookMessageEx(_logos_class$_ungrouped$GADOpener, @selector(setSlot:), (IMP)&_logos_method$_ungrouped$GADOpener$setSlot$, (IMP*)&_logos_orig$_ungrouped$GADOpener$setSlot$);}{ MSHookMessageEx(_logos_class$_ungrouped$GADOpener, @selector(setReferringURL:), (IMP)&_logos_method$_ungrouped$GADOpener$setReferringURL$, (IMP*)&_logos_orig$_ungrouped$GADOpener$setReferringURL$);}{ MSHookMessageEx(_logos_class$_ungrouped$GADOpener, @selector(setViewController:), (IMP)&_logos_method$_ungrouped$GADOpener$setViewController$, (IMP*)&_logos_orig$_ungrouped$GADOpener$setViewController$);}Class _logos_class$_ungrouped$YMAdView = objc_getClass("YMAdView"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setTileTapToOpenLabel:), (IMP)&_logos_method$_ungrouped$YMAdView$setTileTapToOpenLabel$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setTileTapToOpenLabel$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setTapToOpenOverlay:), (IMP)&_logos_method$_ungrouped$YMAdView$setTapToOpenOverlay$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setTapToOpenOverlay$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(showHideSubviewsForAd:viewState:), (IMP)&_logos_method$_ungrouped$YMAdView$showHideSubviewsForAd$viewState$, (IMP*)&_logos_orig$_ungrouped$YMAdView$showHideSubviewsForAd$viewState$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setPrimaryAdInfo:), (IMP)&_logos_method$_ungrouped$YMAdView$setPrimaryAdInfo$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setPrimaryAdInfo$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(applyViewOptions:), (IMP)&_logos_method$_ungrouped$YMAdView$applyViewOptions$, (IMP*)&_logos_orig$_ungrouped$YMAdView$applyViewOptions$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(applyFontOptions:), (IMP)&_logos_method$_ungrouped$YMAdView$applyFontOptions$, (IMP*)&_logos_orig$_ungrouped$YMAdView$applyFontOptions$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(respondToScrollViewEvent:scrollOffsetY:), (IMP)&_logos_method$_ungrouped$YMAdView$respondToScrollViewEvent$scrollOffsetY$, (IMP*)&_logos_orig$_ungrouped$YMAdView$respondToScrollViewEvent$scrollOffsetY$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(updateAdjustableViewForAdContainerWithHeight:), (IMP)&_logos_method$_ungrouped$YMAdView$updateAdjustableViewForAdContainerWithHeight$, (IMP*)&_logos_orig$_ungrouped$YMAdView$updateAdjustableViewForAdContainerWithHeight$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setSizing:viewState:containerWidth:animated:completion:), (IMP)&_logos_method$_ungrouped$YMAdView$setSizing$viewState$containerWidth$animated$completion$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setSizing$viewState$containerWidth$animated$completion$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(awakeFromNib), (IMP)&_logos_method$_ungrouped$YMAdView$awakeFromNib, (IMP*)&_logos_orig$_ungrouped$YMAdView$awakeFromNib);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(applyVisualState:initializing:animated:), (IMP)&_logos_method$_ungrouped$YMAdView$applyVisualState$initializing$animated$, (IMP*)&_logos_orig$_ungrouped$YMAdView$applyVisualState$initializing$animated$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(relayout), (IMP)&_logos_method$_ungrouped$YMAdView$relayout, (IMP*)&_logos_orig$_ungrouped$YMAdView$relayout);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setContainerWidth:), (IMP)&_logos_method$_ungrouped$YMAdView$setContainerWidth$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setContainerWidth$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(updateWithAd:delegates:containerWidth:viewState:), (IMP)&_logos_method$_ungrouped$YMAdView$updateWithAd$delegates$containerWidth$viewState$, (IMP*)&_logos_orig$_ungrouped$YMAdView$updateWithAd$delegates$containerWidth$viewState$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(layoutWithAd:viewState:containerWidth:), (IMP)&_logos_method$_ungrouped$YMAdView$layoutWithAd$viewState$containerWidth$, (IMP*)&_logos_orig$_ungrouped$YMAdView$layoutWithAd$viewState$containerWidth$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setAdInfo:viewState:), (IMP)&_logos_method$_ungrouped$YMAdView$setAdInfo$viewState$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setAdInfo$viewState$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(updateVisualState:), (IMP)&_logos_method$_ungrouped$YMAdView$updateVisualState$, (IMP*)&_logos_orig$_ungrouped$YMAdView$updateVisualState$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setInfoIconImage:), (IMP)&_logos_method$_ungrouped$YMAdView$setInfoIconImage$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setInfoIconImage$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(regsiterViewForVisibility), (IMP)&_logos_method$_ungrouped$YMAdView$regsiterViewForVisibility, (IMP*)&_logos_orig$_ungrouped$YMAdView$regsiterViewForVisibility);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(regsiterViewForNoLongerVisible), (IMP)&_logos_method$_ungrouped$YMAdView$regsiterViewForNoLongerVisible, (IMP*)&_logos_orig$_ungrouped$YMAdView$regsiterViewForNoLongerVisible);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(regsiterViewForVideoVisibility), (IMP)&_logos_method$_ungrouped$YMAdView$regsiterViewForVideoVisibility, (IMP*)&_logos_orig$_ungrouped$YMAdView$regsiterViewForVideoVisibility);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(regsiterViewForVideoNoLongerVisibile), (IMP)&_logos_method$_ungrouped$YMAdView$regsiterViewForVideoNoLongerVisibile, (IMP*)&_logos_orig$_ungrouped$YMAdView$regsiterViewForVideoNoLongerVisibile);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(deregisterVideoTrackers), (IMP)&_logos_method$_ungrouped$YMAdView$deregisterVideoTrackers, (IMP*)&_logos_orig$_ungrouped$YMAdView$deregisterVideoTrackers);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(play), (IMP)&_logos_method$_ungrouped$YMAdView$play, (IMP*)&_logos_orig$_ungrouped$YMAdView$play);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(presentClickVideoView), (IMP)&_logos_method$_ungrouped$YMAdView$presentClickVideoView, (IMP*)&_logos_orig$_ungrouped$YMAdView$presentClickVideoView);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(showTileCTA), (IMP)&_logos_method$_ungrouped$YMAdView$showTileCTA, (IMP*)&_logos_orig$_ungrouped$YMAdView$showTileCTA);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setTileLightningIconImage:), (IMP)&_logos_method$_ungrouped$YMAdView$setTileLightningIconImage$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setTileLightningIconImage$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(hideTileCTA), (IMP)&_logos_method$_ungrouped$YMAdView$hideTileCTA, (IMP*)&_logos_orig$_ungrouped$YMAdView$hideTileCTA);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(handleExpand), (IMP)&_logos_method$_ungrouped$YMAdView$handleExpand, (IMP*)&_logos_orig$_ungrouped$YMAdView$handleExpand);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setExpandIconImage:), (IMP)&_logos_method$_ungrouped$YMAdView$setExpandIconImage$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setExpandIconImage$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(hideExpandIcon), (IMP)&_logos_method$_ungrouped$YMAdView$hideExpandIcon, (IMP*)&_logos_orig$_ungrouped$YMAdView$hideExpandIcon);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(showExpandIcon), (IMP)&_logos_method$_ungrouped$YMAdView$showExpandIcon, (IMP*)&_logos_orig$_ungrouped$YMAdView$showExpandIcon);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setAdPhotoImage:), (IMP)&_logos_method$_ungrouped$YMAdView$setAdPhotoImage$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setAdPhotoImage$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setAdPhotoWithAnimatedImageView:), (IMP)&_logos_method$_ungrouped$YMAdView$setAdPhotoWithAnimatedImageView$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setAdPhotoWithAnimatedImageView$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setAppIconImage:), (IMP)&_logos_method$_ungrouped$YMAdView$setAppIconImage$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setAppIconImage$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setAdThumbnailImage:), (IMP)&_logos_method$_ungrouped$YMAdView$setAdThumbnailImage$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setAdThumbnailImage$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setAdThumbnailWithAnimatedImageView:), (IMP)&_logos_method$_ungrouped$YMAdView$setAdThumbnailWithAnimatedImageView$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setAdThumbnailWithAnimatedImageView$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(mergeViewOptions:), (IMP)&_logos_method$_ungrouped$YMAdView$mergeViewOptions$, (IMP*)&_logos_orig$_ungrouped$YMAdView$mergeViewOptions$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setFontScale:), (IMP)&_logos_method$_ungrouped$YMAdView$setFontScale$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setFontScale$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(initViewOptionsFromPolicy:), (IMP)&_logos_method$_ungrouped$YMAdView$initViewOptionsFromPolicy$, (IMP*)&_logos_orig$_ungrouped$YMAdView$initViewOptionsFromPolicy$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(infoIconTapped:), (IMP)&_logos_method$_ungrouped$YMAdView$infoIconTapped$, (IMP*)&_logos_orig$_ungrouped$YMAdView$infoIconTapped$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(adTapped:), (IMP)&_logos_method$_ungrouped$YMAdView$adTapped$, (IMP*)&_logos_orig$_ungrouped$YMAdView$adTapped$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(installNowTapped:), (IMP)&_logos_method$_ungrouped$YMAdView$installNowTapped$, (IMP*)&_logos_orig$_ungrouped$YMAdView$installNowTapped$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(cpiRegionTapped:), (IMP)&_logos_method$_ungrouped$YMAdView$cpiRegionTapped$, (IMP*)&_logos_orig$_ungrouped$YMAdView$cpiRegionTapped$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(learnMoreTapped:), (IMP)&_logos_method$_ungrouped$YMAdView$learnMoreTapped$, (IMP*)&_logos_orig$_ungrouped$YMAdView$learnMoreTapped$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(adPhotoTapped:), (IMP)&_logos_method$_ungrouped$YMAdView$adPhotoTapped$, (IMP*)&_logos_orig$_ungrouped$YMAdView$adPhotoTapped$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(viewWithRegionTapped:), (IMP)&_logos_method$_ungrouped$YMAdView$viewWithRegionTapped$, (IMP*)&_logos_orig$_ungrouped$YMAdView$viewWithRegionTapped$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(adFeedbackPopoverIconTapped:), (IMP)&_logos_method$_ungrouped$YMAdView$adFeedbackPopoverIconTapped$, (IMP*)&_logos_orig$_ungrouped$YMAdView$adFeedbackPopoverIconTapped$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(delegateTapOn:), (IMP)&_logos_method$_ungrouped$YMAdView$delegateTapOn$, (IMP*)&_logos_orig$_ungrouped$YMAdView$delegateTapOn$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(skAppStoreDismiss), (IMP)&_logos_method$_ungrouped$YMAdView$skAppStoreDismiss, (IMP*)&_logos_orig$_ungrouped$YMAdView$skAppStoreDismiss);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(skAppStoreLoad), (IMP)&_logos_method$_ungrouped$YMAdView$skAppStoreLoad, (IMP*)&_logos_orig$_ungrouped$YMAdView$skAppStoreLoad);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setContainerView:), (IMP)&_logos_method$_ungrouped$YMAdView$setContainerView$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setContainerView$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setViewOptions:), (IMP)&_logos_method$_ungrouped$YMAdView$setViewOptions$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setViewOptions$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setInstrumentationTag:), (IMP)&_logos_method$_ungrouped$YMAdView$setInstrumentationTag$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setInstrumentationTag$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setAd:), (IMP)&_logos_method$_ungrouped$YMAdView$setAd$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setAd$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setViewConfig:), (IMP)&_logos_method$_ungrouped$YMAdView$setViewConfig$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setViewConfig$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setFontOptions:), (IMP)&_logos_method$_ungrouped$YMAdView$setFontOptions$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setFontOptions$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setDelegates:), (IMP)&_logos_method$_ungrouped$YMAdView$setDelegates$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setDelegates$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setHeadline:), (IMP)&_logos_method$_ungrouped$YMAdView$setHeadline$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setHeadline$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setSponsorLabel:), (IMP)&_logos_method$_ungrouped$YMAdView$setSponsorLabel$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setSponsorLabel$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setSummary:), (IMP)&_logos_method$_ungrouped$YMAdView$setSummary$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setSummary$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setSponsor:), (IMP)&_logos_method$_ungrouped$YMAdView$setSponsor$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setSponsor$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setExpandIcon:), (IMP)&_logos_method$_ungrouped$YMAdView$setExpandIcon$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setExpandIcon$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setTileLightningIcon:), (IMP)&_logos_method$_ungrouped$YMAdView$setTileLightningIcon$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setTileLightningIcon$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setInfoIcon:), (IMP)&_logos_method$_ungrouped$YMAdView$setInfoIcon$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setInfoIcon$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setAdPhoto:), (IMP)&_logos_method$_ungrouped$YMAdView$setAdPhoto$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setAdPhoto$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setThumbNailImage:), (IMP)&_logos_method$_ungrouped$YMAdView$setThumbNailImage$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setThumbNailImage$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setCpiRegion:), (IMP)&_logos_method$_ungrouped$YMAdView$setCpiRegion$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setCpiRegion$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setViewComponents:), (IMP)&_logos_method$_ungrouped$YMAdView$setViewComponents$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setViewComponents$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setVideoPlayerView:), (IMP)&_logos_method$_ungrouped$YMAdView$setVideoPlayerView$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setVideoPlayerView$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setCpcRegion:), (IMP)&_logos_method$_ungrouped$YMAdView$setCpcRegion$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setCpcRegion$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setAdContentView:), (IMP)&_logos_method$_ungrouped$YMAdView$setAdContentView$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setAdContentView$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setAdFeedbackView:), (IMP)&_logos_method$_ungrouped$YMAdView$setAdFeedbackView$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setAdFeedbackView$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setAdFeedbackPopoverIcon:), (IMP)&_logos_method$_ungrouped$YMAdView$setAdFeedbackPopoverIcon$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setAdFeedbackPopoverIcon$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setCtaButton:), (IMP)&_logos_method$_ungrouped$YMAdView$setCtaButton$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setCtaButton$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setFlashSaleTimerView:), (IMP)&_logos_method$_ungrouped$YMAdView$setFlashSaleTimerView$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setFlashSaleTimerView$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setMeasuringView:), (IMP)&_logos_method$_ungrouped$YMAdView$setMeasuringView$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setMeasuringView$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setHeightConstraint:), (IMP)&_logos_method$_ungrouped$YMAdView$setHeightConstraint$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setHeightConstraint$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setWidthConstraint:), (IMP)&_logos_method$_ungrouped$YMAdView$setWidthConstraint$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setWidthConstraint$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setVideoViewComponent:), (IMP)&_logos_method$_ungrouped$YMAdView$setVideoViewComponent$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setVideoViewComponent$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(set_containerWidth:), (IMP)&_logos_method$_ungrouped$YMAdView$set_containerWidth$, (IMP*)&_logos_orig$_ungrouped$YMAdView$set_containerWidth$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setTileExpandedTag:), (IMP)&_logos_method$_ungrouped$YMAdView$setTileExpandedTag$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setTileExpandedTag$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setAnimationTracker:), (IMP)&_logos_method$_ungrouped$YMAdView$setAnimationTracker$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setAnimationTracker$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setTileCollasedTag:), (IMP)&_logos_method$_ungrouped$YMAdView$setTileCollasedTag$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setTileCollasedTag$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setAlreadyPlayed:), (IMP)&_logos_method$_ungrouped$YMAdView$setAlreadyPlayed$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setAlreadyPlayed$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdView, @selector(setWasPlaying:), (IMP)&_logos_method$_ungrouped$YMAdView$setWasPlaying$, (IMP*)&_logos_orig$_ungrouped$YMAdView$setWasPlaying$);}Class _logos_class$_ungrouped$YMAdVideoViewManager = objc_getClass("YMAdVideoViewManager"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdVideoViewManager, @selector(addKeyToUsedList:withAutoLoopEnabled:), (IMP)&_logos_method$_ungrouped$YMAdVideoViewManager$addKeyToUsedList$withAutoLoopEnabled$, (IMP*)&_logos_orig$_ungrouped$YMAdVideoViewManager$addKeyToUsedList$withAutoLoopEnabled$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdVideoViewManager, @selector(setActiveVideo:didChangeAdViews:withAutoLoopEnabled:), (IMP)&_logos_method$_ungrouped$YMAdVideoViewManager$setActiveVideo$didChangeAdViews$withAutoLoopEnabled$, (IMP*)&_logos_orig$_ungrouped$YMAdVideoViewManager$setActiveVideo$didChangeAdViews$withAutoLoopEnabled$);}Class _logos_class$_ungrouped$YMAdManager = objc_getClass("YMAdManager"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdManager, @selector(openAppStoreForAd:parentViewController:complete:), (IMP)&_logos_method$_ungrouped$YMAdManager$openAppStoreForAd$parentViewController$complete$, (IMP*)&_logos_orig$_ungrouped$YMAdManager$openAppStoreForAd$parentViewController$complete$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdManager, @selector(openYahooBrowserWithURL:parentViewController:useNativeBrowser:telemetryIdentifier:), (IMP)&_logos_method$_ungrouped$YMAdManager$openYahooBrowserWithURL$parentViewController$useNativeBrowser$telemetryIdentifier$, (IMP*)&_logos_orig$_ungrouped$YMAdManager$openYahooBrowserWithURL$parentViewController$useNativeBrowser$telemetryIdentifier$);}Class _logos_class$_ungrouped$YMAdVideo = objc_getClass("YMAdVideo"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdVideo, @selector(setAutoLoopEnabled:), (IMP)&_logos_method$_ungrouped$YMAdVideo$setAutoLoopEnabled$, (IMP*)&_logos_orig$_ungrouped$YMAdVideo$setAutoLoopEnabled$);}Class _logos_class$_ungrouped$YMAdBrowser = objc_getClass("YMAdBrowser"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdBrowser, @selector(openURL:presentingViewController:useNativeBrowser:telemetryIdentifier:), (IMP)&_logos_method$_ungrouped$YMAdBrowser$openURL$presentingViewController$useNativeBrowser$telemetryIdentifier$, (IMP*)&_logos_orig$_ungrouped$YMAdBrowser$openURL$presentingViewController$useNativeBrowser$telemetryIdentifier$);}Class _logos_class$_ungrouped$SMAdView = objc_getClass("SMAdView"); { MSHookMessageEx(_logos_class$_ungrouped$SMAdView, @selector(openBrowserForURL:), (IMP)&_logos_method$_ungrouped$SMAdView$openBrowserForURL$, (IMP*)&_logos_orig$_ungrouped$SMAdView$openBrowserForURL$);}{ MSHookMessageEx(_logos_class$_ungrouped$SMAdView, @selector(buildSponsoredMomentsAdElementsView), (IMP)&_logos_method$_ungrouped$SMAdView$buildSponsoredMomentsAdElementsView, (IMP*)&_logos_orig$_ungrouped$SMAdView$buildSponsoredMomentsAdElementsView);}{ MSHookMessageEx(_logos_class$_ungrouped$SMAdView, @selector(buildSponsoredMomentsAdFlashSaleTimerView), (IMP)&_logos_method$_ungrouped$SMAdView$buildSponsoredMomentsAdFlashSaleTimerView, (IMP*)&_logos_orig$_ungrouped$SMAdView$buildSponsoredMomentsAdFlashSaleTimerView);}{ MSHookMessageEx(_logos_class$_ungrouped$SMAdView, @selector(buildSponsoredMomentsAdTopLabelViews), (IMP)&_logos_method$_ungrouped$SMAdView$buildSponsoredMomentsAdTopLabelViews, (IMP*)&_logos_orig$_ungrouped$SMAdView$buildSponsoredMomentsAdTopLabelViews);}{ MSHookMessageEx(_logos_class$_ungrouped$SMAdView, @selector(setupSponsoredMomentsTopLabel:), (IMP)&_logos_method$_ungrouped$SMAdView$setupSponsoredMomentsTopLabel$, (IMP*)&_logos_orig$_ungrouped$SMAdView$setupSponsoredMomentsTopLabel$);}{ MSHookMessageEx(_logos_class$_ungrouped$SMAdView, @selector(setSponsoredMomentsAd:), (IMP)&_logos_method$_ungrouped$SMAdView$setSponsoredMomentsAd$, (IMP*)&_logos_orig$_ungrouped$SMAdView$setSponsoredMomentsAd$);}{ MSHookMessageEx(_logos_class$_ungrouped$SMAdView, @selector(setSponsoredMomentsAdElementsView:), (IMP)&_logos_method$_ungrouped$SMAdView$setSponsoredMomentsAdElementsView$, (IMP*)&_logos_orig$_ungrouped$SMAdView$setSponsoredMomentsAdElementsView$);}{ MSHookMessageEx(_logos_class$_ungrouped$SMAdView, @selector(setSponsoredMomentsAdTopLabelViewRight:), (IMP)&_logos_method$_ungrouped$SMAdView$setSponsoredMomentsAdTopLabelViewRight$, (IMP*)&_logos_orig$_ungrouped$SMAdView$setSponsoredMomentsAdTopLabelViewRight$);}{ MSHookMessageEx(_logos_class$_ungrouped$SMAdView, @selector(setSponsoredMomentsAdTopLabelViewLeft:), (IMP)&_logos_method$_ungrouped$SMAdView$setSponsoredMomentsAdTopLabelViewLeft$, (IMP*)&_logos_orig$_ungrouped$SMAdView$setSponsoredMomentsAdTopLabelViewLeft$);}{ MSHookMessageEx(_logos_class$_ungrouped$SMAdView, @selector(setSponsoredMomentsAdFlashSaleTimerView:), (IMP)&_logos_method$_ungrouped$SMAdView$setSponsoredMomentsAdFlashSaleTimerView$, (IMP*)&_logos_orig$_ungrouped$SMAdView$setSponsoredMomentsAdFlashSaleTimerView$);}Class _logos_class$_ungrouped$YMAdViewStateToViewDictionary = objc_getClass("YMAdViewStateToViewDictionary"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdViewStateToViewDictionary, @selector(eachViewDoAction:), (IMP)&_logos_method$_ungrouped$YMAdViewStateToViewDictionary$eachViewDoAction$, (IMP*)&_logos_orig$_ungrouped$YMAdViewStateToViewDictionary$eachViewDoAction$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewStateToViewDictionary, @selector(awakeFromNib), (IMP)&_logos_method$_ungrouped$YMAdViewStateToViewDictionary$awakeFromNib, (IMP*)&_logos_orig$_ungrouped$YMAdViewStateToViewDictionary$awakeFromNib);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewStateToViewDictionary, @selector(setViews:), (IMP)&_logos_method$_ungrouped$YMAdViewStateToViewDictionary$setViews$, (IMP*)&_logos_orig$_ungrouped$YMAdViewStateToViewDictionary$setViews$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewStateToViewDictionary, @selector(eachViewOfType:doAction:), (IMP)&_logos_method$_ungrouped$YMAdViewStateToViewDictionary$eachViewOfType$doAction$, (IMP*)&_logos_orig$_ungrouped$YMAdViewStateToViewDictionary$eachViewOfType$doAction$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewStateToViewDictionary, @selector(setViewDictionary:), (IMP)&_logos_method$_ungrouped$YMAdViewStateToViewDictionary$setViewDictionary$, (IMP*)&_logos_orig$_ungrouped$YMAdViewStateToViewDictionary$setViewDictionary$);}Class _logos_class$_ungrouped$YMAdVideoPlayerView = objc_getClass("YMAdVideoPlayerView"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdVideoPlayerView, @selector(ymadViewExpandButtonTapped), (IMP)&_logos_method$_ungrouped$YMAdVideoPlayerView$ymadViewExpandButtonTapped, (IMP*)&_logos_orig$_ungrouped$YMAdVideoPlayerView$ymadViewExpandButtonTapped);}Class _logos_class$_ungrouped$YMAdViewConfig = objc_getClass("YMAdViewConfig"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdViewConfig, @selector(setMinContainerWidth:), (IMP)&_logos_method$_ungrouped$YMAdViewConfig$setMinContainerWidth$, (IMP*)&_logos_orig$_ungrouped$YMAdViewConfig$setMinContainerWidth$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewConfig, @selector(setAdHeightType:), (IMP)&_logos_method$_ungrouped$YMAdViewConfig$setAdHeightType$, (IMP*)&_logos_orig$_ungrouped$YMAdViewConfig$setAdHeightType$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewConfig, @selector(setAdWidthType:), (IMP)&_logos_method$_ungrouped$YMAdViewConfig$setAdWidthType$, (IMP*)&_logos_orig$_ungrouped$YMAdViewConfig$setAdWidthType$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewConfig, @selector(setAdFeedbackNibName:), (IMP)&_logos_method$_ungrouped$YMAdViewConfig$setAdFeedbackNibName$, (IMP*)&_logos_orig$_ungrouped$YMAdViewConfig$setAdFeedbackNibName$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewConfig, @selector(setAdFeedbackShadow:), (IMP)&_logos_method$_ungrouped$YMAdViewConfig$setAdFeedbackShadow$, (IMP*)&_logos_orig$_ungrouped$YMAdViewConfig$setAdFeedbackShadow$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewConfig, @selector(setInfoIconColoringView:), (IMP)&_logos_method$_ungrouped$YMAdViewConfig$setInfoIconColoringView$, (IMP*)&_logos_orig$_ungrouped$YMAdViewConfig$setInfoIconColoringView$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewConfig, @selector(setInfoIconAlpha:), (IMP)&_logos_method$_ungrouped$YMAdViewConfig$setInfoIconAlpha$, (IMP*)&_logos_orig$_ungrouped$YMAdViewConfig$setInfoIconAlpha$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewConfig, @selector(setHeightPadding:), (IMP)&_logos_method$_ungrouped$YMAdViewConfig$setHeightPadding$, (IMP*)&_logos_orig$_ungrouped$YMAdViewConfig$setHeightPadding$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewConfig, @selector(setFontScalingEnabled:), (IMP)&_logos_method$_ungrouped$YMAdViewConfig$setFontScalingEnabled$, (IMP*)&_logos_orig$_ungrouped$YMAdViewConfig$setFontScalingEnabled$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewConfig, @selector(setViewID:), (IMP)&_logos_method$_ungrouped$YMAdViewConfig$setViewID$, (IMP*)&_logos_orig$_ungrouped$YMAdViewConfig$setViewID$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewConfig, @selector(setAdjustableViewForAdContainer:), (IMP)&_logos_method$_ungrouped$YMAdViewConfig$setAdjustableViewForAdContainer$, (IMP*)&_logos_orig$_ungrouped$YMAdViewConfig$setAdjustableViewForAdContainer$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewConfig, @selector(setSettingsCollection:), (IMP)&_logos_method$_ungrouped$YMAdViewConfig$setSettingsCollection$, (IMP*)&_logos_orig$_ungrouped$YMAdViewConfig$setSettingsCollection$);}Class _logos_class$_ungrouped$YMAdViewComponents = objc_getClass("YMAdViewComponents"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdViewComponents, @selector(setAdOnAdViewComponents:), (IMP)&_logos_method$_ungrouped$YMAdViewComponents$setAdOnAdViewComponents$, (IMP*)&_logos_orig$_ungrouped$YMAdViewComponents$setAdOnAdViewComponents$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewComponents, @selector(eachComponentOfType:doAction:), (IMP)&_logos_method$_ungrouped$YMAdViewComponents$eachComponentOfType$doAction$, (IMP*)&_logos_orig$_ungrouped$YMAdViewComponents$eachComponentOfType$doAction$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewComponents, @selector(eachFontScalableComponentDoAction:), (IMP)&_logos_method$_ungrouped$YMAdViewComponents$eachFontScalableComponentDoAction$, (IMP*)&_logos_orig$_ungrouped$YMAdViewComponents$eachFontScalableComponentDoAction$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewComponents, @selector(eachThemableComponentDoAction:), (IMP)&_logos_method$_ungrouped$YMAdViewComponents$eachThemableComponentDoAction$, (IMP*)&_logos_orig$_ungrouped$YMAdViewComponents$eachThemableComponentDoAction$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewComponents, @selector(eachStatefulComponentDoAction:), (IMP)&_logos_method$_ungrouped$YMAdViewComponents$eachStatefulComponentDoAction$, (IMP*)&_logos_orig$_ungrouped$YMAdViewComponents$eachStatefulComponentDoAction$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewComponents, @selector(setViewComponents:), (IMP)&_logos_method$_ungrouped$YMAdViewComponents$setViewComponents$, (IMP*)&_logos_orig$_ungrouped$YMAdViewComponents$setViewComponents$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewComponents, @selector(eachLayoutComponentDoAction:), (IMP)&_logos_method$_ungrouped$YMAdViewComponents$eachLayoutComponentDoAction$, (IMP*)&_logos_orig$_ungrouped$YMAdViewComponents$eachLayoutComponentDoAction$);}Class _logos_class$_ungrouped$YMAdViewOptions = objc_getClass("YMAdViewOptions"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(merge:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$merge$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$merge$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(setBackgroundColor:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$setBackgroundColor$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$setBackgroundColor$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(setHeadlineColor:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$setHeadlineColor$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$setHeadlineColor$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(setSummaryColor:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$setSummaryColor$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$setSummaryColor$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(setButtonColor:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$setButtonColor$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$setButtonColor$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(setButtonTextColor:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$setButtonTextColor$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$setButtonTextColor$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(setButtonTextSize:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$setButtonTextSize$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$setButtonTextSize$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(setButtonBackgroundColor:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$setButtonBackgroundColor$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$setButtonBackgroundColor$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(setButtonIcon:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$setButtonIcon$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$setButtonIcon$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(setLinkColor:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$setLinkColor$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$setLinkColor$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(setSponsorTextColor:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$setSponsorTextColor$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$setSponsorTextColor$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(setSponsorColor:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$setSponsorColor$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$setSponsorColor$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(setStateLabelColor:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$setStateLabelColor$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$setStateLabelColor$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(setAppNameColor:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$setAppNameColor$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$setAppNameColor$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(setAppCategoryColor:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$setAppCategoryColor$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$setAppCategoryColor$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(setExpandCloseTextColor:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$setExpandCloseTextColor$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$setExpandCloseTextColor$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(setBackgroundOpacity:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$setBackgroundOpacity$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$setBackgroundOpacity$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewOptions, @selector(setShouldShowAvatar:), (IMP)&_logos_method$_ungrouped$YMAdViewOptions$setShouldShowAvatar$, (IMP*)&_logos_orig$_ungrouped$YMAdViewOptions$setShouldShowAvatar$);}Class _logos_class$_ungrouped$YMAdViewResolver = objc_getClass("YMAdViewResolver"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdViewResolver, @selector(addVideoNibs:), (IMP)&_logos_method$_ungrouped$YMAdViewResolver$addVideoNibs$, (IMP*)&_logos_orig$_ungrouped$YMAdViewResolver$addVideoNibs$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewResolver, @selector(addCardNibs:), (IMP)&_logos_method$_ungrouped$YMAdViewResolver$addCardNibs$, (IMP*)&_logos_orig$_ungrouped$YMAdViewResolver$addCardNibs$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewResolver, @selector(addDefaultNibs:), (IMP)&_logos_method$_ungrouped$YMAdViewResolver$addDefaultNibs$, (IMP*)&_logos_orig$_ungrouped$YMAdViewResolver$addDefaultNibs$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewResolver, @selector(setAdToNibBundleMapping:), (IMP)&_logos_method$_ungrouped$YMAdViewResolver$setAdToNibBundleMapping$, (IMP*)&_logos_orig$_ungrouped$YMAdViewResolver$setAdToNibBundleMapping$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewResolver, @selector(setAdToNibBundleCache:), (IMP)&_logos_method$_ungrouped$YMAdViewResolver$setAdToNibBundleCache$, (IMP*)&_logos_orig$_ungrouped$YMAdViewResolver$setAdToNibBundleCache$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewResolver, @selector(setReuseIdentifierToTemplateKeyMap:), (IMP)&_logos_method$_ungrouped$YMAdViewResolver$setReuseIdentifierToTemplateKeyMap$, (IMP*)&_logos_orig$_ungrouped$YMAdViewResolver$setReuseIdentifierToTemplateKeyMap$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewResolver, @selector(setNibPackageCache:), (IMP)&_logos_method$_ungrouped$YMAdViewResolver$setNibPackageCache$, (IMP*)&_logos_orig$_ungrouped$YMAdViewResolver$setNibPackageCache$);}Class _logos_class$_ungrouped$YMAdViewReuseManager = objc_getClass("YMAdViewReuseManager"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdViewReuseManager, @selector(setPlaceholderAdUnits:), (IMP)&_logos_method$_ungrouped$YMAdViewReuseManager$setPlaceholderAdUnits$, (IMP*)&_logos_orig$_ungrouped$YMAdViewReuseManager$setPlaceholderAdUnits$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewReuseManager, @selector(setSizingViews:), (IMP)&_logos_method$_ungrouped$YMAdViewReuseManager$setSizingViews$, (IMP*)&_logos_orig$_ungrouped$YMAdViewReuseManager$setSizingViews$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewReuseManager, @selector(set_reuseIdentifiers:), (IMP)&_logos_method$_ungrouped$YMAdViewReuseManager$set_reuseIdentifiers$, (IMP*)&_logos_orig$_ungrouped$YMAdViewReuseManager$set_reuseIdentifiers$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewReuseManager, @selector(setAdUI:), (IMP)&_logos_method$_ungrouped$YMAdViewReuseManager$setAdUI$, (IMP*)&_logos_orig$_ungrouped$YMAdViewReuseManager$setAdUI$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewReuseManager, @selector(setFixedHeights:), (IMP)&_logos_method$_ungrouped$YMAdViewReuseManager$setFixedHeights$, (IMP*)&_logos_orig$_ungrouped$YMAdViewReuseManager$setFixedHeights$);}Class _logos_class$_ungrouped$YMAdViewStateAnimationTracker = objc_getClass("YMAdViewStateAnimationTracker"); { MSHookMessageEx(_logos_class$_ungrouped$YMAdViewStateAnimationTracker, @selector(setCurrentAnimatingIdentifier:), (IMP)&_logos_method$_ungrouped$YMAdViewStateAnimationTracker$setCurrentAnimatingIdentifier$, (IMP*)&_logos_orig$_ungrouped$YMAdViewStateAnimationTracker$setCurrentAnimatingIdentifier$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewStateAnimationTracker, @selector(layoutCompletedForTrackerIdentifier:), (IMP)&_logos_method$_ungrouped$YMAdViewStateAnimationTracker$layoutCompletedForTrackerIdentifier$, (IMP*)&_logos_orig$_ungrouped$YMAdViewStateAnimationTracker$layoutCompletedForTrackerIdentifier$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewStateAnimationTracker, @selector(reset), (IMP)&_logos_method$_ungrouped$YMAdViewStateAnimationTracker$reset, (IMP*)&_logos_orig$_ungrouped$YMAdViewStateAnimationTracker$reset);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewStateAnimationTracker, @selector(setOwningAdView:), (IMP)&_logos_method$_ungrouped$YMAdViewStateAnimationTracker$setOwningAdView$, (IMP*)&_logos_orig$_ungrouped$YMAdViewStateAnimationTracker$setOwningAdView$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewStateAnimationTracker, @selector(set_currentAnimatingIdentifier:), (IMP)&_logos_method$_ungrouped$YMAdViewStateAnimationTracker$set_currentAnimatingIdentifier$, (IMP*)&_logos_orig$_ungrouped$YMAdViewStateAnimationTracker$set_currentAnimatingIdentifier$);}{ MSHookMessageEx(_logos_class$_ungrouped$YMAdViewStateAnimationTracker, @selector(setNextAvailableAnimatingIdentifier:), (IMP)&_logos_method$_ungrouped$YMAdViewStateAnimationTracker$setNextAvailableAnimatingIdentifier$, (IMP*)&_logos_orig$_ungrouped$YMAdViewStateAnimationTracker$setNextAvailableAnimatingIdentifier$);}Class _logos_class$_ungrouped$SMAdPanoramaView = objc_getClass("SMAdPanoramaView"); { MSHookMessageEx(_logos_class$_ungrouped$SMAdPanoramaView, @selector(buildSponsoredMomentsAdElementsView), (IMP)&_logos_method$_ungrouped$SMAdPanoramaView$buildSponsoredMomentsAdElementsView, (IMP*)&_logos_orig$_ungrouped$SMAdPanoramaView$buildSponsoredMomentsAdElementsView);}{ MSHookMessageEx(_logos_class$_ungrouped$SMAdPanoramaView, @selector(buildSponsoredMomentsAdFooterElementsView), (IMP)&_logos_method$_ungrouped$SMAdPanoramaView$buildSponsoredMomentsAdFooterElementsView, (IMP*)&_logos_orig$_ungrouped$SMAdPanoramaView$buildSponsoredMomentsAdFooterElementsView);}{ MSHookMessageEx(_logos_class$_ungrouped$SMAdPanoramaView, @selector(setSponsoredMomentsAdFooterElementsView:), (IMP)&_logos_method$_ungrouped$SMAdPanoramaView$setSponsoredMomentsAdFooterElementsView$, (IMP*)&_logos_orig$_ungrouped$SMAdPanoramaView$setSponsoredMomentsAdFooterElementsView$);}Class _logos_class$_ungrouped$SMAdPlayableView = objc_getClass("SMAdPlayableView"); { MSHookMessageEx(_logos_class$_ungrouped$SMAdPlayableView, @selector(buildSponsoredMomentsAdElementsView), (IMP)&_logos_method$_ungrouped$SMAdPlayableView$buildSponsoredMomentsAdElementsView, (IMP*)&_logos_orig$_ungrouped$SMAdPlayableView$buildSponsoredMomentsAdElementsView);}Class _logos_class$_ungrouped$SMAdVideoView = objc_getClass("SMAdVideoView"); { MSHookMessageEx(_logos_class$_ungrouped$SMAdVideoView, @selector(buildSponsoredMomentsAdElementsView), (IMP)&_logos_method$_ungrouped$SMAdVideoView$buildSponsoredMomentsAdElementsView, (IMP*)&_logos_orig$_ungrouped$SMAdVideoView$buildSponsoredMomentsAdElementsView);}{ MSHookMessageEx(_logos_class$_ungrouped$SMAdVideoView, @selector(buildSponsoredMomentsAdFooterElementsView), (IMP)&_logos_method$_ungrouped$SMAdVideoView$buildSponsoredMomentsAdFooterElementsView, (IMP*)&_logos_orig$_ungrouped$SMAdVideoView$buildSponsoredMomentsAdFooterElementsView);}{ MSHookMessageEx(_logos_class$_ungrouped$SMAdVideoView, @selector(setSponsoredMomentsAdFooterElementsView:), (IMP)&_logos_method$_ungrouped$SMAdVideoView$setSponsoredMomentsAdFooterElementsView$, (IMP*)&_logos_orig$_ungrouped$SMAdVideoView$setSponsoredMomentsAdFooterElementsView$);}Class _logos_class$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView = objc_getClass("_TtC6Tumblr27YahooSponsoredMomentsAdView"); { MSHookMessageEx(_logos_class$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView, @selector(imageViewDidCompleteFade:), (IMP)&_logos_method$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewDidCompleteFade$, (IMP*)&_logos_orig$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewDidCompleteFade$);}{ MSHookMessageEx(_logos_class$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView, @selector(imageViewContentsDidChange:), (IMP)&_logos_method$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewContentsDidChange$, (IMP*)&_logos_orig$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewContentsDidChange$);}{ MSHookMessageEx(_logos_class$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView, @selector(imageViewDidFinishLoading:), (IMP)&_logos_method$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewDidFinishLoading$, (IMP*)&_logos_orig$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewDidFinishLoading$);}{ MSHookMessageEx(_logos_class$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView, @selector(imageViewDidFinishLoading:withError:), (IMP)&_logos_method$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewDidFinishLoading$withError$, (IMP*)&_logos_orig$_ungrouped$_TtC6Tumblr27YahooSponsoredMomentsAdView$imageViewDidFinishLoading$withError$);}Class _logos_class$_ungrouped$_TtC6Tumblr33YahooSponsoredMomentsViewsManager = objc_getClass("_TtC6Tumblr33YahooSponsoredMomentsViewsManager"); { MSHookMessageEx(_logos_class$_ungrouped$_TtC6Tumblr33YahooSponsoredMomentsViewsManager, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$_TtC6Tumblr33YahooSponsoredMomentsViewsManager$dealloc, (IMP*)&_logos_orig$_ungrouped$_TtC6Tumblr33YahooSponsoredMomentsViewsManager$dealloc);}{ MSHookMessageEx(_logos_class$_ungrouped$_TtC6Tumblr33YahooSponsoredMomentsViewsManager, @selector(contentOffsetCalculator:offsetChanged:inView:), (IMP)&_logos_method$_ungrouped$_TtC6Tumblr33YahooSponsoredMomentsViewsManager$contentOffsetCalculator$offsetChanged$inView$, (IMP*)&_logos_orig$_ungrouped$_TtC6Tumblr33YahooSponsoredMomentsViewsManager$contentOffsetCalculator$offsetChanged$inView$);}Class _logos_class$_ungrouped$SMAdManager = objc_getClass("SMAdManager"); { MSHookMessageEx(_logos_class$_ungrouped$SMAdManager, @selector(setSponsoredMomentsAdLastShownTimeStamp:), (IMP)&_logos_method$_ungrouped$SMAdManager$setSponsoredMomentsAdLastShownTimeStamp$, (IMP*)&_logos_orig$_ungrouped$SMAdManager$setSponsoredMomentsAdLastShownTimeStamp$);}} }
#line 2276 "Tweak.xm"
