//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OViewController.h"

#import "O2OCDPAdapterPromotionProtocol.h"
#import "O2OCommonSchemeProtocol.h"
#import "O2OEyePageMenuViewDelegate.h"
#import "O2OPopEyeViewCacheDelegate.h"

@class APBarButtonItem, APExceptionView, CDPSpaceView, NSArray, NSString, O2OEyePageMenuView, O2OPopEyeModel, O2OPopEyeSubViewController, UIActivityIndicatorView, UIView;

@interface O2OPopEyeViewController : O2OViewController <O2OCommonSchemeProtocol, O2OEyePageMenuViewDelegate, O2OPopEyeViewCacheDelegate, O2OCDPAdapterPromotionProtocol>
{
    _Bool _fromKoubeiHomePage;
    NSArray *_popEyeSubVCs;
    APBarButtonItem *_backBarButtonItem;
    O2OEyePageMenuView *_headView;
    O2OPopEyeSubViewController *_selectedSubVC;
    UIActivityIndicatorView *_indicatorView;
    APExceptionView *_netErrorView;
    APExceptionView *_netLimitView;
    APExceptionView *_emptyErrorView;
    APExceptionView *_locationErrorView;
    UIView *_contentView;
    CDPSpaceView *_spaceView;
    O2OPopEyeModel *_popEyeModel;
    double _animationInterval;
    long long _sequence;
}

+ (double)popEyeAnimationInterval;
+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
@property(nonatomic) _Bool fromKoubeiHomePage; // @synthesize fromKoubeiHomePage=_fromKoubeiHomePage;
@property(nonatomic) double animationInterval; // @synthesize animationInterval=_animationInterval;
@property(retain, nonatomic) O2OPopEyeModel *popEyeModel; // @synthesize popEyeModel=_popEyeModel;
@property(retain, nonatomic) CDPSpaceView *spaceView; // @synthesize spaceView=_spaceView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) APExceptionView *locationErrorView; // @synthesize locationErrorView=_locationErrorView;
@property(retain, nonatomic) APExceptionView *emptyErrorView; // @synthesize emptyErrorView=_emptyErrorView;
@property(retain, nonatomic) APExceptionView *netLimitView; // @synthesize netLimitView=_netLimitView;
@property(retain, nonatomic) APExceptionView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) O2OPopEyeSubViewController *selectedSubVC; // @synthesize selectedSubVC=_selectedSubVC;
@property(retain, nonatomic) O2OEyePageMenuView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) APBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(retain, nonatomic) NSArray *popEyeSubVCs; // @synthesize popEyeSubVCs=_popEyeSubVCs;
- (void).cxx_destruct;
- (void)dealloc;
- (double)contentTop;
- (void)configTableViewFrame;
- (void)removeAnnouncement;
- (void)addAnnouncementWithAnimate:(id)arg1;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)stopAnimation;
- (void)startAnimation;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (_Bool)hasCacheData;
- (void)reloadSelectedSubVC;
- (void)didSelectMenuView:(id)arg1 selectedIndex:(unsigned long long)arg2 currentIndex:(unsigned long long)arg3;
- (void)reload;
- (void)startLocating;
- (void)setPopEyeParamsLocationXY;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showEmpty:(id)arg1;
- (_Bool)canShowModel:(id)arg1;
- (void)showModel:(id)arg1;
- (void)showLoading:(id)arg1;
- (void)stopLoading;
- (void)setupPopEyeView;
- (void)setupContentView;
- (void)setupView;
- (void)setupNavigationBar;
- (id)pageSpm;
- (_Bool)autohideNavigationBar;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

