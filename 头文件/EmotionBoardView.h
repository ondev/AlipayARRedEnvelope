//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "APEmotionBottomViewDelegate.h"
#import "APEmotionShowViewDelegate.h"

@class EmotionBoardSelectView, EmotionBottomView, NSString;

@interface EmotionBoardView : UIView <APEmotionBottomViewDelegate, APEmotionShowViewDelegate>
{
    _Bool _baseEmotionOnly;
    id <EmotionBoardViewDelegate> _delegate;
    EmotionBoardSelectView *_showView;
    EmotionBottomView *_bottomView;
}

@property(nonatomic) _Bool baseEmotionOnly; // @synthesize baseEmotionOnly=_baseEmotionOnly;
@property(retain, nonatomic) EmotionBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) EmotionBoardSelectView *showView; // @synthesize showView=_showView;
@property(nonatomic) __weak id <EmotionBoardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setEmotionPage:(unsigned long long)arg1;
- (unsigned long long)getEmotionPage;
- (void)selectPackage:(id)arg1;
- (void)languageSettingDidChanged:(id)arg1;
- (void)emotionGifDidSendToCloudNotified:(id)arg1;
- (void)emotionPackageChanged:(id)arg1;
- (void)deleteButtonPressed;
- (void)emotionToSend:(id)arg1;
- (void)emotionSelectToPackageIndex:(long long)arg1;
- (void)sendButtonPressed;
- (void)emotionPackageSelect:(long long)arg1;
- (void)textViewHasText:(_Bool)arg1;
- (void)setSendButtonText:(id)arg1;
- (void)initViews;
- (id)initBaseEmotionBoardView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

