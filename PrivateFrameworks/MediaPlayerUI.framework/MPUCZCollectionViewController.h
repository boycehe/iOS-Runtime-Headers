/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class <MPUCZCollectionViewControllerDelegate>, MPImageCache, MPUCZCollectionView, MPUDataSource, UICollectionView;

@interface MPUCZCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    struct CGSize { 
        float width; 
        float height; 
    MPUCZCollectionView *_collectionView;
    int _coverCountPerColumn;
    MPUDataSource *_dataSource;
    <MPUCZCollectionViewControllerDelegate> *_delegate;
    MPImageCache *_imageCache;
    } _itemSize;
    struct __CFBitVector { } *_preloadedImageVector;
}

@property(readonly) UICollectionView * collectionView;
@property int coverCountPerColumn;
@property(retain) MPUDataSource * dataSource;
@property <MPUCZCollectionViewControllerDelegate> * delegate;
@property(retain) MPImageCache * imageCache;
@property struct CGSize { float x1; float x2; } itemSize;

- (void).cxx_destruct;
- (void)_beginPreloadingAlbums;
- (id)_collectionViewLayoutForColumnCount:(unsigned int)arg1;
- (void)_dataSourceDidInvalidateNotification:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView;
- (int)coverCountPerColumn;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)imageCache;
- (id)initWithDataSource:(id)arg1;
- (struct CGSize { float x1; float x2; })itemSize;
- (struct CGSize { float x1; float x2; })itemSizeForCoverCount:(unsigned int)arg1;
- (void)loadView;
- (void)reloadData;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)setCoverCountPerColumn:(int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setItemSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
