%hook YMAdDynamicViewAltSettings
- (void)setPrimaryView:(id)arg1 {
  return;
}
%end

%hook YMAdDynamicViewAltSettings
- (void)setAlternateViewKey:(id)arg1 {
  return;
}
%end

%hook YMAdDynamicViewSettingsCollection
- (void)setLayoutHeight:(id)arg1 forView:(id)arg2 {
  return;
}
%end

%hook YMAdDynamicViewSettingsCollection
- (void)setSearchKey:(id)arg1 {
  return;
}
%end

%hook YMAdDynamicViewSettingsCollection
- (void)setSettingsCollection:(id)arg1 {
  return;
}
%end

%hook YMAdDynamicLayoutContext
- (void)setIsInSubtreeChangingAppearance:(bool)arg1 {
  return;
}
%end

%hook YMAdDynamicLayoutContext
- (void)setSubtreeAppearing:(bool)arg1 {
  return;
}
%end

%hook YMAdDynamicLayoutContext
- (void)setCompletion:(id)arg1 {
  return;
}
%end

%hook YMAdReportingOptions
- (void)setPresentingViewController:(id)arg1 {
  return;
}
%end

%hook YMAdReportingOptions
- (void)setImpressionPosition:(id)arg1 {
  return;
}
%end

%hook YMAdReportingOptions
- (void)setInstrumentationTag:(id)arg1 {
  return;
}
%end

%hook YMAdReportingOptions
- (void)setDoNotPresentPage:(bool)arg1 {
  return;
}
%end

%hook YMAd
- (void)setViewabilityForPlayback:(float)arg1 {
  return;
}
%end

%hook YMAd
- (void)setForcePlayback:(bool)arg1 {
  return;
}
%end

%hook YMAd
- (void)loadVideo {
  return;
}
%end

%hook YMAd
- (void)play {
  return;
}
%end

%hook YMAd
- (void)setVideoPlayerDelegate:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportVideoQuartile100 {
  return;
}
%end

%hook YMAd
- (void)reportVideoQuartile75 {
  return;
}
%end

%hook YMAd
- (void)reportVideoQuartile50 {
  return;
}
%end

%hook YMAd
- (void)reportVideoQuartile25 {
  return;
}
%end

%hook YMAd
- (void)reportVideoTickedToPosition:(float)arg1 withDuration:(float)arg2 params:(id)arg3 {
  return;
}
%end

%hook YMAd
- (void)reportVideoClickQuartile100 {
  return;
}
%end

%hook YMAd
- (void)reportHide:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportHideReason:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportVideoBeacon:(int)arg1 params:(id)arg2 forceBeacon:(bool)arg3 {
  return;
}
%end

%hook YMAd
- (void)trackViewabilityWithView:(id)arg1 withType:(long long)arg2 {
  return;
}
%end

%hook YMAd
- (void)untrackViewability {
  return;
}
%end

%hook YMAd
- (void)setImpressionPosition:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportPageLoadTime {
  return;
}
%end

%hook YMAd
- (void)reportAdClose {
  return;
}
%end

%hook YMAd
- (void)reportInfoIconClick {
  return;
}
%end

%hook YMAd
- (void)reportClick {
  return;
}
%end

%hook YMAd
- (void)reportClickWithPresentingViewController:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setImpressionOptions:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportClickWithOptions:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportFeedbackClickWithPresentingViewController:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportInfoIconClickWithPresentingViewController:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportInfoIconClickWithOptions:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportCallToActionClickWithPresentingViewController:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportCallAction:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportWebEndCardImpression:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportWebEndCardClick:(id)arg1 presentingViewController:(id)arg2 {
  return;
}
%end

%hook YMAd
- (void)setAdUnit:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setAdID:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportSponsoredAdAction:(long long)arg1 withParams:(id)arg2 {
  return;
}
%end

%hook YMAd
- (void)setHeadline:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setIsPlaceholder:(bool)arg1 {
  return;
}
%end

