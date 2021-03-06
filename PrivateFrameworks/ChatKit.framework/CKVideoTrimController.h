/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKTrimControllerDelegate>, CKMediaObject, UIVideoEditorController;

@interface CKVideoTrimController : NSObject <UIVideoEditorControllerDelegatePrivate, UINavigationControllerDelegate> {
    <CKTrimControllerDelegate> *_delegate;
    UIVideoEditorController *_editVideoVC;
    CKMediaObject *_originalMediaObject;
    CKMediaObject *_trimmedMediaObject;
}

@property <CKTrimControllerDelegate> * delegate;
@property(retain) UIVideoEditorController * editVideoVC;
@property(retain) CKMediaObject * originalMediaObject;
@property(retain) CKMediaObject * trimmedMediaObject;

- (void)dealloc;
- (id)delegate;
- (id)editVideoVC;
- (id)initWithMediaObject:(id)arg1 maxTrimDuration:(double)arg2;
- (id)originalMediaObject;
- (void)setDelegate:(id)arg1;
- (void)setEditVideoVC:(id)arg1;
- (void)setOriginalMediaObject:(id)arg1;
- (void)setTrimmedMediaObject:(id)arg1;
- (id)trimmedMediaObject;
- (void)videoEditorController:(id)arg1 didFailWithError:(id)arg2;
- (void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2;
- (void)videoEditorController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)videoEditorControllerDidCancel:(id)arg1;

@end
