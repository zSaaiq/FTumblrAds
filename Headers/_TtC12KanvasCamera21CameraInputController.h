//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC12KanvasCamera21CameraInputController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate>
{
    MISSING_TYPE *willCloseSoon;
    MISSING_TYPE *targetFrameRate;
    MISSING_TYPE *minimumFrameRate;
    MISSING_TYPE *currentCameraPosition;
    MISSING_TYPE *currentCameraOutput;
    MISSING_TYPE *flashMode;
    MISSING_TYPE *filteredInputViewControllerInstance;
    MISSING_TYPE *previewLayer;
    MISSING_TYPE *previewBlurView;
    MISSING_TYPE *flashLayer;
    MISSING_TYPE *sessionQueue;
    MISSING_TYPE *videoQueue;
    MISSING_TYPE *audioQueue;
    MISSING_TYPE *isSimulator;
    MISSING_TYPE *settings;
    MISSING_TYPE *recorderType;
    MISSING_TYPE *segmentsHandler;
    MISSING_TYPE *captureSession;
    MISSING_TYPE *frontCamera;
    MISSING_TYPE *rearCamera;
    MISSING_TYPE *microphone;
    MISSING_TYPE *currentCameraInput;
    MISSING_TYPE *currentMicInput;
    MISSING_TYPE *photoOutput;
    MISSING_TYPE *videoDataOutput;
    MISSING_TYPE *audioDataOutput;
    MISSING_TYPE *recorder;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)pinched:(id)arg1;
- (void)doubleTapped;
- (void)tappedWithGesture:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