%hook YMAd
- (void)setHeadlineStylized:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setSummary:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setSummaryStylized:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setSponsor:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setSponsorLabel:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setShareURL:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setLanguageCode:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setInventorySourceID:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setSponsoredAd:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setRenderingPolicy:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setLayoutTypeString:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setLayoutType:(long long)arg1 {
  return;
}
%end

%hook YMAd
- (void)setInteractionType:(long long)arg1 {
  return;
}
%end

%hook YMAd
- (void)setOnScreenMetrics:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setIsInMutedState:(bool)arg1 {
  return;
}
%end

%hook YMAd
- (void)setIsInMutedByUser:(bool)arg1 {
  return;
}
%end

%hook YMAd
- (void)setCreativeID:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setTileAssetsJson:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setTileRendererURL:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setIsTileAd:(bool)arg1 {
  return;
}
%end

%hook YMAd
- (void)setIsReengagementAd:(bool)arg1 {
  return;
}
%end

%hook YMAd
- (void)setLandingPageURL:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setIsFlashSaleAd:(bool)arg1 {
  return;
}
%end

%hook YMAd
- (void)setFlashSaleExpiration:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setVideoURL:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setEndCardWebURL:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setAssetIndex:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setAssetId:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setExternalBeaconKeyValues:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setPhoto:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setClickURLString:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setRawJSON:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setImpressionURLFormat:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setClickURLFormat:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setInfoIconDestinationURL:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setAdManager:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setForceNativeBrowser:(bool)arg1 {
  return;
}
%end

%hook YMAd
- (void)setTimeOfCreation:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setViewabilityPercentForPlayback:(float)arg1 {
  return;
}
%end

%hook YMAd
- (void)setForceFlag:(bool)arg1 {
  return;
}
%end

%hook YMAd
- (void)setLoadVideoFlag:(bool)arg1 {
  return;
}
%end

%hook YMAd
- (void)setVideoPlayerStatusDelegate:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setViewToTrack:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setVideoViewToTrack:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setVideoPlayTag:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setVideoPauseTag:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setTrackerIsActive:(bool)arg1 {
  return;
}
%end

%hook YMAd
- (void)setState:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setVideo:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setApp:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setFeedback:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setCallToAction:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setFlurryAdReporting:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)setVideoPlayerControlsDelegate:(id)arg1 {
  return;
}
%end

%hook YMAdOnScreenMetrics
- (void)setAreaPercentageThreshold:(unsigned long long)arg1 {
  return;
}
%end

%hook YMAdActionButtons
- (void)applyViewOptions:(id)arg1 {
  return;
}
%end

%hook YMAdActionButtons
- (void)setAdInfo:(id)arg1 {
  return;
}
%end

%hook YMAdOnScreenMetrics
- (void)setDurationThreshold:(float)arg1 {
  return;
}
%end

%hook YMAdActionButtons
- (void)applyFontOptions:(id)arg1 {
  return;
}
%end

%hook YMAdActionButtons
- (void)setLearnMoreLabels:(id)arg1 {
  return;
}
%end

%hook YMAdActionProxy
- (void)setTargetSelector:(id)arg1 {
  return;
}
%end

%hook YMAdActionButtons
- (void)setInstallButtons:(id)arg1 {
  return;
}
%end

%hook YMAdActionProxyExpandable
- (void)expand {
  return;
}
%end

%hook YMAdActionProxyExpandable
- (void)beginExpand {
  return;
}
%end

%hook YMAdActionProxyExpandable
- (void)beginCollapse {
  return;
}
%end

%hook YMAdActionProxyExpandable
- (void)endExpand {
  return;
}
%end

%hook YMAdActionProxyExpandable
- (void)collapse {
  return;
}
%end

%hook YMAdActionProxyExpandable
- (void)endCollapse {
  return;
}
%end

%hook YMAdActionProxyFeedback
- (void)setToHiddenLayout {
  return;
}
%end

%hook YMAdActionProxyFeedback
- (void)setToThanksLayout {
  return;
}
%end

%hook YMAdActionProxyVideo
- (void)willEnterScreen {
  return;
}
%end

%hook YMAdActionProxyVideo
- (void)enableAutoplay {
  return;
}
%end

