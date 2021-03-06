//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFViewController.h"

#import "CTGrowingTextViewDelegate.h"
#import "EmotionBoardViewDelegate.h"
#import "TLCommentViewDelegate.h"

@class EmotionBoardView, NSString, TLCommentView, TLOperationModel, UITapGestureRecognizer;

@interface TLCommentBaseViewController : MFViewController <CTGrowingTextViewDelegate, TLCommentViewDelegate, EmotionBoardViewDelegate>
{
    _Bool _isNormalShow;
    _Bool _isViewShow;
    _Bool _isViewDidShow;
    _Bool _keyboardWillShow;
    int _editStyle;
    UITapGestureRecognizer *_tapGesture;
    TLCommentView *_commentView;
    TLOperationModel *_opModel;
    EmotionBoardView *_emojiView;
    NSString *_lastStr;
}

@property(retain, nonatomic) NSString *lastStr; // @synthesize lastStr=_lastStr;
@property(retain, nonatomic) EmotionBoardView *emojiView; // @synthesize emojiView=_emojiView;
@property(nonatomic) _Bool keyboardWillShow; // @synthesize keyboardWillShow=_keyboardWillShow;
@property(nonatomic) _Bool isViewDidShow; // @synthesize isViewDidShow=_isViewDidShow;
@property(nonatomic) _Bool isViewShow; // @synthesize isViewShow=_isViewShow;
@property(nonatomic) int editStyle; // @synthesize editStyle=_editStyle;
@property(nonatomic) _Bool isNormalShow; // @synthesize isNormalShow=_isNormalShow;
@property(retain, nonatomic) TLOperationModel *opModel; // @synthesize opModel=_opModel;
@property(retain, nonatomic) TLCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
- (void).cxx_destruct;
- (void)needResetSendButtonText;
- (void)deleteButtonPressed;
- (void)sendButtonPressed;
- (void)emotionToSend:(id)arg1;
- (void)growingTextViewDidChange:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)showEmojiView:(_Bool)arg1 commentViewFollow:(_Bool)arg2 animation:(_Bool)arg3;
- (void)commentViewWakeupHideEmoji:(id)arg1;
- (void)commentViewWakeupEmoji:(id)arg1;
- (void)commentViewTopChanged:(id)arg1 isHideKeyboard:(_Bool)arg2 keyboardheight:(double)arg3;
- (void)refreshTableViewContentInset;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)dealloc;
- (void)viewWillDestroy;
- (void)keyboardFrameWillChange:(id)arg1;
- (void)keyboardWillDisappear:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)doKeyboardAnimation:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)closeKeyboard:(id)arg1;
- (void)didTapBGView:(id)arg1;
- (void)removeKeyboardObserver;
- (void)addKeyboardObserver;
- (void)cheackKeyBoard;
- (void)beforePushViewController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

