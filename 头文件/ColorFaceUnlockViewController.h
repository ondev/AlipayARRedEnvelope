//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSViewController.h"

#import "ColorFaceHeadImageViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class ColorFaceHeadImageView, ColorFaceInputView, ColorFaceTipLabel, GestureUserTipView, NSString, UIButton;

@interface ColorFaceUnlockViewController : GSViewController <UIAlertViewDelegate, ColorFaceHeadImageViewDelegate>
{
    ColorFaceHeadImageView *_headImageView;
    ColorFaceTipLabel *_tipLabel;
    ColorFaceInputView *_inputView;
    UIButton *_preferenceBtn;
    UIButton *_changeAccountButton;
    int _retryCount;
    _Bool _isNeedAnimation;
    id <ColorFaceViewControllerDelegate> _delegate;
    GestureUserTipView *_tipView;
}

+ (id)preparedAvatar;
@property(nonatomic) _Bool isNeedAnimation; // @synthesize isNeedAnimation=_isNeedAnimation;
@property(retain, nonatomic) GestureUserTipView *tipView; // @synthesize tipView=_tipView;
@property(nonatomic) __weak id <ColorFaceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)monitorBackToHome;
- (void)didEnterBackgroundNotification:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)headImageAnimation;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)headClicked;
- (void)colorFaceViewQuitAndNotify;
- (void)gestureInputView:(id)arg1 didFinishWithPassword:(id)arg2;
- (void)gestureInputViewFirstEffectiveTouch:(id)arg1;
- (void)gestureInputViewTouchBegin:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionChangeAccountToLogin;
- (void)actionPreferenceBtnClick;
- (void)resetCurrentUser;
- (void)resetPsw;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)notifyFaceToFacePayReceivedData:(id)arg1;
- (_Bool)autohideNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)breakFirstRun;
- (_Bool)isFirstRun;
- (void)backToHome;
- (void)setUp;
- (void)addBottomBtns;
- (_Bool)isAvatarRemoved;
- (float)topFactor;
- (void)layoutScreenBiggerThanPhone4;
- (void)layoutScreenForPhone4;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