%hook YMAdActionProxyVideo
- (void)disableAutoplay {
  return;
}
%end

%hook YMAdActionProxyVideo
- (void)didLeaveScreen {
  return;
}
%end

%hook YMAdYI13NAnalytics
- (void)logAdActionEvent:(int)arg1 value:(id)arg2 ad:(id)arg3 adUnit:(id)arg4 requestID:(id)arg5 targetURL:(id)arg6 options:(id)arg7 {
  return;
}
%end

%hook YMAdYI13NAnalytics
- (void)logAdActionEvent:(int)arg1 value:(id)arg2 apiKey:(id)arg3 ad:(id)arg4 adUnit:(id)arg5 requestID:(id)arg6 targetURL:(id)arg7 options:(id)arg8 {
  return;
}
%end

%hook YMAdYI13NAnalytics
- (void)logAdActionEvent:(int)arg1 value:(id)arg2 ad:(id)arg3 adUnit:(id)arg4 requestID:(id)arg5 targetURL:(id)arg6 {
  return;
}
%end

%hook YMAdYI13NAnalytics
- (void)logErrorEvent:(int)arg1 value:(id)arg2 ad:(id)arg3 adUnit:(id)arg4 requestID:(id)arg5 targetURL:(id)arg6 {
  return;
}
%end

%hook YMAdYI13NAnalytics
- (void)setLogger:(id)arg1 {
  return;
}
%end

%hook YMAdYI13NAnalytics
- (void)setFlurryAnalytics:(id)arg1 {
  return;
}
%end

%hook YMAdYI13NAnalytics
- (void)setApiKey:(id)arg1 {
  return;
}
%end

%hook YMAdYI13NAnalytics
- (void)setSnoopyAnalytics:(id)arg1 {
  return;
}
%end

%hook YMAdNullAnalytics
- (void)logAdActionEvent:(int)arg1 value:(id)arg2 ad:(id)arg3 adUnit:(id)arg4 requestID:(id)arg5 targetURL:(id)arg6 {
  return;
}
%end

%hook YMAdNullAnalytics
- (void)logAdActionEvent:(int)arg1 value:(id)arg2 ad:(id)arg3 adUnit:(id)arg4 requestID:(id)arg5 targetURL:(id)arg6 options:(id)arg7 {
  return;
}
%end

%hook YMAdNullAnalytics
- (void)logErrorEvent:(int)arg1 value:(id)arg2 ad:(id)arg3 adUnit:(id)arg4 requestID:(id)arg5 targetURL:(id)arg6 {
  return;
}
%end

%hook YMAdNullAnalytics
- (void)logAdActionEvent:(int)arg1 value:(id)arg2 apiKey:(id)arg3 ad:(id)arg4 adUnit:(id)arg5 requestID:(id)arg6 targetURL:(id)arg7 options:(id)arg8 {
  return;
}
%end

%hook YMAdAppPolicy
- (void)setReuseIDs:(id)arg1 {
  return;
}
%end

%hook YMAdAppPolicy
- (void)setMinTimeBetweenRequests:(id)arg1 {
  return;
}
%end

%hook YMAdAppPolicyManifest
- (void)setMinTimeBetweenRequests:(id)arg1 {
  return;
}
%end

%hook YMAdAsset
- (void)setPreloaded:(bool)arg1 {
  return;
}
%end

%hook YMAdAsset
+ (void)initialize {
  return;
}
%end

%hook YMAdNibAsset
- (void)setNib:(id)arg1 {
  return;
}
%end

%hook YMAdAsset
- (void)setCachingSize:(unsigned long long)arg1 {
  return;
}
%end

%hook YMAdAppPolicyManifest
- (void)setReuseIDs:(id)arg1 {
  return;
}
%end

%hook YMAdAssetFetcherRequest
- (void)addCompletionBlock:(id)arg1 {
  return;
}
%end

%hook YMAdAssetFetcherRequest
- (void)notifyCompleteAndCleanup:(id)arg1 asset:(id)arg2 error:(id)arg3 {
  return;
}
%end

%hook YMAdImageAsset
- (void)setImage:(id)arg1 {
  return;
}
%end

