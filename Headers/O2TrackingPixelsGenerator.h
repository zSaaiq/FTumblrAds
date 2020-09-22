//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface O2TrackingPixelsGenerator : NSObject
{
}

+ (id)bufferEndWithPid:(id)arg1 bid:(id)arg2 bcid:(id)arg3 sid:(id)arg4 vid:(id)arg5 it:(id)arg6 bt:(id)arg7 pv:(id)arg8 pt:(id)arg9 r:(id)arg10 t:(id)arg11 url:(id)arg12 vvuid:(id)arg13 appId:(id)arg14 cb:(id)arg15 mFwsitesection:(id)arg16 spaceid:(id)arg17;
+ (id)bufferStartWithPid:(id)arg1 bid:(id)arg2 bcid:(id)arg3 sid:(id)arg4 vid:(id)arg5 it:(id)arg6 pv:(id)arg7 pt:(id)arg8 r:(id)arg9 t:(id)arg10 url:(id)arg11 vvuid:(id)arg12 appId:(id)arg13 cb:(id)arg14 mFwsitesection:(id)arg15 spaceid:(id)arg16;
+ (id)rayLoadWithPid:(id)arg1 bid:(id)arg2 bcid:(id)arg3 sid:(id)arg4 vid:(id)arg5 it:(id)arg6 pv:(id)arg7 pt:(id)arg8 r:(id)arg9 t:(id)arg10 url:(id)arg11 lvl:(id)arg12 vvuid:(id)arg13 appId:(id)arg14 cb:(id)arg15 mFwsitesection:(id)arg16 spaceid:(id)arg17;
+ (id)errorWithPid:(id)arg1 bid:(id)arg2 bcid:(id)arg3 vid:(id)arg4 msg:(id)arg5 ec:(id)arg6 it:(id)arg7 t:(id)arg8 r:(id)arg9 url:(id)arg10 pt:(id)arg11 pv:(id)arg12 sid:(id)arg13 appId:(id)arg14 cb:(id)arg15 mFwsitesection:(id)arg16 spaceid:(id)arg17;
+ (id)startWithPid:(id)arg1 bid:(id)arg2 bcid:(id)arg3 sid:(id)arg4 vid:(id)arg5 it:(id)arg6 pv:(id)arg7 pt:(id)arg8 r:(id)arg9 url:(id)arg10 vvuid:(id)arg11 appId:(id)arg12 cb:(id)arg13 mFwsitesection:(id)arg14 spaceid:(id)arg15;
+ (id)intentWithPid:(id)arg1 bid:(id)arg2 bcid:(id)arg3 sid:(id)arg4 vid:(id)arg5 pv:(id)arg6 pt:(id)arg7 r:(id)arg8 url:(id)arg9 vvuid:(id)arg10 it:(id)arg11 appId:(id)arg12 cb:(id)arg13 mFwsitesection:(id)arg14 spaceid:(id)arg15;
+ (id)heartbeatWithPid:(id)arg1 bid:(id)arg2 vid:(id)arg3 bcid:(id)arg4 r:(id)arg5 pt:(id)arg6 pv:(id)arg7 sid:(id)arg8 vvuid:(id)arg9 appId:(id)arg10 cvt:(id)arg11 t:(id)arg12 seq:(id)arg13 w:(id)arg14 h:(id)arg15 vpt:(id)arg16 bft:(id)arg17 bit:(id)arg18 vcdn:(id)arg19 cb:(id)arg20 mFwsitesection:(id)arg21 apid:(id)arg22 pVwSound:(id)arg23 spaceid:(id)arg24;
+ (id)video3SecWithBid:(id)arg1 pid:(id)arg2 bcid:(id)arg3 vid:(id)arg4 pv:(id)arg5 sid:(id)arg6 seq:(id)arg7 r:(id)arg8 vpt:(id)arg9 pt:(id)arg10 cb:(id)arg11 appId:(id)arg12 vvuid:(id)arg13 vcid:(id)arg14 mpid:(id)arg15 mFwsitesection:(id)arg16 bft:(id)arg17 bit:(id)arg18 cvt:(id)arg19 vcdn:(id)arg20 apid:(id)arg21 pVwSound:(id)arg22 spaceid:(id)arg23;
+ (id)adStartWithAppId:(id)arg1 bcid:(id)arg2 sid:(id)arg3 pid:(id)arg4 bid:(id)arg5 rid:(id)arg6 ps:(id)arg7 r:(id)arg8 uuid:(id)arg9 vvuid:(id)arg10 cb:(id)arg11 mFwsitesection:(id)arg12 bckt:(id)arg13 expn:(id)arg14 cpm:(id)arg15 pblobId:(id)arg16 spaceid:(id)arg17;
+ (id)displaysWithAppId:(id)arg1 bcid:(id)arg2 pid:(id)arg3 bid:(id)arg4 sid:(id)arg5 dt:(id)arg6 w:(id)arg7 h:(id)arg8 pt:(id)arg9 pv:(id)arg10 r:(id)arg11 vvuid:(id)arg12 cb:(id)arg13 mFwsitesection:(id)arg14 bckt:(id)arg15 expn:(id)arg16 ab:(id)arg17 spaceid:(id)arg18;
+ (id)videoImpressionWithAppId:(id)arg1 bcid:(id)arg2 pid:(id)arg3 vid:(id)arg4 bid:(id)arg5 pt:(id)arg6 pv:(id)arg7 r:(id)arg8 sid:(id)arg9 vpt:(id)arg10 ts:(id)arg11 cb:(id)arg12 w:(id)arg13 h:(id)arg14 vcid:(id)arg15 mpid:(id)arg16 seq:(id)arg17 mFwsitesection:(id)arg18 bckt:(id)arg19 expn:(id)arg20 spaceid:(id)arg21;
+ (id)impressionsWithAppId:(id)arg1 bcid:(id)arg2 pid:(id)arg3 bid:(id)arg4 pt:(id)arg5 sid:(id)arg6 r:(id)arg7 cb:(id)arg8 mFwsitesection:(id)arg9 spaceid:(id)arg10;
+ (id)adViewabilityWithAppId:(id)arg1 bcid:(id)arg2 pid:(id)arg3 v:(id)arg4 ap:(id)arg5 at:(id)arg6 vstd:(id)arg7 vid:(id)arg8 bid:(id)arg9 pt:(id)arg10 pv:(id)arg11 sid:(id)arg12 r:(id)arg13 vvuid:(id)arg14 cb:(id)arg15 mFwsitesection:(id)arg16 poid:(id)arg17 adseq:(id)arg18 bckt:(id)arg19 expn:(id)arg20 cpm:(id)arg21 pblobId:(id)arg22 spaceid:(id)arg23;
+ (id)adEngineFlowWithAppId:(id)arg1 bcid:(id)arg2 pid:(id)arg3 v:(id)arg4 at:(id)arg5 bid:(id)arg6 vid:(id)arg7 w:(id)arg8 h:(id)arg9 ap:(id)arg10 stg:(id)arg11 pt:(id)arg12 pv:(id)arg13 ps:(id)arg14 sid:(id)arg15 txid:(id)arg16 rid:(id)arg17 rcid:(id)arg18 r:(id)arg19 aen:(id)arg20 vvuid:(id)arg21 cb:(id)arg22 aid:(id)arg23 mFwsitesection:(id)arg24 poid:(id)arg25 adseq:(id)arg26 bckt:(id)arg27 expn:(id)arg28 cpm:(id)arg29 pblobId:(id)arg30 spaceid:(id)arg31;
+ (id)adEngineResponseWithAppId:(id)arg1 bcid:(id)arg2 pid:(id)arg3 v:(id)arg4 at:(id)arg5 ar:(id)arg6 bid:(id)arg7 aert:(id)arg8 vid:(id)arg9 to:(id)arg10 ft:(id)arg11 pt:(id)arg12 pv:(id)arg13 ps:(id)arg14 sid:(id)arg15 txid:(id)arg16 rid:(id)arg17 rcid:(id)arg18 r:(id)arg19 aen:(id)arg20 vvuid:(id)arg21 cb:(id)arg22 mFwsitesection:(id)arg23 poid:(id)arg24 adseq:(id)arg25 bckt:(id)arg26 expn:(id)arg27 cpm:(id)arg28 pblobId:(id)arg29 spaceid:(id)arg30;
+ (id)adEngineRequestWithAppId:(id)arg1 bcid:(id)arg2 pid:(id)arg3 v:(id)arg4 at:(id)arg5 bid:(id)arg6 vid:(id)arg7 pt:(id)arg8 pv:(id)arg9 ps:(id)arg10 sid:(id)arg11 txid:(id)arg12 rid:(id)arg13 rcid:(id)arg14 r:(id)arg15 aen:(id)arg16 vvuid:(id)arg17 cb:(id)arg18 mFwsitesection:(id)arg19 poid:(id)arg20 adseq:(id)arg21 bckt:(id)arg22 expn:(id)arg23 cpm:(id)arg24 pblobId:(id)arg25 spaceid:(id)arg26;
+ (id)adViewTimeWithAppId:(id)arg1 bcid:(id)arg2 bid:(id)arg3 pid:(id)arg4 vid:(id)arg5 sid:(id)arg6 s:(id)arg7 pt:(id)arg8 pv:(id)arg9 vvuid:(id)arg10 txid:(id)arg11 rid:(id)arg12 adid:(id)arg13 t:(id)arg14 r:(id)arg15 cb:(id)arg16 al:(id)arg17 mFwsitesection:(id)arg18 poid:(id)arg19 adseq:(id)arg20 bckt:(id)arg21 expn:(id)arg22 cpm:(id)arg23 pblobId:(id)arg24 spaceid:(id)arg25;
+ (id)adIssueWithAppId:(id)arg1 bcid:(id)arg2 pid:(id)arg3 v:(id)arg4 at:(id)arg5 bid:(id)arg6 vid:(id)arg7 dt:(id)arg8 stg:(id)arg9 pt:(id)arg10 pv:(id)arg11 ps:(id)arg12 sid:(id)arg13 txid:(id)arg14 rid:(id)arg15 rcid:(id)arg16 r:(id)arg17 aen:(id)arg18 vvuid:(id)arg19 cb:(id)arg20 aid:(id)arg21 mFwsitesection:(id)arg22 poid:(id)arg23 adseq:(id)arg24 bckt:(id)arg25 expn:(id)arg26 cpm:(id)arg27 pblobId:(id)arg28 spaceid:(id)arg29;
+ (id)adServerRequestWithAppId:(id)arg1 bcid:(id)arg2 pid:(id)arg3 bid:(id)arg4 rid:(id)arg5 ps:(id)arg6 r:(id)arg7 uuid:(id)arg8 vvuid:(id)arg9 cb:(id)arg10 mFwsitesection:(id)arg11 bckt:(id)arg12 expn:(id)arg13 cpm:(id)arg14 pblobId:(id)arg15 spaceid:(id)arg16;
+ (id)adRequestWithAppId:(id)arg1 bcid:(id)arg2 pid:(id)arg3 at:(id)arg4 bid:(id)arg5 vid:(id)arg6 asn:(id)arg7 pt:(id)arg8 ps:(id)arg9 txid:(id)arg10 pv:(id)arg11 sid:(id)arg12 r:(id)arg13 vvuid:(id)arg14 cb:(id)arg15 mFwsitesection:(id)arg16 bckt:(id)arg17 expn:(id)arg18 spaceid:(id)arg19;
+ (id)slotOppWithAppId:(id)arg1 bcid:(id)arg2 pid:(id)arg3 at:(id)arg4 bid:(id)arg5 vid:(id)arg6 slot:(id)arg7 pt:(id)arg8 pv:(id)arg9 ps:(id)arg10 sid:(id)arg11 txid:(id)arg12 r:(id)arg13 vvuid:(id)arg14 cb:(id)arg15 s:(id)arg16 w:(id)arg17 mFwsitesection:(id)arg18 poid:(id)arg19 adseq:(id)arg20 bckt:(id)arg21 expn:(id)arg22 pblobId:(id)arg23 spaceid:(id)arg24;
+ (id)videoStatsWithAppId:(id)arg1 bcid:(id)arg2 pid:(id)arg3 bid:(id)arg4 nv:(id)arg5 t:(id)arg6 ac:(id)arg7 pt:(id)arg8 pv:(id)arg9 sid:(id)arg10 r:(id)arg11 vvuid:(id)arg12 cb:(id)arg13 mFwsitesection:(id)arg14 spaceid:(id)arg15;
+ (id)videoTimeWithAppId:(id)arg1 bcid:(id)arg2 pid:(id)arg3 vid:(id)arg4 bid:(id)arg5 vpt:(id)arg6 t:(id)arg7 pct:(id)arg8 pt:(id)arg9 pv:(id)arg10 sid:(id)arg11 ts:(id)arg12 r:(id)arg13 seq:(id)arg14 vvuid:(id)arg15 vcid:(id)arg16 mpid:(id)arg17 cb:(id)arg18 mFwsitesection:(id)arg19 spaceid:(id)arg20;
+ (id)videoQuartilesWithAppId:(id)arg1 bcid:(id)arg2 pid:(id)arg3 vid:(id)arg4 q:(id)arg5 bid:(id)arg6 pt:(id)arg7 pv:(id)arg8 sid:(id)arg9 vpt:(id)arg10 ts:(id)arg11 r:(id)arg12 seq:(id)arg13 vvuid:(id)arg14 vcid:(id)arg15 mpid:(id)arg16 cb:(id)arg17 mFwsitesection:(id)arg18 bckt:(id)arg19 expn:(id)arg20 spaceid:(id)arg21;
+ (id)videoDecilesWithAppId:(id)arg1 bcid:(id)arg2 pid:(id)arg3 vid:(id)arg4 d:(id)arg5 bid:(id)arg6 pt:(id)arg7 pv:(id)arg8 sid:(id)arg9 vpt:(id)arg10 ts:(id)arg11 r:(id)arg12 seq:(id)arg13 vvuid:(id)arg14 vcid:(id)arg15 mpid:(id)arg16 cb:(id)arg17 mFwsitesection:(id)arg18 spaceid:(id)arg19;
+ (id)videoPlayWithAppId:(id)arg1 bcid:(id)arg2 pid:(id)arg3 vid:(id)arg4 bid:(id)arg5 vpt:(id)arg6 w:(id)arg7 h:(id)arg8 pt:(id)arg9 pv:(id)arg10 sid:(id)arg11 ts:(id)arg12 r:(id)arg13 seq:(id)arg14 vvuid:(id)arg15 vcid:(id)arg16 mpid:(id)arg17 cb:(id)arg18 mFwsitesection:(id)arg19 bckt:(id)arg20 expn:(id)arg21 spaceid:(id)arg22;
+ (id)contextStartedWithAppId:(id)arg1 bcid:(id)arg2 pid:(id)arg3 bid:(id)arg4 vid:(id)arg5 pt:(id)arg6 pv:(id)arg7 sid:(id)arg8 r:(id)arg9 seq:(id)arg10 vvuid:(id)arg11 vcid:(id)arg12 mpid:(id)arg13 cb:(id)arg14 mFwsitesection:(id)arg15 bckt:(id)arg16 expn:(id)arg17 spaceid:(id)arg18;

@end

