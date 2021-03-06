/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSCHSupportsRendering>, TSCHChartInfo, TSCHChartLayoutItem, TSCHChartModel;

@interface TSCHRenderer : NSObject <TSCHSupportsTextEditing> {
    TSCHChartLayoutItem *mChartLayoutItem;
    <TSCHSupportsRendering> *mChartRep;
}

@property(readonly) TSCHChartInfo * chartInfo;
@property(readonly) <TSCHSupportsRendering> * chartRep;
@property(readonly) struct CGColor { }* debugColor;
@property(readonly) BOOL debugLayout;
@property(readonly) TSCHChartLayoutItem * layoutItem;
@property(readonly) TSCHChartModel * model;
@property(readonly) BOOL supportsSeparateLabelsRenderPass;
@property(readonly) float viewScale;

- (void)addSelection:(id)arg1 toCGPath:(struct CGPath { }*)arg2;
- (BOOL)canEditTextForSelectionPath:(id)arg1;
- (BOOL)canRenderSelectionPath:(id)arg1;
- (id)chartInfo;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })chartLayoutSpaceRenderingRect;
- (id)chartRep;
- (int)chunkPlane;
- (void)dealloc;
- (struct CGColor { }*)debugColor;
- (BOOL)debugLayout;
- (void)drawErrorBarsInContext:(struct CGContext { }*)arg1 chartVertical:(BOOL)arg2;
- (void)drawTrendLinesInContext:(struct CGContext { }*)arg1 chartVertical:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForEditingTextForSelectionPath:(id)arg1;
- (id)initWithChartRep:(id)arg1 layoutItem:(id)arg2;
- (BOOL)isCompositeRenderer;
- (id)layoutItem;
- (id)model;
- (void)p_debugLayoutInContext:(struct CGContext { }*)arg1;
- (void)p_renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)renderIntoContext:(struct CGContext { }*)arg1 selection:(id)arg2;
- (void)renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)strokeRectInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 color:(struct CGColor { }*)arg3;
- (BOOL)supportsSeparateLabelsRenderPass;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tLayerRectForContext:(struct CGContext { }*)arg1;
- (int)textDrawingFlagForSelectionPath:(id)arg1;
- (id)textEditorForSelectionPath:(id)arg1 chartEditor:(id)arg2;
- (void)useEditedString:(id)arg1;
- (float)viewScale;

@end