%hook YMAdAssetFetcherRequest
- (void)setCompletionBlocks:(id)arg1 {
  return;
}
%end

%hook YMAdAssetFetcherRequest
- (void)setAssetType:(id)arg1 {
  return;
}
%end

%hook YMAdAssetFetcherRequest
- (void)setSignatureY64:(id)arg1 {
  return;
}
%end

%hook YMAdAssetCache
- (void)triggerPreLoadFromDisk:(id)arg1 ofType:(id)arg2 signature:(id)arg3 {
  return;
}
%end

%hook YMAdAssetFetcherRequest
- (void)setFetchOperation:(id)arg1 {
  return;
}
%end

%hook YMAdAssetCache
- (void)dealloc {
  return;
}
%end

%hook YMAdAssetCache
- (void)onFetchCompleteForURL:(id)arg1 data:(id)arg2 error:(id)arg3 {
  return;
}
%end

%hook YMAdAssetCache
- (void)instrumentRefetch:(id)arg1 assetType:(id)arg2 {
  return;
}
%end

%hook YMAdAssetCache
- (void)setAssetFetcher:(id)arg1 {
  return;
}
%end

%hook YMAdAssetCache
- (void)setQueuedFetches:(id)arg1 {
  return;
}
%end

%hook YMAdAssetCache
- (void)setPreloads:(id)arg1 {
  return;
}
%end

%hook YMAdAssetCache
- (void)setMemoryCache:(id)arg1 {
  return;
}
%end

%hook YMAdAssetCache
- (void)setAssetLog:(id)arg1 {
  return;
}
%end

%hook YMAdAssetedPolicy
- (void)getImageAsset:(id)arg1 completion:(id)arg2 {
  return;
}
%end

%hook YMAdAssetedPolicy
- (void)setAssetCache:(id)arg1 {
  return;
}
%end

%hook YMAdReachability
- (void)dealloc {
  return;
}
%end

%hook YMAdReachability
- (void)stopNotifier {
  return;
}
%end

%hook FlurryManagedUIRequestManager
- (void)setYmadVersion:(id)arg1 {
  return;
}
%end

%hook FlurryJSONAdRequestBuilder
- (void)setYmadVersion:(id)arg1 {
  return;
}
%end

%hook YMAdDynamicLayoutContext
- (void)setAnimationDuration:(float)arg1 {
  return;
}
%end

%hook YMAdDynamicLayoutContext
- (void)setSettingsCollection:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)unmute:(bool)arg1 {
  return;
}
%end

%hook YMAd
- (void)pause {
  return;
}
%end

%hook YMAd
- (void)reportVideoCharge {
  return;
}
%end

%hook YMAd
- (void)reportVideoStart:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportVideoCharge:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportVideoQuartile25:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportVideoQuartile50:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportVideoQuartile100:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportVideoQuartile75:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportVideoClickQuartile100:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)reportVideoPaused {
  return;
}
%end

%hook YMAd
- (void)reportVideoReplay {
  return;
}
%end

%hook YMAd
- (void)resetVideoProgressBeaconFlags {
  return;
}
%end

%hook YMAd
- (void)trackViewabilityWithView:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)trackingViewSetActive:(bool)arg1 {
  return;
}
%end

%hook YMAd
- (void)setMutedState:(bool)arg1 {
  return;
}
%end

%hook YMAd
- (void)modifyOptions:(id)arg1 {
  return;
}
%end

%hook YMAd
- (void)resetBeaconFlag:(int)arg1 {
  return;
}
%end

%hook YMAd
- (void)setIdentifier:(id)arg1 {
  return;
}
%end

%hook YMAdDynamicLayoutContext
- (bool)isInAppearingSubtree {
  return 0;
}
%end

%hook YMAdDynamicLayoutContext
- (bool)isInDisappearingSubtree {
  return NO;
}
%end

%hook YMAdDynamicLayoutContext
- (bool)subtreeAppearing {
  return 0;
}
%end

%hook YMAd
- (bool)shouldAutoplay {
  return 0;
}
%end

%hook YMAd
- (bool)hasPhoto {
  return NO;
}
%end

