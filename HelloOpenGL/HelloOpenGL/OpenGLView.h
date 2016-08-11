//
//  OpenGLView.h
//  HelloOpenGL
//
//  Created by logiph on 8/10/16.
//  Copyright © 2016 logiph. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>
/*
 * https://www.raywenderlich.com/3664/opengl-tutorial-for-ios-opengl-es-2-0
 * 该地址为学习的参考
 */
@interface OpenGLView : UIView

// 用于opengl绘制的layer
@property(nonatomic, strong) CAEAGLLayer *eaglLayer;

// opengl绘制的Context对象
@property(nonatomic, strong) EAGLContext *context;

@property(nonatomic, assign) GLuint colorRenderBuffer;

@property(nonatomic, assign) GLuint positionSlot;
@property(nonatomic, assign) GLuint colorSlot;

@property(nonatomic, assign) GLuint projectionUniform;

@property(nonatomic, assign) GLuint modelViewUniform;

@end
