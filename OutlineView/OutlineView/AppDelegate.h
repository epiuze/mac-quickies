//
//  AppDelegate.h
//  OutlineView
//
//  Copyright (c) 2013 company. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate, NSOutlineViewDelegate, NSOutlineViewDataSource>

@property (assign) IBOutlet NSWindow *window;

@end