%hook YMAd
- (bool)hasFlashSale {
  return NO;
}
%end

%hook YMAd
- (bool)flashSaleIsDisplayable {
  return NO;
}
%end

%hook YMAd
- (id)photo {
  return NULL;
}
%end

%hook _TtC6Tumblr15DisplayIOAdView
- (void)willMoveToWindow:(id)arg1 {
  return;
}
%end

%hook _TtC6Tumblr15DisplayIOAdView
- (void)ctaClick {
  return;
}
%end

%hook _TtC6Tumblr14BackfillAdCell
- (void)updateColors:(id)arg1 {
  return;
}
%end

%hook _TtC6Tumblr14BackfillAdCell
- (void)updateTheming:(id)arg1 {
  return;
}
%end

%hook _TtC6Tumblr14BackfillAdCell
- (void)layoutSubviews {
  return;
}
%end

%hook _TtC6Tumblr14BackfillAdCell
- (void)setBloglessAdView:(id)arg1 {
  return;
}
%end

%hook _TtC6Tumblr14BackfillAdCell
- (void)setupWithBackfillAd:(id)arg1 viewConfiguration:(id)arg2 appColorScheme:(id)arg3 bloglessAdViewDelegate:(id)arg4 postCellResponder:(id)arg5 spacerHeight:(float)arg6 yahooVideoPlayerProvider:(id)arg7 {
  return;
}
%end

%hook _TtC6Tumblr14BackfillAdCell
- (void)updateWithAppColorSource:(id)arg1 {
  return;
}
%end

%hook TMBackfillAd
- (void)setType:(int)arg1 {
  return;
}
%end

%hook TMBackfillAd
- (void)updateWithDictionary:(id)arg1 {
  return;
}
%end

%hook TMBackfillAdCreative
- (void)updateWithDictionary:(id)arg1 {
  return;
}
%end

%hook TMImageBackfillAdCreative
- (void)updateWithDictionary:(id)arg1 {
  return;
}
%end

%hook TMVideoBackfillAdCreative
- (void)updateWithDictionary:(id)arg1 {
  return;
}
%end

%hook GADOpener
- (void)setAdView:(id)arg1 {
  return;
}
%end

%hook GADOpener
- (void)setSlot:(id)arg1 {
  return;
}
%end

%hook GADOpener
- (void)setReferringURL:(id)arg1 {
  return;
}
%end

%hook GADOpener
- (void)setViewController:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setTileTapToOpenLabel:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setTapToOpenOverlay:(id)arg1 {
  return;
}
%end

%hook YMAdVideoViewManager
- (void)addKeyToUsedList:(id)arg1 withAutoLoopEnabled:(bool)arg2 {
  return;
}
%end

%hook YMAdVideoViewManager
- (void)setActiveVideo:(id)arg1 didChangeAdViews:(bool)arg2 withAutoLoopEnabled:(bool)arg3 {
  return;
}
%end

%hook YMAdManager
- (void)openAppStoreForAd:(id)arg1 parentViewController:(id)arg2 complete:(id)arg3 {
  return;
}
%end

%hook YMAdManager
- (void)openYahooBrowserWithURL:(id)arg1 parentViewController:(id)arg2 useNativeBrowser:(bool)arg3 telemetryIdentifier:(id)arg4 {
  return;
}
%end

%hook YMAdVideo
- (void)setAutoLoopEnabled:(bool)arg1 {
  return;
}
%end

%hook YMAdBrowser
- (void)openURL:(id)arg1 presentingViewController:(id)arg2 useNativeBrowser:(bool)arg3 telemetryIdentifier:(id)arg4 {
  return;
}
%end

%hook SMAdView
- (void)openBrowserForURL:(id)arg1 {
  return;
}
%end

%hook YMAdViewStateToViewDictionary
- (void)eachViewDoAction:(id)arg1 {
  return;
}
%end

%hook YMAdViewStateToViewDictionary
- (void)awakeFromNib {
  return;
}
%end

%hook YMAdViewStateToViewDictionary
- (void)setViews:(id)arg1 {
  return;
}
%end

