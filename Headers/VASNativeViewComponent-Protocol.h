//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VASNativeComponent-Protocol.h"
#import "VASViewComponent-Protocol.h"

@class UIView, VASErrorInfo;

@protocol VASNativeViewComponent <VASNativeComponent, VASViewComponent>
- (VASErrorInfo *)prepareView:(UIView *)arg1;
- (_Bool)isDescendantOfView:(UIView *)arg1;
@end
