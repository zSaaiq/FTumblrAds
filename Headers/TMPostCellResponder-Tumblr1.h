//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMPostCellResponder.h"

#import "TMPostTableCellMediaDelegate-Protocol.h"

@interface TMPostCellResponder (Tumblr1) <TMPostTableCellMediaDelegate>
- (void)tableCellFireBeacons:(id)arg1 placementIdentifier:(id)arg2 beaconConstructors:(id)arg3 eventProvider:(id)arg4;
- (void)tableCell:(id)arg1 didSelectAudioView:(id)arg2 audioBlock:(id)arg3;
- (void)tableCellShouldLogPhotoTapAnalytics:(id)arg1 imageView:(id)arg2;
- (void)tableCell:(id)arg1 didSelectPhotoView:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)tableCell:(id)arg1 didLongPressPhotoView:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)tableCellDidTapVideoUnsupportedButton:(id)arg1;
- (void)tableCellDidLongPressUnsupportedVideo:(id)arg1 fromRect:(struct CGRect)arg2;
@end