%hook YMAdViewStateToViewDictionary
- (void)eachViewOfType:(Class)arg1 doAction:(id)arg2 {
  return;
}
%end

%hook YMAdViewStateToViewDictionary
- (void)setViewDictionary:(id)arg1 {
  return;
}
%end

%hook YMAdVideoPlayerView
- (void)ymadViewExpandButtonTapped {
  return;
}
%end

%hook YMAdView
- (void)showHideSubviewsForAd:(id)arg1 viewState:(int)arg2 {
  return;
}
%end

%hook YMAdView
- (void)setPrimaryAdInfo:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)applyViewOptions:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)applyFontOptions:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)respondToScrollViewEvent:(float)arg1 scrollOffsetY:(float)arg2 {
  return;
}
%end

%hook YMAdView
- (void)updateAdjustableViewForAdContainerWithHeight:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setSizing:(id)arg1 viewState:(int)arg2 containerWidth:(float)arg3 animated:(bool)arg4 completion:(id)arg5 {
  return;
}
%end

%hook YMAdView
- (void)awakeFromNib {
  return;
}
%end

%hook YMAdView
- (void)applyVisualState:(int)arg1 initializing:(bool)arg2 animated:(bool)arg3 {
  return;
}
%end

%hook YMAdView
- (void)relayout {
  return;
}
%end

%hook YMAdView
- (void)setContainerWidth:(float)arg1 {
  return;
}
%end

%hook YMAdView
- (void)updateWithAd:(id)arg1 delegates:(id)arg2 containerWidth:(float)arg3 viewState:(int)arg4 {
  return;
}
%end

%hook YMAdView
- (void)layoutWithAd:(id)arg1 viewState:(int)arg2 containerWidth:(float)arg3 {
  return;
}
%end

%hook YMAdView
- (void)setAdInfo:(id)arg1 viewState:(int)arg2 {
  return;
}
%end

%hook YMAdView
- (void)updateVisualState:(int)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setInfoIconImage:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)regsiterViewForVisibility {
  return;
}
%end

%hook YMAdView
- (void)regsiterViewForNoLongerVisible {
  return;
}
%end

%hook YMAdView
- (void)regsiterViewForVideoVisibility {
  return;
}
%end

%hook YMAdView
- (void)regsiterViewForVideoNoLongerVisibile {
  return;
}
%end

%hook YMAdView
- (void)deregisterVideoTrackers {
  return;
}
%end

%hook YMAdView
- (void)play {
  return;
}
%end

%hook YMAdView
- (void)presentClickVideoView {
  return;
}
%end

%hook YMAdView
- (void)showTileCTA {
  return;
}
%end

%hook YMAdView
- (void)setTileLightningIconImage:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)hideTileCTA {
  return;
}
%end

%hook YMAdView
- (void)handleExpand {
  return;
}
%end

%hook YMAdView
- (void)setExpandIconImage:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)hideExpandIcon {
  return;
}
%end

%hook YMAdView
- (void)showExpandIcon {
  return;
}
%end

%hook YMAdView
- (void)setAdPhotoImage:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setAdPhotoWithAnimatedImageView:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setAppIconImage:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setAdThumbnailImage:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setAdThumbnailWithAnimatedImageView:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)mergeViewOptions:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setFontScale:(float)arg1 {
  return;
}
%end

%hook YMAdView
- (void)initViewOptionsFromPolicy:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)infoIconTapped:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)adTapped:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)installNowTapped:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)cpiRegionTapped:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)learnMoreTapped:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)adPhotoTapped:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)viewWithRegionTapped:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)adFeedbackPopoverIconTapped:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)delegateTapOn:(int)arg1 {
  return;
}
%end

%hook YMAdView
- (void)skAppStoreDismiss {
  return;
}
%end

%hook YMAdView
- (void)skAppStoreLoad {
  return;
}
%end

