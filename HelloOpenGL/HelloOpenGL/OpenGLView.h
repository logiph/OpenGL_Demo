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

@interface OpenGLView : UIView

@property(nonatomic, strong) CAEAGLLayer *eaglLayer;
@property(nonatomic, strong) EAGLContext *context;
@property(nonatomic, assign) GLuint colorRenderBuffer;

@end
