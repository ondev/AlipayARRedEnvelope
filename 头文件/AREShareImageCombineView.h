//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AREShareCombineParams, UIButton;

@interface AREShareImageCombineView : UIView
{
    AREShareCombineParams *_combineParams;
    UIView *_cardView;
    UIView *_panelView;
    UIButton *_gotoButton;
}

@property(retain, nonatomic) UIButton *gotoButton; // @synthesize gotoButton=_gotoButton;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) AREShareCombineParams *combineParams; // @synthesize combineParams=_combineParams;
- (void).cxx_destruct;
- (void)gotoShare;
- (void)hideMe;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (void)setupCocacolaView;
- (void)setupEnvelopeView;
- (void)setupViews;
- (id)initWithParams:(CDUnknownBlockType)arg1;

@end