%hook YMAdView
- (void)setContainerView:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setViewOptions:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setInstrumentationTag:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setAd:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setViewConfig:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setFontOptions:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setDelegates:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setHeadline:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setSponsorLabel:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setSummary:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setSponsor:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setExpandIcon:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setTileLightningIcon:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setInfoIcon:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setAdPhoto:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setThumbNailImage:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setCpiRegion:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setViewComponents:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setVideoPlayerView:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setCpcRegion:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setAdContentView:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setAdFeedbackView:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setAdFeedbackPopoverIcon:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setCtaButton:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setFlashSaleTimerView:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setMeasuringView:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setHeightConstraint:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setWidthConstraint:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setVideoViewComponent:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)set_containerWidth:(float)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setTileExpandedTag:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setAnimationTracker:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setTileCollasedTag:(id)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setAlreadyPlayed:(bool)arg1 {
  return;
}
%end

%hook YMAdView
- (void)setWasPlaying:(bool)arg1 {
  return;
}
%end

%hook YMAdViewConfig
- (void)setMinContainerWidth:(id)arg1 {
  return;
}
%end

%hook YMAdViewConfig
- (void)setAdHeightType:(id)arg1 {
  return;
}
%end

%hook YMAdViewConfig
- (void)setAdWidthType:(id)arg1 {
  return;
}
%end

%hook YMAdViewConfig
- (void)setAdFeedbackNibName:(id)arg1 {
  return;
}
%end

%hook YMAdViewConfig
- (void)setAdFeedbackShadow:(id)arg1 {
  return;
}
%end

%hook YMAdViewConfig
- (void)setInfoIconColoringView:(id)arg1 {
  return;
}
%end

%hook YMAdViewConfig
- (void)setInfoIconAlpha:(id)arg1 {
  return;
}
%end

%hook YMAdViewConfig
- (void)setHeightPadding:(id)arg1 {
  return;
}
%end

%hook YMAdViewConfig
- (void)setFontScalingEnabled:(id)arg1 {
  return;
}
%end

%hook YMAdViewConfig
- (void)setViewID:(id)arg1 {
  return;
}
%end

%hook YMAdViewConfig
- (void)setAdjustableViewForAdContainer:(id)arg1 {
  return;
}
%end

%hook YMAdViewConfig
- (void)setSettingsCollection:(id)arg1 {
  return;
}
%end

%hook YMAdViewComponents
- (void)setAdOnAdViewComponents:(id)arg1 {
  return;
}
%end

%hook YMAdViewComponents
- (void)eachComponentOfType:(id)arg1 doAction:(id)arg2 {
  return;
}
%end

%hook YMAdViewComponents
- (void)eachFontScalableComponentDoAction:(id)arg1 {
  return;
}
%end

%hook YMAdViewComponents
- (void)eachThemableComponentDoAction:(id)arg1 {
  return;
}
%end

%hook YMAdViewComponents
- (void)eachStatefulComponentDoAction:(id)arg1 {
  return;
}
%end

%hook YMAdViewComponents
- (void)setViewComponents:(id)arg1 {
  return;
}
%end

%hook YMAdViewComponents
- (void)eachLayoutComponentDoAction:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)merge:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)setBackgroundColor:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)setHeadlineColor:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)setSummaryColor:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)setButtonColor:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)setButtonTextColor:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)setButtonTextSize:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)setButtonBackgroundColor:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)setButtonIcon:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)setLinkColor:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)setSponsorTextColor:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)setSponsorColor:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)setStateLabelColor:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)setAppNameColor:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)setAppCategoryColor:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)setExpandCloseTextColor:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)setBackgroundOpacity:(id)arg1 {
  return;
}
%end

%hook YMAdViewOptions
- (void)setShouldShowAvatar:(bool)arg1 {
  return;
}
%end

%hook YMAdViewResolver
- (void)addVideoNibs:(id)arg1 {
  return;
}
%end

%hook YMAdViewResolver
- (void)addCardNibs:(id)arg1 {
  return;
}
%end

%hook YMAdViewResolver
- (void)addDefaultNibs:(id)arg1 {
  return;
}
%end

%hook YMAdViewResolver
- (void)setAdToNibBundleMapping:(id)arg1 {
  return;
}
%end

%hook YMAdViewResolver
- (void)setAdToNibBundleCache:(id)arg1 {
  return;
}
%end

