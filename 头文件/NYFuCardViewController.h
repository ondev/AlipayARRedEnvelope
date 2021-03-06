//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NYFuCardBaseViewController.h"

#import "CAAnimationDelegate.h"
#import "NYFuCardContentViewDelegate.h"
#import "NYFuCardThumbToolViewDelegate.h"
#import "NYSchemeProtocol.h"

@class APToastView, NSArray, NSString, NYFuCardBanner, NYFuCardContentView, NYFuCardManager, NYFuCardThumbToolView, NYNetworkErrorView, NYPromptPopupView, UILabel, UIView;

@interface NYFuCardViewController : NYFuCardBaseViewController <NYFuCardContentViewDelegate, NYFuCardThumbToolViewDelegate, NYSchemeProtocol, CAAnimationDelegate>
{
    _Bool _animating;
    _Bool _emptyShowLoading;
    NYFuCardManager *_manager;
    UILabel *_moneyLabel;
    NYFuCardBanner *_bannerView;
    NYFuCardThumbToolView *_cardToolView;
    NYFuCardContentView *_cardContentView;
    UIView *_wrapContentView;
    UIView *_animatedView;
    NSArray *_animatedItemThumbView;
    UIView *_secondAnimatedView;
    APToastView *_loadingView;
    NYNetworkErrorView *_netErrorView;
    NYPromptPopupView *_autoPatchPopupView;
    NYPromptPopupView *_PilferingPopupView;
    NYPromptPopupView *_flowRestrictPopupView;
}

+ (unsigned long long)canInitWithOptions:(id)arg1;
@property(nonatomic) _Bool emptyShowLoading; // @synthesize emptyShowLoading=_emptyShowLoading;
@property(nonatomic) __weak NYPromptPopupView *flowRestrictPopupView; // @synthesize flowRestrictPopupView=_flowRestrictPopupView;
@property(nonatomic) __weak NYPromptPopupView *PilferingPopupView; // @synthesize PilferingPopupView=_PilferingPopupView;
@property(nonatomic) __weak NYPromptPopupView *autoPatchPopupView; // @synthesize autoPatchPopupView=_autoPatchPopupView;
@property(retain, nonatomic) NYNetworkErrorView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) APToastView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIView *secondAnimatedView; // @synthesize secondAnimatedView=_secondAnimatedView;
@property(retain, nonatomic) NSArray *animatedItemThumbView; // @synthesize animatedItemThumbView=_animatedItemThumbView;
@property(retain, nonatomic) UIView *animatedView; // @synthesize animatedView=_animatedView;
@property(retain, nonatomic) UIView *wrapContentView; // @synthesize wrapContentView=_wrapContentView;
@property(retain, nonatomic) NYFuCardContentView *cardContentView; // @synthesize cardContentView=_cardContentView;
@property(retain, nonatomic) NYFuCardThumbToolView *cardToolView; // @synthesize cardToolView=_cardToolView;
@property(retain, nonatomic) NYFuCardBanner *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) NYFuCardManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)setupViewConstraints;
- (void)pressRightNavItem;
- (void)setupNav;
- (void)setupUI;
- (void)cardThumbToolView:(id)arg1 didSelectedFuCardType:(id)arg2;
- (void)cardContentView:(id)arg1 didSelectedCard:(id)arg2;
- (void)scrollToFuCard:(id)arg1 typeId:(id)arg2;
- (void)afterEnableSplitBtnCheck;
- (void)reloadData;
- (void)reloadPageTips;
- (void)handleFuCardRefreshCacheFromServerNotify:(id)arg1;
- (void)handleScrollToFuCardNotify:(id)arg1;
- (void)handleFiveFuCardExchangedNotify;
- (void)handleEnterForegroundNotify;
- (void)handleCardDataRenewNotify;
- (void)back;
- (void)viewWillDestroy;
- (void)cleanView;
- (void)removeNotificationsOnDisappear;
- (void)observeNotificationsOnAppear;
- (void)disableGesture;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;
- (void)animation_end;
- (void)animation_fiveFuViewStep;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)animate;
- (void)animation_thirdStep;
- (void)animation_secondStep;
- (void)animation_firstStep;
- (void)animation_prepared;
- (void)startFiveFuAnimation;
- (void)checkAndRunAnimation;
- (void)showAutoPatchPopup:(CDUnknownBlockType)arg1;
- (void)checkAlertPilfering;
- (void)checkFlowRestrict;
- (void)showFlowRestrictPopup:(CDUnknownBlockType)arg1;
- (_Bool)canNotPopup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