%hook YMAdViewResolver
- (void)setReuseIdentifierToTemplateKeyMap:(id)arg1 {
  return;
}
%end

%hook YMAdViewResolver
- (void)setNibPackageCache:(id)arg1 {
  return;
}
%end

%hook YMAdViewReuseManager
- (void)setPlaceholderAdUnits:(id)arg1 {
  return;
}
%end

%hook YMAdViewReuseManager
- (void)setSizingViews:(id)arg1 {
  return;
}
%end

%hook YMAdViewReuseManager
- (void)set_reuseIdentifiers:(id)arg1 {
  return;
}
%end

%hook YMAdViewReuseManager
- (void)setAdUI:(id)arg1 {
  return;
}
%end

%hook YMAdViewStateAnimationTracker
- (void)setCurrentAnimatingIdentifier:(unsigned long long)arg1 {
  return;
}
%end

%hook YMAdViewStateAnimationTracker
- (void)layoutCompletedForTrackerIdentifier:(unsigned long long)arg1 {
  return;
}
%end

%hook YMAdViewReuseManager
- (void)setFixedHeights:(id)arg1 {
  return;
}
%end

%hook YMAdViewStateAnimationTracker
- (void)reset {
  return;
}
%end

%hook YMAdViewStateAnimationTracker
- (void)setOwningAdView:(id)arg1 {
  return;
}
%end

%hook YMAdViewStateAnimationTracker
- (void)set_currentAnimatingIdentifier:(unsigned long long)arg1 {
  return;
}
%end

%hook YMAdViewStateAnimationTracker
- (void)setNextAvailableAnimatingIdentifier:(unsigned long long)arg1 {
  return;
}
%end

%hook SMAdPanoramaView
- (void)buildSponsoredMomentsAdElementsView {
  return;
}

- (void)buildSponsoredMomentsAdFooterElementsView {
  return;
}

- (void)setSponsoredMomentsAdFooterElementsView:(id)arg1 {
  return;
}
%end

%hook SMAdPlayableView
- (void)buildSponsoredMomentsAdElementsView {
  return;
}
%end

%hook SMAdVideoView
- (void)buildSponsoredMomentsAdElementsView {
  return;
}
- (void)buildSponsoredMomentsAdFooterElementsView {
  return;
}
- (void)setSponsoredMomentsAdFooterElementsView:(id)arg1 {
  return;
}
%end

%hook SMAdView
- (void)buildSponsoredMomentsAdElementsView {
  return;
}
- (void)buildSponsoredMomentsAdFlashSaleTimerView {
  return;
}
- (void)buildSponsoredMomentsAdTopLabelViews {
  return;
}
- (void)setupSponsoredMomentsTopLabel:(id)arg1 {
  return;
}
- (void)setSponsoredMomentsAd:(id)arg1 {
  return;
}
- (void)setSponsoredMomentsAdElementsView:(id)arg1 {
  return;
}
- (void)setSponsoredMomentsAdTopLabelViewRight:(id)arg1 {
  return;
}
- (void)setSponsoredMomentsAdTopLabelViewLeft:(id)arg1 {
  return;
}
- (void)setSponsoredMomentsAdFlashSaleTimerView:(id)arg1 {
  return;
}
%end

%hook _TtC6Tumblr27YahooSponsoredMomentsAdView
- (void)imageViewDidCompleteFade:(id)arg1 {
  return;
}
- (void)imageViewContentsDidChange:(id)arg1 {
  return;
}
- (void)imageViewDidFinishLoading:(id)arg1 {
  return;
}
- (void)imageViewDidFinishLoading:(id)arg1 withError:(id)arg2 {
  return;
}
%end

%hook _TtC6Tumblr33YahooSponsoredMomentsViewsManager
- (void)dealloc {
  return;
}
- (void)contentOffsetCalculator:(id)arg1 offsetChanged:(struct CGPoint)arg2 inView:(id)arg3 {
  return;
}
%end

%hook SMAdManager
- (void)setSponsoredMomentsAdLastShownTimeStamp:(id)arg1 {
  return;
}
%end
